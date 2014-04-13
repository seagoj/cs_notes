## The router

### defining a router for /about
```javascript
App.Router.map(function() {
    // when user views /abaut use the aboutus handlebar template in the outlet
    this.route('about', {path: 'aboutus'});
});
```

### handlebar helpers
```javascript
{{#link-to 'index' class='navbar-brand'}}Homepage{{/link-to}}
{{#link-to 'about' tagName='li' class='additional_class'}}About{{/link-to}}
```

## Controller Basics
```javascript
// controller for index route; automatically selected based on route name
App.IndexController = Ember.Controller.extend({
    productsCount:  6,
    logo:           '/images/logo.png',
    time:           function() {
        return (new Date()).toDateString()
    }.property()
});
```

```html
<script type='text/x-handlebars' data-template-name='index'>
    <p>There are {{productsCount}} products</p>
    <img {{bind-attr src='logo'}} alt='Logo' />
    <div id='time'>{{time}}</div>
</script>
```

