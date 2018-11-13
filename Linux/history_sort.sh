/*里面记录是一些命令的记录，现在需要你从里面找出出现频率次数前3的命令并保存在/home
ps:2016百度校招题*/

cat history_data | cut -c 8- | sort | uniq -dc | sort -nr | head -n 3 | tee /home
