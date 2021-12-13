#!/bin/bash

IPATHS=" -Iesmini/externals/pugixml/ -Iesmini/EnvironmentSimulator/Modules/CommonMini/ -Iesmini/EnvironmentSimulator/Modules/RoadManager -Iesmini/EnvironmentSimulator/Modules/Controllers  -Iesmini/EnvironmentSimulator/Modules/PlayerBase -Iesmini/EnvironmentSimulator/Modules/ScenarioEngine/SourceFiles/  -Iesmini/EnvironmentSimulator/Modules/ScenarioEngine/OSCTypeDefs/ -Iesmini/EnvironmentSimulator/Modules/ViewerBase -Iesmini/EnvironmentSimulator/Libraries/esminiLib/  -Iesmini/EnvironmentSimulator/Libraries/esminiRMLib/ -Iesmini/bin/ -Iesmini/externals/OpenSceneGraph/linux/include/  -Iesmini/externals/OSI/linux/include/"

array=(playerbase roadmanager scenarioengine)
for MYMODULE in "${array[@]}"; do
  echo $MYMODULE
  echo "========="
  rm -rf $PWD/src/$MYMODULE
  mkdir $PWD/src/$MYMODULE
  ~/binder/bin/binder --annotate-includes --trace --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind $MYMODULE --single-file --config $PWD/src/py$MYMODULE.cfg $PWD/src/py$MYMODULE.hpp -- -std=c++14 -DNDEBUG $IPATHS
done

MYMODULE="viewerbase"
echo $MYMODULE
echo "========="
rm -rf $PWD/src/$MYMODULE
mkdir $PWD/src/$MYMODULE
~/binder/bin/binder --annotate-includes --trace --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind viewer --single-file --config $PWD/src/py$MYMODULE.cfg $PWD/src/py$MYMODULE.hpp -- -std=c++14 -DNDEBUG $IPATHS

## no binding
array=(esminilib esminirmlib)
for MYMODULE in "${array[@]}"; do
  echo $MYMODULE
  echo "========="
  rm -rf $PWD/src/$MYMODULE
  mkdir $PWD/src/$MYMODULE
  ~/binder/bin/binder --annotate-includes --trace --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind "" --single-file --config $PWD/src/py$MYMODULE.cfg $PWD/src/py$MYMODULE.hpp -- -std=c++14 -DNDEBUG $IPATHS
done
