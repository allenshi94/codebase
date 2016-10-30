#########################################################################
# File Name: proc.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 13时47分16秒
#########################################################################
#!/bin/bash

if [ -e "./test.data" ];then
	rm ./test.data
	exit 0
fi
touch test.data
echo "hello" > test.data
