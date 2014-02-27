# *Learning PHP, MySQL & Javascript* - Nixon, Robin

## PHP

### && vs. and / || vs. or
Words have lower precedence than symbol versions;

    // Used when lower precedence is required
    mysql_query($q) or die();

### heredoc tags
Multiline strings between two tags

    echo <<<_END
        Line 1
        Line 2
        Line 3
    _END;

### print vs. echo
echo is almost always faster since it’s not a function, but print can be used in more complex situations

    $b ? print “TRUE” : print “FALSE”;))

### extract
turns an associative array into variables as name=>value
    $vars = array('foo'=>1, 'bar'='Steve');

    extract($vars);     // $foo=1; $bar='Steve';

### compact
turns variables passed as string names into associative array

    $foo = 1;
    $bar = 'Steve';

    compact('foo','bar');   // array('foo'=>1,'bar'='Steve');

### final
prohibits class method from being overridden by subclass

    final public function cant_change_me() {

    }

## MySQL

### Indexing
#### Add indexes for all columns of a database that will be searched

    ALTER TABLE foo ADD INDEX(bar(20));
    ALTER TABLE fizz ADD INDEX(buzz);

#### Create Indexes for use

    CREATE INDEX bar ON foo (bar(20));

### GROUP BY
Groups query results by the value of a column


### Database Structure
#### Normalization
Separate all data so that each element only appears once

##### First Normal Form
1) There should be no repeating columns containing the same kind of data.
2) All columns should contain a single value.
3) There should be a primary key to uniquely identify each row.

##### Second Normal Form
1) Identify columsn whose data repeats and move them to a separate table

##### Third Normal Form
1) Data that is not directly dependent on the primary key should also be moved
into separate tables, according to the dependence. Ex// values that could be
shared by other entries should be in a separate table.

## PHP & MySQL
### Input sanitization
    function sanitizeStr($dirty) {
        return strip_tags(
            htmlentities(
                stripslashes(
                    $dirty
                )
            )
        );
    }

    function sanitizeSql($dirty) {
        return sanitizeStr(
            mysql_real_escape_string($dirty)
        );
    }
