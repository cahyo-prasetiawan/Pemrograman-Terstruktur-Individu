#include <iostream>
#include <stdio.h>
using namespace std;

main(){
	
	char nama[100],j[100];
	int nim,nilai;
	
	cout<<"======================================================================= \n";
	cout<<"==            PROGRAM MENGANALISA NILAI LULUS DAN TIDAK LULUS        == \n";
	cout<<"======================================================================= \n";
	cout<<"======================================================================= \n";
	cout<<"== MASUKKAN NAMA ANDA     : "; cin>> nama;
	cout<<"== MASUKKAN NIM ANDA      : "; cin>> nim;
	cout<<"== MASUKKAN JURUSAN ANDA  : "; cin>> j;
	cout<<"== MASUKKAN NILAI ANDA    : "; cin >> nilai;
	cout<<endl;
	cout<<"=======================================================================\n";

	if (nilai>=81){
		cout<<" NILAI MUTU A ";
		cout<<"[ANDA LULUS]";
	}
	else if(nilai<=80 && nilai>=66){
		cout<<" NILAI MUTU B ";
		cout<<"[ANDA LULUS] ";
	}
	else if(nilai<=65 && nilai>=55){
		cout<<" NILAI MUTU C ";
		cout<<"[ANDA LULUS]";
	}
	else if(nilai<=54 && nilai>=45){
		cout<<" NILAI MUTU D ";
		cout<<"[ANDA GAGAL]";
	}
	else if(nilai<=44){
		cout<<" NILAI MUTU E ";
		cout<<"[ANDA GAGAL]";
}
	else 
	{
		cout<<" NILAI YANG ANDA MASUKKAN SALAH "<<endl;
	}
cout<<"\n=======================================================================\n";
cout<<"==                          TERIMA KASIH                             ==";
cout<<"\n=======================================================================";
	return 0;
}
