#########################################################################
# File Name: ls.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 10时46分10秒
#########################################################################
#!/bin/bash

if [ $# = 0 ];then
	dir=.
elif [ $# = 1];then
	dir=$1
else
	echo "Error!"
	exit 0
fi

for day in $("ls dir")
do	
	echo $day
done
