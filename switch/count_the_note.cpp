#include<iostream> 
using namespace std;

int main() {
    int n;
    cout << "please enter your amount "<< endl;
    cin >> n;

    int count500;
    int count200;
    int count100;
    int count50;
    int count20;
    int count10;
    int count5;
    int count2;
    int count1;

    int fivhun=n/500;
    

    switch (500)
    {
    case 500 :
        count500=n/500;
        cout<< "500 Notes are " << count500 << endl; 
        count500=500*count500;
        count500=n-count500;
        
    case 200 :
        count200=count500/200;
        cout << "200 Notes are " << count200<< endl;
        count200=200*count200;
        count200=count500-count200;
    

    case 100 :
        count100=count200/100;
        cout << "100 Notes are " << count100<< endl;
        count100=100*count100;
        count100=count200-count100;
        

    case 50 :
        count50=count100/50;
        cout << "50 Notes are " << count50<< endl;
        count50=50*count50;
        count50=count100-count50;
        

    case 20 :
        count20=count50/20;
        cout << "20 Notes are " << count20<< endl;
        count20=20*count20;
        count20=count50-count20;
        

    case 10 :
        count10=count20/10;
        cout << "10 Notes are " << count10<< endl;
        count10=10*count10;
        count10=count20-count10;
        

    case 5 :
        count5=count10/5;
        cout << "5 Notes are " << count5<< endl;
        count5=5*count5;
        count5=count10-count5;
        

    case 2 :
        count2=count5/2;
        cout << "2 Dollars are " << count2<< endl;
        count2=2*count2;
        count2=count5-count2;
        

    case 1 :
        count1=count2/1;
        cout << "1 Dollars are " << count1<< endl;
        count1=1*count1;
        count1=count2-count1;
        
    }
}