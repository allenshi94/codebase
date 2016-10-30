#########################################################################
# File Name: hanshuchuandi.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 11时42分43秒
#########################################################################
#!/bin/bash

num=100
func()
{
	num=0
	echo $num
}

func
num2=$(func)
echo "num2 is $num2"
