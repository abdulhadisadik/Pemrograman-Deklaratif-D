#include<iostream>
using namespace std;
// Variable global
int a[10][10],b[10][10];
int barisA,kolomA,barisB,kolomB;

void input(){
	int jml;
	system("clear");
	cout<<"Berapa jumlah matriks = ";cin>>jml;
	if(jml==2){
		cout<<"Panjang baris A = ";cin>>barisA;
		cout<<"Panjang kolom A = ";cin>>kolomA;
		cout<<"Panjang baris B = ";cin>>barisB;
		cout<<"Panjang kolom B = ";cin>>kolomB;
		system("clear");
		for(int i=0;i<barisA;i++){
			for(int j=0;j<kolomA;j++){
			    cout<<"A["<<i<<"]["<<j<<"] = ";
				cin>>a[i][j];
			}
		}
		system("clear");
		for(int i=0;i<barisB;i++){
			for(int j=0;j<kolomB;j++){
				cout<<"B["<<i<<"]["<<j<<"] = ";
				cin>>b[i][j];
			}
		}
	}
	else{
		cout<<"Panjang baris A = ";cin>>barisA;
		cout<<"Panjang kolom A = ";cin>>kolomA;
		system("clear");
		for(int i=0;i<barisA;i++){
			for(int j=0;j<kolomA;j++){
				cout<<"A["<<i<<"]["<<j<<"] = ";
				cin>>a[i][j];
			}
		}
	}
}
void tambah(int a[][10],int b[][10]){
	int c[10][10];
	for(int i=0;i<barisA;i++){
		for(int j=0;j<kolomB;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	system("clear");
	cout<<"Hasil penjumlahan"<<endl;
	for(int i=0;i<barisA;i++){
		for(int j=0;j<kolomB;j++){
			cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
}
void kurang(int a[][10],int b[][10]){
	int c[10][10];
	for(int i=0;i<barisA;i++){
		for(int j=0;j<kolomB;j++){
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	system("clear");
	cout<<"Hasil Pengurangan"<<endl;
	for(int i=0;i<barisA;i++){
		for(int j=0;j<kolomB;j++){
			cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
}
void kali(int a[][10],int b[][10]){
	int c[10][10];
	for(int i=0;i<barisB;i++){
		for(int j=0;j<kolomA;j++){
			c[i][j] = 0;
			for(int k=0;k<kolomA;k++){
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
			}
		}
	}
	cout<<"Hasil Perkalian"<<endl;
	for(int i=0;i<barisA;i++){
		for(int j=0;j<kolomB;j++){
			cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
}
void transpose (int a[][10]){
	int c[10][10];
	// Transpose matriks
	for(int i=0;i<barisA;i++){
		for(int j=0;j<kolomA;j++){
			c[i][j] = a[j][i];
		}
	}
	cout<<"Sebelum Transpose"<<endl;
	for(int i=0;i<barisA;i++){
		for(int j=0;j<kolomA;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<"Hasil Transpose"<<endl;
	for(int i=0;i<kolomA;i++){
		for(int j=0;j<barisA;j++){
			cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
}
void diagonal(int a[][10]){
	int c[10][10];
	cout<<"Hasil Diagonal"<<endl;
	for(int i=0;i<barisA;i++){
		for(int j=0;j<kolomA;j++){
			if(i==j){
				cout<<a[i][j]<<" ";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}
main(){
	int pil;
	char ulang='y'; 
	do{
	system("clear");
	cout<<"Operasi matriks"<<endl;
	cout<<"1.Penjumlahan"<<endl;
	cout<<"2.Pengurangan"<<endl;
	cout<<"3.Perkalian"<<endl;
	cout<<"4.Transpose"<<endl;
	cout<<"5.Diagonal"<<endl;
	cout<<"Pilih menu operasi : ";cin>>pil;
	input();
	switch(pil){
		case 1:
			cout<<"Penjumlahan"<<endl;
			if(barisA==barisB && kolomA==kolomB){
				tambah(a,b);
			}
			else{
				cout<<"Baris dan kolom kedua matriks harus sama";
			}
			break;
		case 2:
			cout<<"Pengurangan"<<endl;
			if(barisA==barisB && kolomA==kolomB){
				kurang(a,b);
			}
			else{
				cout<<"Baris dan kolom kedua matriks harus sama";
			}
			break;
		case 3:
			cout<<"Perkalian"<<endl;
			kali(a,b);
			break;
		case 4:
			cout<<"Transpose"<<endl;
			transpose(a);
			break;
		case 5:
			cout<<"Diagonal"<<endl;
			diagonal(a);
	}
	cout<<"Ulang [y/t]? ";cin>>ulang;
}while(ulang=='y' || ulang =='Y');
}