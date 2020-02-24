<?php
highlight_file(__FILE__);
$code = $_GET['code'];
if (!empty($code)) {
        if (';' === preg_replace('/[a-z]+\((?R)?\)/', NULL, $code)) {
            if (preg_match('/serialize|crypt|readfile|if|time|local|sqrt|et|na|nt|strlen|info|path|rand|dec|bin|hex|oct|pi|exp|log/i', $code)) {
                    echo 'bye~';
                } else {
                    eval($code);
                }
            }
        else {
            echo "No way!!!";
        }
}else {
        echo "No way!!!";
    }