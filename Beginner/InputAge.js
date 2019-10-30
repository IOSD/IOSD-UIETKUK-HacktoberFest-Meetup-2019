 function cal(age) {
      if (typeof age != "number") return console.log("Please Enter a number");
      else if (age > 18) return console.log("adult");
      else if (age < 10) return console.log("child");
      else return console.log("teen");
    }
cal(10);
