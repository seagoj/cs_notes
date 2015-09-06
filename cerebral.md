# Cerebral JS Framework

## [Introduction](https://www.youtube.com/watch?v=O_fk8jBtKSU);

### Flux

#### Action Creators

#### Stores

### Baobab
* Single object to store state
* state tree
* frees controller to only handle state changes

#### Example Controller Function
```javascript
var getUser = function(){
    tree.set('isLoading', true);
    ajax.get('/user')
        .then(function(user){
            tree.set('user', user);
            tree.set('isLoading', false);
        })
        .catch(function(error){
            tree.set('error', error);
            tree.set(isLoading', false);
        });
}
```

### How Cerebral makes it better
```javascript
// name of signal should always describe what happened in the view layer to cause it
signal('appMounted',
    // arguments are functions (actions)
    setLoading,
    // actions inside array are async
    [
        getUser, 
        // defines callbacks for get
        {
            success: [setUser],
            error:   [setError]
        }
    ],
    unsetLoading
);

// input: generated from triggering a signal or action
// state: endpoint to model layer
var setLoading = function(input, state){
    state.set('isLoading', true);
};

// output: object containing result of function
// services: inject libraries (ajax, lodash, etc)
var getUser = function(input, state, output, services){
    services.ajax('/user')
        .then(output.success)
        .fail(output.error);
};

var setUser = function(input, state){
    state.set('user', input.user);
};
```

## [Getting Started](https://www.youtube.com/watch?v=cFB5V86Kz20)

### Installation

```shell
npm install cerebral cerebral-immutable-store cerebral-react superagent
npm start
```

### Folder structure
* app
** actions
** components
** factories
** signals

