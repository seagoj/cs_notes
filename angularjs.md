# AngularJS

* [Course: Build A Strong AngularJS Foundation](#foundation)

<a name='foundation'/>
## Course: Build A String AngularJS Foundation
---
- [M1: Hello AngularJS](#m1)
- [M2: Modules](#m2)
- [M3: Controller](#m3)
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
<a name="m2"/>
### M2: Modules

<a name="m3"/>
### M3: Controller

<a name="m4"/>
### M4: View

<a anme="m5"/>
### M5: Services

<a name="m6"/>
### M6: Directives
