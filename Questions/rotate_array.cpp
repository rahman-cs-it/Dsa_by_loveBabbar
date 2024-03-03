#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "please enter the size of the array" << endl;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    vector<int> brr;
    cout << endl;
    cout << "please enter the position" << endl;
    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {

        brr.push_back(move(arr[i]));
    }

    arr.erase(arr.begin(), arr.begin() + k);
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    arr.insert(arr.end(), brr.begin(), brr.end());

    // Display the updated elements in arr
    cout << "\nUpdated elements in arr: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }


    return 0;
}