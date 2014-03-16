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


