#include<iostream>
using namespace std;

void swaparr(int arr[],int n){
    int start=0;
    int end=n-1;
    while (start <= end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
}
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[5]={1,5,8,6,4};
    int brr[6]={4,2,3,4,9,7};

     swaparr(arr,5);
     
     swaparr(brr,6);

     printarray(arr,5);
     cout << endl;
     printarray(brr,6);

}
