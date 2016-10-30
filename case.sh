#########################################################################
# File Name: case.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 11时44分50秒
#########################################################################
#!/bin/bash

read answer
case "$answer" in
	yes|y|Yes|YES|Y)echo "yesssss";;
	no|n|No|NO|N)echo "nooooo";;
	*)echo "?????";;
esac
