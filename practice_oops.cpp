#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
        int health;
        int level;
        string name;
        Hero(){}
        Hero(int health,int level,string s){
            // name=new string;
            this->name=s;
            this->health=health;
            this->level=level;
        }

        ~Hero(){
            cout<<this->name<<endl;
        }
};
//satic int val
// class chk{
//     public:
//         static int st;
//         int fun(){
//             cout<<st<<endl;
//         }
// };
// int chk::st=55;

//constat member funtion examples
// class c1{
//     public:
//         int a;

//         c1(int a){
//             this->a=a;
//         }
//         // int const_fun() const{
//         //     here this gives an error because ypu cannot
//         //     change values in const funtion
//         //     this->a=66;

//         //     return 0;
//         // }
// };

int main(){
    // cout<<chk::st<<endl;
    // //Shallow copy because here when we Dint create
    // // any copy constructor
    // //copy assignment operator
    // //hero by static
    // Hero a(1,2,"aryaman");
    // //hero by dynamic
    // //here destructor should be called manually
    // Hero*b =new Hero(5,55,"abhishek");
    // delete b;

    //*****const keyword***//;

    //1) constant variabl
    // const int const_var=5;
    // here this value does not changes

    // 2) constant pointer
    // int x=4;
    // int y=55;
    // int* const ptr=&x;
    // cout<<*ptr<<endl;
    // *ptr=y;
    // cout<<*ptr<<endl;

    // 3) pointer to constant variable
    // int x=55;
    // int y=44;
    // const int* ptr=&x;
    // ptr=&y;
    // cout<<*ptr<<endl;
    
    return 0;
}