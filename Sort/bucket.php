<?php
/**
 * 桶排序
 * @param array $data
 */

function bucket(array $data = array())
{
    if (empty($data))
        throw new Exception("数据不能为空");
    $bucket = [];
    foreach ($data as $k => $v)
    {
        $bucket[$v][] = $k;
    }
    ksort($bucket);
    return $bucket;
}

include "../Config.php";
try{
    var_dump(bucket($sort_data2));
}catch (Exception $e){
    var_dump($e->getMessage());
}