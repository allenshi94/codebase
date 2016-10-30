#########################################################################
# File Name: echo.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月21日 星期五 15时50分36秒
#########################################################################
#!/bin/bash

read str

if [ $str = Hello ]
then
	echo "Hello!"
	else
		echo "???"
fi

read num
if [ $num -eq 1 ]
then
	echo "num is 1"
else if [ $num -eq 2 ]
	then
	echo "$num is 2"
	else
		echo "default"
	fi
fi

