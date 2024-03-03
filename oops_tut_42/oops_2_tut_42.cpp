#include <iostream>
using namespace std;

class Hero{
    public:
    char name;
    int health;
    static int timetocomplete;
    


void print(){
    cout<<"Name is "<<name<<endl;
    cout<<"Health is "<<health<<endl;
}
//manual constructor
Hero(){
    cout<<"default constructor called"<<endl;
}
//parameterized constructor
Hero(int health){
    cout<<"address of this "<<this<<endl;
    cout<<"constructor called"<<endl;
    this->health  =health;
    cout<<health<<endl;
}
//destructor
~Hero(){
    cout<<"I am destructor of this class "<<endl;
}

};

int main (){


cout<<Hero::timetocomplete<<endl;

/* //destructor on static memory
Hero mustakim;
//destructor on dynamic memory
Hero *g=new Hero();
//maunually deleting dynamic me mory
delete g; */


//static allocation
/* Hero rahman(10);
cout<<"Address of rahman "<<&rahman<<endl;
 */
//copy constructor
/* Hero khalid(rahman);
cout<<khalid.health<<endl; */

/* rahman.name='w';
rahman.health=100;

cout<<endl<<"Rahman name is "<<rahman.name<<endl<<endl;
cout<<"Rahman health is "<<rahman.health<<endl<<endl;

//dynamic allocation
Hero *b=new Hero();
cout<<endl<<"Rahman name is "<<(*b).name<<endl<<endl;
cout<<"Rahman health is "<<(*b).health<<endl;

//dynamic allocation alternative method 
cout<<endl<<"Rahman name is "<<b->name<<endl<<endl;
cout<<"Rahman health is "<<b->health<<endl; */

}