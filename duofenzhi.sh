#########################################################################
# File Name: duofenzhi.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 09时32分13秒
#########################################################################
#!/bin/bash

echo "Please input a num"
read num
if [ "$num" = 100 ]; then
	echo "num is 100"
elif [ "$num" = 200 ];then
	echo "num is 200"
elif [ "$num" = 300 ];then
	echo "num = 400"
elif [ "$num" = 500 ];then
	echo "num = 500"
else
	echo "num is not 100 or 200 or 300 or 400 or 500"
fi
	
