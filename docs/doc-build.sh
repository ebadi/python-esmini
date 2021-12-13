#!/bin/bash

rm -f _build
make singlehtml
cp _build/singlehtml/index.html .
