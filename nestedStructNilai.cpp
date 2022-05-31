#include<iostream>
#include<iomanip>
using namespace std;
struct  barang  {  
		char kdbrg[5];
		char nmbrg[15];
		float harga;
		int jml;
		int stok;
 };
 struct PO{
	char tglPO[15];
	char kdsup[15];
	barang brgkirim[10];
};


main()
{
	int jmlPsn,jmlBrg[10];
	PO brgPO[20];
	cout<<"Jumlah pemesan = ";cin>>jmlPsn;
	
	for ( int  i=0; i<jmlPsn; i++ )
	{ 
	 	cin.ignore();
		cout << "Tanggal pesan  : ";  gets (brgPO[i].tglPO);
	   	cout << "Kode Suplai    : ";  cin>>brgPO[i].kdsup;
	   	cout<<"Jumlah barang = ";cin>>jmlBrg[i];
	   	for(int j=0;j<jmlBrg[i];j++){
	   		cout << "Kode Barang : "; cin>>brgPO[i].brgkirim[j].kdbrg;
	   		cout <<"Nama barang : ";cin>>brgPO[i].brgkirim[j].nmbrg;
	   		cout <<"Harga barang : ";cin>>brgPO[i].brgkirim[j].harga;
	   		cout <<"Jumlah barang : ";cin>>brgPO[i].brgkirim[j].jml;
	   		cout <<"Stok barang : ";cin>>brgPO[i].brgkirim[j].stok;
			cout << "\n";
		   }
	   	
	}
	
	cout << "------------------------------------------------------------------------------------------\n";
	cout << "No  Tanggal        Kode Suplier   Kode barang    Nama Barang    Harga     Jumlah    Stok\n";
	cout << "------------------------------------------------------------------------------------------\n";
	for ( int i=0; i<jmlPsn; i++ )  
	{
	 			cout<<setw(4)<<setiosflags(ios::left)<<(i+1);
	            cout<<setw(15)<<setiosflags(ios::left)<<brgPO[i].tglPO;
	            cout<<setw(15)<<setiosflags(ios::left)<<brgPO[i].kdsup;
	            for(int j=0;j<jmlBrg[i];j++){
	            	if(j==0){
	            		cout<<setw(15)<<setiosflags(ios::left)<<brgPO[i].brgkirim[j].kdbrg;
		            	cout<<setw(15)<<setiosflags(ios::left)<<brgPO[i].brgkirim[j].nmbrg;
		            	cout<<setw(10)<<setiosflags(ios::left)<<brgPO[i].brgkirim[j].harga;
		            	cout<<setw(10)<<setiosflags(ios::left)<<brgPO[i].brgkirim[j].jml;
		            	cout<<setw(5)<<setiosflags(ios::left)<<brgPO[i].brgkirim[j].stok;
		            	cout<<"\n"; 
					}
					else{
						cout<<setw(34)<<" ";
						cout<<setw(15)<<setiosflags(ios::left)<<brgPO[i].brgkirim[j].kdbrg;
		            	cout<<setw(15)<<setiosflags(ios::left)<<brgPO[i].brgkirim[j].nmbrg;
		            	cout<<setw(10)<<setiosflags(ios::left)<<brgPO[i].brgkirim[j].harga;
		            	cout<<setw(10)<<setiosflags(ios::left)<<brgPO[i].brgkirim[j].jml;
		            	cout<<setw(5)<<setiosflags(ios::left)<<brgPO[i].brgkirim[j].stok;
		            	cout<<"\n"; 
					}
	            
				}
				
    	cout << "------------------------------------------------------------------------------------------\n";   
	}
	return 0;
}

