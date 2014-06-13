# PHP

## Regular Expressions
```php
"/^c/"          // string beginning with c
"/c$/"          // string ending with c
"/./"           // any single character
"/c[aeiou]t/"   // c<any vowel>t
"/c[^aeiou]t/"  // c<anything other than a vowel>t
"/[0-9]/"       // any number 0-9
"/cat|dog/"     // cat or dog
```

## Array Functions
```php
range(0,100);                               // array(0...100);
extract(['var1'=>'val1','var2'=>val2']);    // initializes $var1, $var2
compact($var1, $var2);                      // array('var1'=>'val1', 'var2'=>val2');
array_walk($arr, $callback);                // run each element through the callback
array_reduce($arr, $callback);
array_sum($arr);                            // add all numbers in the array
array_filter($arr, $filter);                // filter array based on $filter function
array_search($value, $arr);                 // returns the index of $value in $arr or false
array_diff($arr1, $arr2);                   // returns difference between 2 arrays
array_unique($arr);                         // returns array of unique values
```

### Iterator Functions
```php
current($arr);  // current index of $arr
reset($arr);    // move to first index of $arr
next($arr);     // move to next index of $arr
prev($arr);     // move to prev index of $arr
end($arr);      // move to last index of $arr
each($arr);     // iterates through each index of $arr
```

## Iterator Interface
```php
// required methods for object to use foreach
interface Iterator
{
    function current();
    function key();
    function next();
    function rewind();
    function valid();
}
```

## Trait
```php
// reusable code without inheritence
trait Logger
{
    public log($logString) {
        echo $logString;
    }
}
```

## Abstract
```php
// method to be implemented in subclass
abstract class Component {
    abstract function printOutput();
}
```

## Introspection
```php
class_exists();
get_declared_classes();
get_class_vars();
get_class_methods();
get_parent_class();
get_class();
get_object_vars();
```

## Environment
```php
$_ENV   // environment variables
```

## PDO

### General Usage
```php
$db = new PDO("mysql:host=localhost;dbname=library", $username, $password);
$db->query($sql);
```

### Prepared statements
```php
$db->prepare("INSERT INTO table (id, title, isbn) VALUES (:id, :title, :isbn)");
$db->execute(['id'=>1, 'title'=>'Title', 'isbn'=>'0123456789']);
```

### Transactions
```php
$db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
$de->beginTransaction();
try {
    $db->exec($sql);
    $db->exec($sql2);
    $db->commit();
} catch (Exception $e) {
    $db->rollback();
    echo $e->getMessage();
}
```

## REST API
```php
interface JSONSerializable
{
    function jsonSerialize();
}
```

## PHP Configuration

### PDO
extension=php_pdo.dll
extension=php_pdo_mysql.dll

### Debugging
                    Dev         Staging                                 Prod
display_errors      On          Off                                     Off
error_reporting     E_ALL       E_ALL & ~E_WARNING & ~E_DEPRECATED      E_ALL & ~E_WARNING & ~E_DEPRECATED
variables_order     EGPCS       GPCS                                    GPCS
