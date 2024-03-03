#include <iostream>
using namespace std;




int main()
{

    char a[4] = {'a', 'b', 'c', 'd'};
    int n = sizeof(a) / sizeof(a[0]);
    cout << endl;

    cout << n << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    char b[20];
    cin >> b;

    int m = sizeof(b) / sizeof(b[0]);
    cout << endl;

    cout << m << endl;
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << endl;
    }

    cout << b ;
    cout <<" rahman";
}   