# AngularJS

* [Course: Build A Strong AngularJS Foundation](#foundation)

<a name='foundation'/>
## Course: Build A String AngularJS Foundation
---
- [M1: Hello AngularJS](#m1)
- [M2: Modules](#m2)
- [M3: Controllers and $scope](#m3)
- [M4: View](#m4)
- [M5: Services](#m5)
- [M6: Directives](#m6)

<a name="m1"/>
### M1: Hello AngularJS
- Created by Misko Hevery at Google over 3 weeks
- Currently at 1.2.8

#### Elevator Pitch
- Testable
- Forces MVVC
- 2-way data binding
- Templating is done in HTML
- Javascript Data Structures are flexible and ease integration with other
frameworks

#### Components of Angular

##### Module
- root component of angular
- all angular code is contained within the module

##### Config
- base configuration of the module

##### Routes
- routes dictate the state of the site affecting the scope, view and controller
- defined routes to allow deeplinking of the site

##### $Scope
- $scope contains the state of the view and the controller

##### View
- pulls values to be displayed from the $scope
- defines how those values are displayed
- templating

##### Controller
- manipulates the data and attaches methods and values to $scope

##### Directive
- Extend the View with more complex actions

##### Service
- Extends the Controller with more complex actions

#### Hello World

```HTML
<!--// index.html //-->
<!DOCTYPE html>
<html ng-app>
<head>
    <script type="text/javascript" src="../bower_components/angular/angular.js"></script>
</head>
<body ng-init="title='World'; items=[0,1,2,3];">
    Hello {{title}}
    <input type="text" ng-model="q" />
    <div ng-repeat="item in items | filter:q" ng-hide="hide">
        {{item}}
    </div>
    <button ng-click="hide=!hide">Toggle Show/Hide</button>
    <button ng-click="items[item.length] = items.length">Add a New Item</button>
</body>
</html>
```

#### Testing with Jasmine
```javascript
describe('Hello World', function() {
    it("should increment a value by 1", function() {
        expect(add(1).toBe(2);
        function add(value) {
            return value+1;
        }
    });

    if("should decrement a value by 1", function() {
        expect(subtract(1)).toBe(0);
        function subtract(value) {
            return value - 1;
        }
    });
});
```
#### $compile service
- parses HTML DOM and compiles DOM to inject $scope to perform angular bindings

#### $digest cycle
- When angular monitor sees a change, it kicks off a $digest cycle to check for
changes to angular values that need to be updated.

#### $apply
- $apply manually kicks off a $digest cycle when changes have been made beyond
angular's scope i.e. jquery, timeout, etc.

#### Model View ViewModel (MVVM)
- ViewModel: scope and controller combined

<a name="m2"/>
### M2: Modules

- defines all services, models & directives

#### config black
- tells module about constants and providers available to the module

#### run block
- instantiates and uses instances of those providers

#### Build your first module
```html
<!--//index.html//-->
<!DOCTYPE html>
<html ng-app="MyApp">
<body>
    <script type="text/javascript" src="../bower_components/angular/angular.js"></script>
    <script type="text/javascript" src="app.js"></script>
</body>
</html>
```
```javascript
// app.js
angular.module("MyApp", []);
```

#### Dependency Injection
- $provider "provides" us with the dependencies that we need

#### Using module constant
```javascript
// app.js
angular.module("MyApp", [])
    .constant("VERSION", "1.0");
```

#### Module.run
- Angular initializer for the module

##### Module Array Syntax
```javascript
angular.module("MyApp", [])
    .constant("VERSION", "1.0")
    .run(["VERSION", "$rootScope", function(VERSION, $rootScope) {
        alert($rootScope);
        alert(VERSION);
    }]);
```

<a name="m3"/>
### M3: Controllers and $scope
- $scope provides data binding and context between view and controller
- $rootScope is the parent of all $scope objects
- all $scope objects inherit from $rootScope
- Best Practice: Don't store  data or methods in $rootScope only use it as an event bus
- Angular Controller/Scope/View structure pulls state out of the DOM and into the Controller

#### Define
- Single Source of Truth

#### Build Your First Controller
```html
<!--//index.html//-->
<!DOCTYPE html>
<html ng-app="MyApp">
<body ng-controller="HomeCtrl">
    <h1>{{ title }}</h1>
    <div>{{ description }}</div>
    <script type="text/javascript" src="../bower_components/angular/angular.js"></script>
    <script type="text/javascript" src="app.js"></script>
</body>
</html>
```
```javascript
// app.js
angular.module("MyApp", [])
    .constant("VERSION", 1.1")
    .controller("HomeCtrl", ["$scope", function($scope) {
        $scope.title = "Welcome to the Home Page.";
        $scope.description = function() {
            return "This is the Home Page.";
        };
    }]);
```

#### Binding properties to $scope
- Binding properties and methods to $scope exposes  them to the View

#### Routes and route provider
- Provides deep linking to a specific state in your application via the URL

```html
<!--//index.html//-->
<!DOCTYPE html>
<html ng-app="MyApp">
<body>
    <div ng-view></div>
    <script type="text/javascript" src="../bower_components/angular/angular.js"></script>
    <script type="text/javascript" src="../bower_components/angular-route/angular-route.js"></script>
    <script type="text/javascript" src="app.js"></script>
</body>
</html>
```
```javascript
// app.js
angular.module("MyApp", ["ngRoute"]])
    .constant("VERSION", 1.1")
    .config(["$routeProvider", function($routeProvider) {
        $routeProvider.when("/", {
            controller: "HomeCtrl",
            templateURL: "./base.html"
        });
        $routeProvider.when("/info",{
            controller: "InfoCtrl",
            templateURL: "./base.html"
        });
    }])
    .controller("HomeCtrl", ["$scope", function($scope) {
        $scope.title = "Welcome to the Home Page.";
        $scope.description = function() {
            return "This is the Home Page.";
        };
    }])
    .controller("InfoCtrl", ["$scope", function($scope) {
        $scope.title = "Welcome to the Info Page.";
        $scope.description = function() {
            return "This is the Info Page.";
        };
    }]);
```
```html
<!--// base.html //-->
<h1>{{ title }}</h1>
<p>{{ description() }}</p>
<a href="/info">Go To the Info Page</a>
```

<a name="m4"/>
### M4: View
- View is product of Compiling HTML with $scope

#### Types of Directives
- Layout
- Interaction
- Styling Directives

##### Layout Directives
- ngIf: adds or removes the element based on the value value  will be removed from the DOM
- ngShow/ngHide: Similar to ngIf except value will not be removed from DOM
- ngRepeat: makes a copy of element for each item in passed array
- ngSwitch: displays element based on switch statement
- ngInclude: includes a separate template

##### Interaction Directives
- ngModel: Sets a value on a form from the View; creates a 2 way binding
- ngBlur/ngFocus: Fired on input focus or blur
- ngClick: Defines what happens on click
- ngSubmit: Submits a form via 'Enter' key

##### Define
- Edit In Place

##### Styling Directives
- ngClass: attaches or detaches class based on expressions

<a anme="m5"/>
### M5: Services

<a name="m6"/>
### M6: Directives
