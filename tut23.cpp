#include<iostream>
using namespace std;

int main(){
    //creating 2d array
    int arr[3][3]={};
    cout<<"Enter the elements of array as a row "<<endl;
    
    //taking input of array as a row wise 
    for(int row =0;row<3;row++){
        for(int col=0;col<3;col++){
            cin >> arr[row][col];
        
        }
    }
    
    //printing the array as a row
    for(int row=0;row<3;row++){
        for (int col = 0; col < 3; col++)
        {
            cout<< arr[row][col]<< " ";
        }
        cout<<endl;
    }
    
    cout << endl;

int drr[3][3]={};

cout << "enter the elements of array as a column"<< endl;

//taking input as a column
for(int col=0;col<3;col++){
    for(int row=0;row<3;row++){
        cin >> drr[row][col];
    }
}

//printing output as a column
for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
        cout << drr[row][col]<<" ";
    }
    cout << endl;
}

    /* int brr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            cout << brr [i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout << endl;

    int crr[4][4]={{1,2,3,4},{4,5,6,7},{8,9,10,11},{13,14,15,16}};

    for(int i=0;i<4;i++){
        for (int j = 0; j < 4; j++)
        {
            cout << crr [i][j]<<" ";
        }
        cout<<endl;
        
    } */

}