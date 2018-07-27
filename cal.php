<?php
echo "请输入计算数:";
$jimmy = fgets(STDIN);
$t_start = round(microtime(true) * 1000);
echo sprintf("开始时间: %s\n", $t_start);
$j = 0;
for($i = 0; $i <= $jimmy; $i ++) {
	$j += $i;
}
$t_end = round(microtime(true) * 1000);
echo sprintf("结束时间: %s\n", $t_end);
$cal_res = $t_end - $t_start;
echo sprintf("总耗时: %s\n", $cal_res . "ms");
echo sprintf("计算结果: %s\n", $j);
?>
