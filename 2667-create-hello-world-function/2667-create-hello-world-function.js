/**
 * @return {Function}
 */
var createHelloWorld = function() {
    let ans="Hello World"
    return function(...args) {
        return ans;
    };
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */