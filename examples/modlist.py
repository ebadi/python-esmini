# -*- coding: utf-8 -*-


import importlib
import inspect
import sys
from xml.dom.minidom import Document

doc = Document()


## Taken from https://stackoverflow.com/questions/67816512/how-to-recursively-dir-an-object-in-python-3-9-5
def treeobj(obj, path=''):
    fullname = f'{path}.{obj.__name__}'.lstrip('.')
    node = doc.createElement('class')
    node.setAttribute('name', fullname)
    for attr in obj.__dict__.keys():
        if not attr.startswith('__'):
            val = obj.__dict__[attr]
            if inspect.isclass(val) or inspect.ismodule(val):
                elem = treeobj(val, fullname)
            else:
                elem = doc.createElement('attr')
                elem.setAttribute('name', attr)
            node.appendChild(elem)
    return node


def lst(arg):
    doc = Document()
    print("==========", arg, "==========")
    obj = importlib.import_module(arg)
    doc.appendChild(treeobj(obj))
    print(doc.toprettyxml())
    print("Done")



lst("pyroadmanager")

lst("pyplayerbase")
lst("pyviewerbase")
lst("pyscenarioengine")
