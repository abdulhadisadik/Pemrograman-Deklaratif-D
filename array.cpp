#include<iostream>
using namespace std;
main(){
	int nilai[10],jml;
	string nama[] = {"hadi","highkal","erik"};
	cout<<"Input Nilai"<<endl;
	cout<<"Jumlah Nilai : ";
	cin>>jml;
	for(int i = 0;i<jml;i++){
		cout<<"Masukkan nilai : ";
		cin>>nilai[i];	
	}
	cout<<"Menampilkan Nilai"<<endl;
	for(int i = 0;i<jml ;i++){
		cout<<"Nilai indeks ke-"<<i<<" : "<<nilai[i]<<endl;
	}
	
}
