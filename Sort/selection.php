<?php
/**
 * 选择排序
 * @param array $data
 * @throws Exception
 */

function selection(array $data = array()){
    if (empty($data))
        throw new Exception("请输入测试数据");
    $num = count($data);
    for ($i = 0; $i < $num; $i ++)
    {
        $key = $i;
        for ($j = $i + 1; $j < $num; $j++)
        {
            if ($data[$key] > $data[$j])
            {

                $key = $j;
            }
        }
        if ($key != $i)
        {
            $temp = $data[$key];
            $data[$key] = $data[$i];
            $data[$i] = $temp;
        }
    }
    return $data;
}


include "../Config.php";
try{
    var_dump(selection($sort_data));
}catch (Exception $e){
    var_dump($e->getMessage());
}

