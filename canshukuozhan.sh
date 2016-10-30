#########################################################################
# File Name: canshukuozhan.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 14时34分50秒
#########################################################################
#!/bin/bash

unset foo
echo $foo

foo=${foo:-/a/a/a/a/a/b/b/b/c/c/c/c/c}
echo $foo

echo ${foo#*/a}
echo ${foo##*/a}
echo ${foo%/c*}
echo ${foo%%/c*}
