#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter number " << endl;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        char value = 'A' + i - 1;
        int j = 1;
        while (j <= i)
        {
            cout << value;
            value = value + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}