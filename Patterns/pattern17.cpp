#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "please enter number";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char start = 'A' + i + j - 2;
            cout << start ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1;
    }
}