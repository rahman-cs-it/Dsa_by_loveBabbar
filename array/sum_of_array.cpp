#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Please enter the size of array " << endl;
    cin >> n;

    int firarr[5];
    for (int i=0;i<n;i++){
        cin >> firarr[i];
    }
    for(int i=0;i<n;i++){
        cout << firarr[i] << " ";
    }
    cout << endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+firarr[i];
    }
    cout << sum;
}