#########################################################################
# File Name: find_root_dir.sh
# Author: shihaotian
# mail: allenshi94@163.com
# Created Time: 2016年10月24日 星期一 15时19分12秒
#########################################################################
#!/bin/bash

dir=`find -name root_dir.sh`
dir=${dir##/shell_test*}
dir=${dir%%/root_dir.sh}
echo $dir

