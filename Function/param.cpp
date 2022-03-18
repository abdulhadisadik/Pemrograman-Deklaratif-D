#include <iostream>
using namespace std;
//tampilkan hasil seperti berikut dengan tipe data yang sesuai
//a = 29
//b = 2
//c = A
void myFunction(int a,double b,char c);//function prototype
 
int main(){
    int var=29029;
    int a = 1;
    int b = 2;
    myFunction(var-29000-3,2,'A'); //pass by value
    return 0;
}
 
void myFunction(int a,double b,char c){
    cout<<"a"<<" = "<<a<<endl;
    cout<<"b"<<" = "<<b<<endl;
    cout<<"c"<<" = "<<c<<endl<<endl;
}
