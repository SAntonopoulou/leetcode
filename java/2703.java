var argumentsLength = function(...args) {
    let number = 0;
    for (const key in args) {
        if (args.hasOwnProperty(key)) { number += 1; }
    }
    return number;
};
