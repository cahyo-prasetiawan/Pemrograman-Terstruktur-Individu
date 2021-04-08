#include <iostream>

using namespace std;

main()
{
	int bintang,i,j;
	
	cout<<" Masukkan Jumlah Baris Bintang = ";
	cin>>bintang;
	for ( i = 1; i <= bintang; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout<<" * ";
		}
		cout << "\n";
	}
	return 0;
}
