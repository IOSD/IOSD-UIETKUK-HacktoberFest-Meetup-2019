String.prototype.isPalindrome = function() { //here i made a prototype
      var normalized = this.toLowerCase()
        .match(/[a-z]/gi)                       // use of regular expression 
        .reverse();                             // this functionmade string reverse
      return normalized.join("") === normalized.reverse().join(""); // this will return reverse string
    };

    if("bob.".isPalindrome()){
      console.log("Is Palindrome");
  }else{
      console.log("It's not Palindrome");
  }
