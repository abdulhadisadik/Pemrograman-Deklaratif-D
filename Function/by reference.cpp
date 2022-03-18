#include <iostream>
using namespace std;
void  Upper_Case ( char &ch );	// Prototipe Fungsi
main()
{	char ch;
	while (cin.get(ch))
	{
 	    Upper_Case ( ch );   // Pemanggilan fungsi
     	cout << ch;
  } 
}
void  Upper_Case ( char  &ch )
{
      ch = (ch >= 'a' && ch <= 'z' )  ?  (ch - 32)  :  ch;
}
