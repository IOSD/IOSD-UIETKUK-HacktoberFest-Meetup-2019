#include <iostream>
#include <string>

int main() {
    std::string str = "";
    std::cin >> str;

    std:string reverse = "";
    for(int i = 0; i < str.length(); i++)
        reverse += str[str.length() - 1 - i];
    
    if(str == reverse)
        std::cout << "Palindrome!";
    else
        std::cout << "Not a palindrome!";

    return 0;
}