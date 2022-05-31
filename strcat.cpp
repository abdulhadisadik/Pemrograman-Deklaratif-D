#include<iostream>
#include<string.h>
using namespace std;


main(){
    char str1[10],str2[10];
    cout<<"Kata 1 = ";
    cin.getline(str1,sizeof(str1));
    cout<<"Kata 2 = ";
    cin.getline(str2,sizeof(str2));
    string str3 = strcat(str1,str2);
    cout<<str3<<endl;
    // convert string to char
    cout<<str3.length()<<endl;
}