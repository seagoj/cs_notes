# *Effective Javascript - 68 Specific Ways to Harness the Power* by David Herman

## Variable Scope

### Closures
1) Javscript allows you to refer to variables outside of the current function
2) Functions can refer to variables defined in outer functions even after those outer functions have returned.
3) Closures can update the values of outer variables
4) Closures store their outer variables by reference, not by value

#### Examples
    function sandwichMaker(magicIngredient) {
        return function(filling) {
            return magicIngredient + " and " + filling;
        }
    }

    var hamAnd = sandwichMaker('ham');
    hamAnd('cheese');   // "ham and cheese"
    hamAnd('mustard');  // "ham and mustard"
    var turkeyAnd = sandwichMaker('turkey');
    turkeyAnd('swiss'); // "turkey and swiss"

    function box() {
        var val = undefined;
        return {
            set:    function(newVal) {
                val = newVal;
            },
            get:    function() {
                return val;
            },
            type:   function() {
                return typeof val;
            };
    }

    var b = box();
    b.type();       // undefined
    b.set(98.6);
    b.get();        // 98.6
    b.type();       // 'number'

### Variable Hoisting
**Lexical scoping** - with only a few exceptions a reference to a variable is bound to the newarest scope in which it was declared. However, Javascript does not support **block scoping**: Variable definitions are not scoped to their nearest enclosing statement or block, but rather to their containing function.

Variable definitions get moved to the top of the containing function and assignment statements are left in place.

The sole exception is *exceptions*. A caught exception is bound to the catch block;

### Immediately Invoked Function Expression (IIFE)
    function wrapElements(a) {
        var result = [];
        for (var i=0, n = a.length; i<n; i++) {
            // Begin IIFE example
            (function(j) {
                result[i] = function() {
                    return a[j];
                }
            }) (i);
        }
        return result;
    }

###
