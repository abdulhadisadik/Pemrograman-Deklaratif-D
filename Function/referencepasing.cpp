#include  <iostream>

using namespace std;
void Tampil ( int  &Bil );	// Prototipe Fungsi
main()  
{	int Bil = 99;	
	system("cls");	
	cout << "Nilai Bil sebelum pemanggilan " << "fungsi = " << Bil << "\n";
	cout<<"alamat bil = "<<&Bil<<endl;
	Tampil ( Bil );	// Pemanggilan Fungsi
 	cout << "Nilai Bil setelah pemanggilan "<< " fungsi   = " << Bil << "\n";

}
void Tampil ( int  &Bil )  
{
	 cout << "Nilai Bil di dalam fungsi Tampil = "<< Bil << "\n";
	 cout<<"alamat bil setelah di passing = "<<&Bil<<endl;
       Bil++;
}
