#include<iostream>
#include<utility>
using namespace std;
pair<int, int> binary_search(int arr[][4],int row,int col,int key){
    int start=0;
    int end=(row*col)-1;
    int mid =(start+end)/2;
    
    while(start<=end){
        int element=arr[mid/col][mid%col];
        if(key==element){
            
            return  make_pair(mid/col,mid%col);
        }
        if(key<element){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
        
    }return make_pair(-1,-1);
}

int main (){

     int arr[3][4] = {};
    cout << "Enter the elements of array as a row " << endl;

    // taking input of array as a row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // printing the array as a row
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout <<endl;
    pair<int, int> result = binary_search(arr, 3, 4, 24);
    cout << "Row: " << result.first << ", Col: " << result.second << endl;

}