#########################################################################
# File Name: goodmoring.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月23日 星期日 17时52分50秒
#########################################################################
#!/bin/bash

echo "Is it morning? Please answer yes or no"
read answer
if [ $answer = "yes" ];then
	echo "Good morning!"
elif [ $answer = "no" ];then
	echo "Good afternoon!"
else
	echo "???"

fi
