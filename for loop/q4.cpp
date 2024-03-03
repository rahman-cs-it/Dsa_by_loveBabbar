#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "please enter number" << endl;
    cin >> n;

    bool isprime = 1;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
            
        }
    }
    if (isprime == 1)
    {
        cout << n << " It is a prime number " << endl;
    }
    else
    {
        cout << "It is not a prime number " << endl;
    }
}