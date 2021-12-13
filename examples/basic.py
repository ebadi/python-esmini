# -*- coding: utf-8 -*-

import pyplayerbase
import time

player = pyplayerbase.ScenarioPlayer(
    ["python-esmini", "--window", "60", "60", "800", "400", "--osc", "./esmini/resources/xosc/cut-in.xosc"])
while not player.IsQuitRequested():
    player.Frame(1)
    time.sleep(1)
