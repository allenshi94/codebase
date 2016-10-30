#########################################################################
# File Name: great.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月21日 星期五 22时03分07秒
#########################################################################
#!/bin/bash

echo "Please enter num 1:"
read num1
echo "Please enter num 2:"
read num2
if [ $num1 -gt $num2 ]
then
	echo "$num1 is greater"
else if [ $num1 -lt $num2 ]
then
	echo "$num2 is greater"
else
	echo "$num1 is equal to $num2"
	fi
fi
