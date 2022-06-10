#include<iostream>
#include<fstream>
using namespace std;
main(){
	string data;
	ifstream tulis,tulis2;
	ofstream gabung;
	tulis.open("file.txt");
	if(tulis.is_open()){
		gabung.open("hasil.txt");
		while(!tulis.eof()){
			getline(tulis,data);
			gabung<<data<<endl;
		}
		gabung.close();
	}
	tulis.close();	
	data = "";
	tulis2.open("file2.txt");
		if(tulis2.is_open()){
		gabung.open("hasil.txt");
		while(!tulis2.eof()){
			getline(tulis2,data);
			gabung<<data<<endl;
		}
		gabung.close();
	}
	tulis2.close();
}
