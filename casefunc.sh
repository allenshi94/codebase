#########################################################################
# File Name: case.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 11时44分50秒
#########################################################################
#!/bin/bash
case_()
{
read answer
case "$answer" in
	yes|y|Yes|YES|Y)return 1;;
	no|n|No|NO|N)return 0;;
	*)return 3;;

esac
}

case_
echo "return $?"
num2=$(case_)
echo $num2
