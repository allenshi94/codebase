#########################################################################
# File Name: foo.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 11时23分33秒
#########################################################################
#!/bin/bash

foo()
{
	echo "arg num:$#"
	echo "args are $*"
	echo "arg 1 is: $1"
	echo "arg 2 is: $2"
	echo "$0"
}

foo 123 abc
