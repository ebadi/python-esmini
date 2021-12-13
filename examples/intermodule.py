# -*- coding: utf-8 -*-

import pyroadmanager
import pyplayerbase
import pyscenarioengine
import time

print(dir(pyplayerbase.ScenarioPlayer))
print("Python: running constructor")
player = pyplayerbase.ScenarioPlayer(
    ["filename", "--window", "60", "60", "800", "400", "--osc", "./esmini/resources/xosc/cut-in.xosc"])

se = player.scenarioEngine

print("scenarioEngine", se)
print("scenarioEngine", dir(se))
while not player.IsQuitRequested():
    print("x")
    player.Frame(1)
    print("GetParameterValueInt", player.GetParameterValueInt("test", 1))
    print("scenarioEngine method:", se.GetHeadstartTime())

odr = player.GetODRManager()
print("GetODRManager", odr)
print("GetODRManager", dir(odr))

road = odr.GetRoadById(0)
print("road::", road)
print("road.Print()::")
road.Print()

sg = player.scenarioGateway
print("scenarioGateway", sg)
print("scenarioGateway", dir(sg))

exit()
