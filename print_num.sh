#########################################################################
# File Name: print_num.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 14时49分14秒
#########################################################################
#!/bin/bash
num=1
while [ $num -le 100 ]
do
	index="$num"
	echo  "num$index"
#	num=$expr($num + 1)
	num=$[$num+1]
done
