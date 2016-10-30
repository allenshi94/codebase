#########################################################################
# File Name: score.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月21日 星期五 16时10分27秒
#########################################################################
#!/bin/bash

read score
if [ $score -gt 90 ]
	then
		echo "优秀"
else if [ $score -gt 80 ]
	then
		echo "良好"
else if [ $score -gt 60 ]
	then
		echo "及格"
	else
		echo "不及格"
		fi
	fi
fi

