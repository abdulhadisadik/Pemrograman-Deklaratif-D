#include<iostream>
using namespace std;
// Prototype
void header();
void tambah(int a ,int b);
void kurang(int a, int b);
main(){
	int bil1,bil2;
	header();
	cout<<"Masukkan Bilangan 1 = ";cin>>bil1;
	cout<<"Masukkan Bilangan 2 = ";cin>>bil2;
	cout<<"Hasil Penjumlahan = "<<tambah(bil1,bil2)<<endl;
	cout<<"Hasil Pengurangan = "<<kurang(bil1,bil2)<<endl;
}
void header(){
	cout<<"Kalkulator 2 Fungsi"<<endl;
}
int tambah(int a,int b){
	return (a+b);
}
int kurang(int a,int b){
	return (a-b);
}

