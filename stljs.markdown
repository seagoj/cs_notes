# STL JS - Distributed, Functional, Reactive Javascript
* RT push to client

## Functional Reactive Pattern
* Updates all server side dependent elements before client side push
* Front end: template & element relationship definitions
* Angular & Ember: single client solution
* Updates as sent as transactiional edits so the values can be received out of order
o binary serialization
o acyclic graphs
o observables

## Database
o hash index
o query plan
o shards

## Edit commit plan
* transactions are taken from memory and commited to database after a period
