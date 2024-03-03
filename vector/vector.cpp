#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "capacity " << v.capacity() << endl;
    cout << "Size " << v.size() << endl;
    
    v.push_back(1);
    cout << "capacity " << v.capacity() << endl;
    cout << "Size " << v.size() << endl;
    cout << v.at(0) << endl;

    v.push_back(2);
    cout << "capacity " << v.capacity() << endl;
    cout << "Size " << v.size() << endl;
    cout << v.at(1) << endl;

    v.push_back(3);
    cout << "capacity " << v.capacity() << endl;
    cout << "Size " << v.size() << endl;
    cout << v.at(0) << endl;
    cout << v.at(1) << endl;
    cout << v.at(2) << endl;

    cout<<"first "<<v.front()<<endl;
    cout<<"last "<<v.back()<<endl;

    cout<<"before pop back "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<"after pop back "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"befor clear "<<v.size()<<" "<<v.capacity()<<endl;
    v.clear();
    cout<<"after clear "<<v.size()<<" "<<v.capacity()<<endl;
    
}