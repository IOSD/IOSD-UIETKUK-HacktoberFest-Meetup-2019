#include <iostream>
using namespace std;

//fastest way to check odd or even
//also, added template to work with every integral types (int, short, long, char)
template<class T>
constexpr inline bool isEven(T a)
{
    static_assert(is_integral<T>::value, "Argument must be of integral type");
    return !(a & 1); //or !(a % 2) the are the same
}

template<class T>
constexpr inline bool isOdd(T a)
{
    static_assert(is_integral<T>::value, "Argument must be of integral type");
    return a & 1; //or a % 2 the are the same
}

//just useful functions to print easier
template<class T>
constexpr inline void printIsEven(T a)
{
    cout << "isEven(" << a << ") = " << (isEven(a) ? "true" : "false") << endl;
}

template<class T>
constexpr inline void printIsOdd(T a)
{
    cout << "isOdd(" << a << ") = " << (isOdd(a) ? "true" : "false") << endl;
}


int main()
{
    printIsEven(0);
    printIsEven(1);
    printIsEven(2);
    printIsEven(5);

    printIsOdd(0);
    printIsOdd(1);
    printIsOdd(2);
    printIsOdd(5);
    
    /*
    //custom runtime test
    cout << "=========" << endl;
    
    int value;
    cin >> value;
    
    printIsEven(value);
    */
    
    return 0;
}
