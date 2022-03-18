#include <iostream>
using namespace std;

void printSomething();
main()
{
	cout<<"memanggil function";
	printSomething();
}
void printSomething(int x) 
{
	cin>>x;
   cout << x;
}
