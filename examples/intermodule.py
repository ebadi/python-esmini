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

rm = player.roadManager
print("roadManager", rm)
print("roadManager", dir(rm))

sg = player.scenarioGateway
print("scenarioGateway", sg)
print("scenarioGateway", dir(sg))

# road = rm.GetRoadById(0)
# print("road::", road)
# print("road.Print()::")
# road.Print()

exit()

while not player.IsQuitRequested():
    print("x")
    player.Frame(1)
    print("GetParameterValueInt", player.GetParameterValueInt("test", 1))
    print("scenarioEngine method:", se.GetHeadstartTime())
