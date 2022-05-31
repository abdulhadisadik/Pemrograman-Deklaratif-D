#include<iostream>
using namespace std;
struct mahasiswa{
	string nama;
	string nim;
	int nilai;
};

void display(mahasiswa s){
	cout<<"Nama : "<<s.nama<<endl;
	cout<<"NIM  : "<<s.nim<<endl;
	cout<<"Nilai: "<<s.nilai<<endl;
	
}
main(){
	mahasiswa mhs;
	cin>>mhs.nama;
	cin>>mhs.nim;
	cin>>mhs.nilai;
	display(mhs);
}
