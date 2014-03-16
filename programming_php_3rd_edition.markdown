# Programming PHP (3rd Edition)

## Language Basics

### Float

```php
// Floats should be compared to a finite number of decimal places
function floatCompare($float1, $float2, $decimalPlaces=3) {
    $multiplier = pow(10, $decimalPlaces);
    return intval($float1 * $multiplier) === intval($float2 * $multiplier);
}
```

### Callbacks
```php
$callback = function cb() {
    echo "function called";
}
call_user_func($callback);
```

### Static Variables
```php
// Retain value between function calls, but are only accessible in the function
function tally() {
    static $total=0;
    return ++$total;
}
echo tally();   // 1
echo tally();   // 2
```

### Error Suppression
```php
@mysql_query($sql);
```

### Execute shell command
```php
echo `ls /var/www`
```
