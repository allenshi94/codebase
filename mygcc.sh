#########################################################################
# File Name: mygcc.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月26日 星期三 09时04分41秒
#########################################################################
#!/bin/bash
src=$1
gcc $src -o ${src%.c}