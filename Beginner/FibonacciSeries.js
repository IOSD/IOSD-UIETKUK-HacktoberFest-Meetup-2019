 fib = function(num) {
      if (num === 1) {
        return [0, 1];
      } else {
        var result = fib(num - 1);
        result.push(result[result.length - 1] + result[result.length - 2]);
        return result;
      }
    };
console.log(fib(6));
