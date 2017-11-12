<?php
/**
 * 直接插入排序
 * @param array $data
 */
function insert(array &$data = array())
{
    if (empty($data))
        throw new Exception("数据不能为空");
    $num = count($data);
    for ($i = 1; $i < $num; $i++)
    {
        $temp = $data[$i];
        $j = $i - 1;
        while ( $j >= 0 && $temp < $data[$j])
        {
            $data[$j+1] = $data[$j];
            $j--;
        }
        $data[$j+1] = $temp;
    }
}

/**
 * 折半插入排序
 * @param array $
 */
function insert2(array &$data = array())
{
    if (empty($data))
        throw new Exception("数据不能为空");
    $num = count($data);
    for ($i = 1; $i < $num; $i++)
    {
        $temp = $data[$i];
        $low  = 0;
        $high = $i - 1;

        while ($low <= $high)
        {
            $mid = floor(($high+$low)/2);
            if ($temp < $data[$mid])
                $high = $mid - 1;
            else
                $low = $mid + 1;
        }

        for($j = $i; $j > $low; $j--)
        {
            $data[$j]  = $data[$j-1];
        }

        $data[$j] = $temp;
    }
}

include "../Config.php";
try{
    insert2($sort_data);
    var_dump($sort_data);
}catch (Exception $e){
    var_dump($e->getMessage());
}
