#include <iostream>
using namespace std;

void print(int n)
{
    // Base case
    if (n == 0)
        return;
        
    // Processing
    cout << n << endl;

    // Recursive relation
    print(n - 1);
}

int main()
{
    int n;
    cout << "Please enter the number " << endl;
    cin >> n;
    cout << endl;

    print(n);
}