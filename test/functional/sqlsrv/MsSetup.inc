<?php
/*
    Microsoft SQL Server Driver for PHP - Unit Test Framework
    Copyright (c) Microsoft Corporation.  All rights reserved.

    Description:
        Global variables defining the execution context

*/
$PhpDriver = "Microsoft SQL Server Driver for PHP";

$server = 'TARGET_SERVER';
$database = 'TARGET_DATABASE';
$userName = 'TARGET_USERNAME';
$userPassword = 'TARGET_PASSWORD';

$tableName = "php_test_table";
$tableIndex = "php_test_table_index";
$procName = "php_test_proc";
$fileName = "php_test_file.dat";

$connectionOptions = array("Database"=>$database, "UID"=>$userName, "PWD"=>$userPassword, "TraceOn"=>false);
$daasMode = false;
$marsMode = true;

$traceEnabled = false; 

$adServer = 'TARGET_AD_SERVER';
$adDatabase = 'TARGET_AD_DATABASE';
$adUser = 'TARGET_AD_USERNAME';
$adPassword = 'TARGET_AD_PASSWORD';

if (isset($_ENV['MSSQL_SERVER']) || isset($_ENV['MSSQL_USER']) || isset($_ENV['MSSQL_PASSWORD'])) {
    $server = $_ENV['MSSQL_SERVER'];
    $uid = $_ENV['MSSQL_USER'];
    $pwd = $_ENV['MSSQL_PASSWORD'];
    $databaseName = $_ENV['MSSQL_DATABASE_NAME'];
} else {
    $uid = $userName; 
    $pwd = $userPassword; 
    $databaseName = $database; 
}
?>
