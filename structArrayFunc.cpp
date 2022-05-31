#include<iostream>
#include<iomanip>
using namespace std;

struct  Mahasiswa  {  
				char  Nim[11];
				char  Nama[20];
				char  Mata_Kuliah[20];
				float Nilai; };
void display(Mahasiswa s[]);
main()
{
	Mahasiswa  M[3]; 
	for ( int  i=0; i<3; i++ )
	{ 
		cout << "Nim              : ";  gets ( M[i].Nim );
	   	cout << "Nama           : ";  gets ( M[i].Nama );
	   	cout << "Mata Kuliah : "; gets ( M[i].Mata_Kuliah );
	   	cout << "Nilai             : ";  cin >> M[i].Nilai;
	    cout << "\n";
	    cin.ignore(); // MENGABAIKAN INPUT SEBELUMNYA
	}
	system("cls");	
	display(M);

	return 0;
}
void display(Mahasiswa s[]){
	cout << "------------------------------------------------------------------\n";
	cout << "No  Nim        Nama Mahasiswa      Mata Kuliah       Nilai\n";
	cout << "------------------------------------------------------------------\n";
	for ( int i=0; i<3; i++ )  
	{
	 			cout<<setw(4)<<setiosflags(ios::left)<<(i+1);
	            cout<<setw(11)<<setiosflags(ios::left)<<s[i].Nim;
	            cout<<setw(20)<<setiosflags(ios::left)<<s[i].Nama;
	            cout<<setw(18)<<setiosflags(ios::left)<<s[i].Mata_Kuliah;
	            cout<<setprecision(3)<<s[i].Nilai;   
	            cout<<"\n";         
	}
	cout << " ----------------------------------------------------------- \n";
}

