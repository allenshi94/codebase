#########################################################################
# File Name: 0dao100.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 10时28分57秒
#########################################################################
#!/bin/bash

count=0
while [ $count -le 100 ]
do
	if [ $count -eq 50 ];then
		break
	fi

	if [ $count -eq 40 ];then
		count=$(expr $count + 1)
		continue
	fi
	echo $count
	count=$(expr $count + 1)
done
