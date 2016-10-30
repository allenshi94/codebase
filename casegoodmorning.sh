#########################################################################
# File Name: casegoodmorning.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月23日 星期日 18时24分48秒
#########################################################################
#!/bin/bash

echo "Is it morning?"
read answer
case "$answer" in
	yes|y|Yes|YES) echo "Good morning!";;
	no|n|No|NO) echo "Good afternoon!";;
	*) echo "???";;
esac
