#########################################################################
# File Name: week.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 13时53分17秒
#########################################################################
#!/bin/bash

echo "Please enter 1-7:"
read num
case "$num" in
	1)echo "Mon";;
	2)echo "Tue";;
	3)echo "Wed";;
	4)echo "thu";;
	5)echo "Fri";;
	6)echo "Sat";;
	7)echo "Sun";;
	*)echo "???";;
esac
