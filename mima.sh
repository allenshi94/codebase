#########################################################################
# File Name: mima.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 10时24分56秒
#########################################################################
#!/bin/bash

password=123456
echo "Please enter the password:"
read input
while [ "$input" != $password ]
do	
	echo "Password is incorrect!"
	read input
done
