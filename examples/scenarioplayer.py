# -*- coding: utf-8 -*-
import pyplayerbase
import time
import sys
import pyscenarioengine

print(dir(pyplayerbase.ScenarioPlayer))
print("Python: running constructor")

# python3 examples/scenarioplayer.py  ~/repositories/python-esmini/esmini/resources/xosc/pedestrian_collision.xosc
# ./esmini --window 60 60 800 400 --osc  ~/repositories/python-esmini/esmini/resources/xosc/pedestrian_collision.xosc
player = pyplayerbase.ScenarioPlayer(
    ["filename", "--window", "60", "60", "800", "400", "--osc", sys.argv[1]])

time.sleep(2)
print("Python: after constructor")
print("GetFixedTimestep", player.GetFixedTimestep())
print("IsQuitRequested", player.IsQuitRequested())

while not player.IsQuitRequested():
    print("x")
    player.Frame(1)
    time.sleep(1)
    print("GetParameterValueInt", player.GetParameterValueInt("test", 1))

print("Done")
