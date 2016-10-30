#########################################################################
# File Name: password.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月23日 星期日 18时17分37秒
#########################################################################
#!/bin/bash

echo "Please enter the password:"
read password

while [ $password != "123456" ];do
	echo "Please enter the password:"
	read password
done

echo "Welcome!"
