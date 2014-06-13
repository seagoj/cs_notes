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

### Declare
```php
declare();
register_tick_function();
```

### Variable Arguments
```php
function_get_args();                // get all passed arguments
function_num_args();                // get number of arguments passed
function_het_arg($argumentNumber);  // retrieve specific argument

### Type Hinting
```php
function a(int $a, callable $callback) {...}
```

### Anonymous Functions
Allowed

### Variables in string
```php
echo "You are the {$n}th person in line.";
```

### Nth character in string
```php
$string{$n};
```


