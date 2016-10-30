#########################################################################
# File Name: ls.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 10时46分10秒
#########################################################################
#!/bin/bash

if [ $# -eq 0 ];then
	dir=./
elif [ $# -eq 1];then
	dir=$1
else
	echo "Error!"
	exit 0
fi

cd $dir
ls
