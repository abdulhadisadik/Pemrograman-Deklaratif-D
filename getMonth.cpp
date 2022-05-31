// Buatlah fungsi yang mengembalikan nama bulan dari array berdasarkan nilai bilangan yang dikirim ke fungsi tersebut.
// Jika nilainya tidak sesuai dengan bulan (1-12), kembalikan error 'Masukan salah. Input bulan antara 1-12'.
//
// Contoh 1
// Input: 3
// Output: "Bulan ke-3 adalah Maret"
//
// Contoh 2
// Input: 15
// Output: "Masukan salah. Input bulan antara 1-12"
#include <iostream>
using namespace std;

void getMonthName(int monthNumber)
{
	monthNumber = monthNumber - 1;
	string months[] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli",
					   "Agustus", "September", "Oktober", "November", "Desember"};
	if (monthNumber >= 0 && monthNumber < 13)
	{
		cout << "Bulan ke- " << monthNumber + 1 << " adalah " << months[monthNumber] << endl;
	}
	else
	{
		cout << "Masukan salah. Input bulan antara 1-12";
	}
}
main()
{
	int bil;
	cout << "Masukkan Bilangan = ";
	cin >> bil;
	getMonthName(bil);
}
