#!/bin/bash

https://github.com/SynologyOpenSource/pkgscripts-ng.git pkgscripts

cd pkgscripts

./pkgscripts/EnvDeploy -v 6.2 -p apollolake


cd source/v2ray
wget https://cdn.kernel.org/pub/linux/kernel/v4.x/linux-4.4.59.tar.gz
tar xvf linux-4.4.59.tar.gz
cd -

#./pkgscripts/PkgCreate.py -x0 -c v2ray

