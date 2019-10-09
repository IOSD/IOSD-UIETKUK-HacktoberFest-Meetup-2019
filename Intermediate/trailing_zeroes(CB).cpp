#include <iostream>
using namespace std;

        int factorial(int n)
      {
        int fac=1;
        for(int a=1;a<=n;a++)
        {
            fac=fac*a;
        }
        return fac;
      }
        int main()
        {
            int n;
            cin>>n;
            int fac=factorial(n);
            int count=0;
            while(fac%10==0)
            {
                 count++;
                 fac=fac/10;


            }
            cout<<count;
        }

/*
ANOTHER METHOD
#include <iostream>
using namespace std;

// Function to return trailing
// 0s in factorial of n
int findTrailingZeros(int n)
{
    // Initialize result
    int count = 0;

    // Keep dividing n by powers of
    // 5 and update count
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;

    return count;
}

// Driver Code
int main()
{
    int n;
    cin>>n;
    cout << findTrailingZeros(n);
    return 0;
}
*/
