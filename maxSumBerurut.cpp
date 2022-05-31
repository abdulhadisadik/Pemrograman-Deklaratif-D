// Mencari nilai maksimum bilangan yang berurutan yang ada di dalam array
//
// contoh:
// [-1, 2, 3, -9, 11] == 11, nilai maksimum bilangan berurutan adalah 11 (bilangan terakhir), karena bilangan2 lainnya jika dijumlahkan tidak lebih besar dari 11
// [-2, -1, 1, 2] == 3, nilai maksimum bilangan berurutan adalah 3 (2 bilangan terakhir), karena bilangan2 lainnya jika dijumlahkan tidak lebih besar dari 3
// [100, -9, 2, -3, 5] == 100, nilai maksimum bilangan berurutan adalah 100 (bilangan pertama), karena bilangan2 lainnya jika dijumlahkan tidak lebih besar dari 100
// [1, 2, 3] == 6, nilai maksimum bilangan berurutan adalah 6 (semua bilangan), karena semua bilangan positif dan berurutan, sehingga nilai maksimumnya 6
// [2, -1, 2, 3, -9] == 6, nilai maksimum bilangan berurutan adalah 6 (penjumlahan dari 2 + (-1) + 2 + 3), lebih besar dari penjumlahan urutan bilangan lainnya
// [-1, -2, -3] == 0, jika semua bilangan negatif, kita bisa mengembalikan nilai 0

#include <iostream>
using namespace std;
main()
{
	int maxSum = 0, jml, sum;
	cout << "Jumlah data : ";
	cin >> jml;
	int arr[jml];
	cout << "Masukkan angka " << endl;
	for (int i = 0; i < jml; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < jml; i++)
	{
		sum = 0;
		for (int j = i; j < jml; j++)
		{
			
			sum += arr[j];
			if (sum > maxSum)
			{
				maxSum = sum;
			}
		}
	}
	cout << maxSum << endl;
}
