#include<iostream>
#include<vector>
using  namespace std;

vector<int>twosum(vector<int>&num,int target){
    vector<int>result;
    for(int i=0;i<num.size();i++){
        for(int j=i+1;j<num.size();j++){
            if(num[i]+num[j]==target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }return result;
}

int main(){
    int size;
    cout<<"Please enter the size of array"<<endl;
    cin>>size;

    vector<int>num(size);
    cout<<"Please enter the elements of the array "<<endl;
    for(int i=0;i<num.size();i++){
        cin>>num[i];
    }

    vector<int>ans=twosum(num,26);
    cout<<"first index: "<<ans[0]<<" second index: "<<ans[1]<<endl;
}