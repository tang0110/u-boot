#########################################################################
# File Name: shell.sh
# Author: Devin
# mail: tangbo@up3d.cn
# Created Time: Sun 04 Jun 2023 02:24:48 PM +08
#########################################################################
#!/bin/bash
make distclean
make  up3d_defconfig
make  -j12
#./imxdownload u-boot.bin /dev/sdb
