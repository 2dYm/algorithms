<?php
/**
 * 希尔排序
 * @param array $data
 */
function shell(array &$data = array())
{
    if (empty($data))
        throw new Exception("数据不能为空");
    $num = count($data);
    for ($i = floor($num/2); $i > 0; $i = floor($i/2))
    {
        for ($j = $i; $j < $num; $j++)
        {
            $temp = $data[$j];
            for ($k = $j; $k >= $i; $k = $k - $i)
            {
                if ($temp < $data[$k-$i])
                    $data[$k] = $data[$k-$i];
                else
                    break;
            }
            $data[$k] = $temp;
        }
    }
}


include "../Config.php";
var_dump($sort_data);
try{
    shell($sort_data);
    var_dump($sort_data);
}catch (Exception $e){
    var_dump($e->getMessage());
}