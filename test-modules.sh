#!/bin/bash

array=(playerbase roadmanager scenarioengine viewerbase)
for MYMODULE in "${array[@]}"; do
  echo "--------"
  echo $MYMODULE
  echo "--------"
  python3 -c "import py$MYMODULE; print(dir(py$MYMODULE));"
done

array=(esminilib esminirmlib)
for MYMODULE in "${array[@]}"; do
  echo "--------"
  echo $MYMODULE
  echo "--------"
  LD_LIBRARY_PATH=$PWD/esmini/bin python3 -c "import py$MYMODULE; print(dir(py$MYMODULE));"
done
