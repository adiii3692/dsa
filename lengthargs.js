/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    let counter = 0
    for(;counter<args.length;counter++){
        //Empty loop
    }
    return counter
 };
 
 /**
  * argumentsLength(1, 2, 3); // 3
  */