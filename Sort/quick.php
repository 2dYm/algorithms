<?php
/**
 * 快速排序
 * @param array $data
 * @throws Exception
 */
function quick(array $data = array())
{
    $num = count($data);
    if ($num <= 1)
        return $data;
    $left = $right = [];
    for ($i = 1; $i < $num; $i++)
    {
        if ($data[$i] < $data[0])
            $left[] = $data[$i];
        else
            $right[] = $data[$i];
    }
    $left = quick($left);
    $right = quick($right);
    return array_merge($left, [$data[0]], $right);
}

include "../Config.php";
try{
    var_dump(quick($sort_data));
}catch (Exception $e){
    var_dump($e->getMessage());
}