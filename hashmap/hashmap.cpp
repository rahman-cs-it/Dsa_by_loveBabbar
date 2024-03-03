#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>cipher;
        for(int i=0;i<nums1.size();i++){
            cipher[nums1[i]]=i;
        }
        for(int i=0;i<nums2.size();i++){
            cipher[nums2[i]]=nums1.size()+i;
        }
        int element=0;
        int cement=0;
        for(auto it=cipher.begin();it!=cipher.end();it++){
            element=it->second;
            cement=max(cement,element);
        }
        cement=cement+1;
        double sum=0;
        for(auto it=cipher.begin();it!=cipher.end();it++){
            sum=sum+it->first;
        }
        double finalans=sum/cement;
     return finalans;
    }
};

int main(){

unordered_map<string,int>m;     

//insertion at unordered map 

//first method 

pair<string,int>p=make_pair("babbar",3);
m.insert(p);

//second method 
pair<string,int>pair2("love",2);
m.insert(pair2);

//third method
m["mera"]=1;

//hashmap doesnot have duplicate keys like mera here
m["mera"]=2;

//searching 
cout<<  m["mera"]<<endl;
cout<<m.at("babbar")<<endl;


//searching a value that is not mapped 
//cout<<m.at("nothing")<<endl;

//searching a value that is not mapped via this method 
cout<<m["nothing"]<<endl;
cout<<m.at("nothing")<<endl; 

//size
cout<<m.size()<<endl;

//to check presence of the key 
cout<<m.count("mera")<<endl;
cout<<m.count("nhi")<<endl;

//erase 
cout<<m.erase("mera")<<endl;
cout<<m.size()<<endl;

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

//iterator in unordered_map
unordered_map<string,int> :: iterator it=m.begin();
while(it!=m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}

if(m.count("love")){
    cout<<"element found"<<endl;
}
else{
    cout<<"there is no element "<<endl;
}


vector<int> arr={0,1,2,3,4}; 
vector<int> brr={5,6,7,8,9};
unordered_map<int,int>n;
for(int i=0;i<arr.size();i++){
    n[arr[i]]=i;
}
for(int i=0;i<brr.size();i++){
    n[brr[i]]=arr.size()+i;
}
unordered_map<int,int>::iterator ite=n.begin();
while (ite !=n.end())
{
    cout<<ite->first<<" "<<ite->second<<endl;
    ite++;
}
int element=0;
int cement=0;

for(auto it=n.begin();it!=n.end();it++){
    element=it->second;
    cement=max(cement,element);
}
cement=cement+1;    
cout<<cement<<endl;
double sum=0;
for(auto it=n.begin();it!=n.end();it++){
    sum=sum+it->first;
}
cout<<sum<<endl;
double finalans =sum/cement;
cout<<finalans;


}