#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	float phi=3.14,p,l,t,s,r,T,rk,Tk,volume,L,a;
	int menu;
	char ulang;
	
	do{
	cout<<" ========================================================================== \n";
	cout<<" ==                        CAHYO PRASETIAWAN                             == \n";
	cout<<" ========================================================================== \n";
	cout<<" ==                 MENGHITUNG LUAS BANGUN DATAR                         == \n";
	cout<<" ========================================================================== \n";
	cout<<" ==  1. PERSEGI PANJANG                                                  == "<<endl;
	cout<<" ==  2. SEGITIGA                                                         == "<<endl;
	cout<<" ==  3. LINGKARAN                                                        == "<<endl;
	cout<<" ==  4. PERSEGI                                                          == "<<endl;
	cout<<" ========================================================================== \n";
	cout<<" ==                 MENGHITUNG VOLUME BANGUN RUANG                       == \n";
	cout<<" ========================================================================== \n";
	cout<<" ==  5. BALOK                                                            ==" <<endl;
	cout<<" ==  6. KUBUS                                                            ==" <<endl;
	cout<<" ==  7. TABUNG                                                           ==" <<endl;
	cout<<" ==  8. KERUCUT                                                          ==" <<endl;
	cout<<" ==========================================================================" <<endl;
	cout<<" ==  MASUKKAN PILIHAN ANDA : ";
	cin>>menu;
	
	switch(menu)
	{
	case 1:{
	
	    cout<<" ================================================================== \n";
		cout<<" ==             MENGHITUNG LUAS PERSEGI PANJANG                  ==" <<endl;
		cout<<" ==================================================================\n";
	    cout<<" == MASUKKAN NILAI PANJANG : ";cin >>p;
		cout<<" == MASUKKAN NILAI LEBAR   : ";cin >>l;
		cout<<" == MASUKKAN NILAI TINGGI  : ";cin >>t;
		L = p*l*t;
	    cout<<" ================================================================== \n";
		cout<<"          LUAS PERSEGI PANJANG ADALAH : " <<L <<endl;
		cout<<" ================================================================== \n";
		break;
	    }
	case 2: {
		cout<<" ================================================================== \n";
		cout<<" ==                  MENGHITUNG LUAS SEGITIGA                    ==" <<endl;
		cout<<" ==================================================================\n";
	    cout<<" == MASUKKAN NILAI ALAS    : ";cin >>a;
		cout<<" == MASUKKAN NILAI TINGGI  : ";cin >>t;
		L = a*t/2;
	    cout<<" ================================================================== \n";
		cout<<"              LUAS SEGITIGA ADALAH : " <<L <<endl;
		cout<<" ================================================================== \n";
		break;
	}
		
	case 3:{
		cout<<" ================================================================== \n";
		cout<<" ==                 MENGHITUNG LUAS LINGKARAN                    ==" <<endl;
		cout<<" ==================================================================\n";
	    cout<<" == MASUKKAN NILAI PANJANG JARI - jari : ";cin >>r;
		L = phi * r * r;
	    cout<<" ================================================================== \n";
		cout<<"          LUAS LINGKARAN ADALAH : " <<L <<endl;
		cout<<" ================================================================== \n";
		break;
	}
		case 4:{
		cout<<" ================================================================== \n";
		cout<<" ==                 MENGHITUNG LUAS PERSEGI                   ==" <<endl;
		cout<<" ==================================================================\n";
	    cout<<" == MASUKKAN NILAI PANJANG SISI : ";cin >>s;
		L = s*s;
	    cout<<" ================================================================== \n";
		cout<<"              LUAS PERSEGI ADALAH : " <<L <<endl;
		cout<<" ================================================================== \n";
		break;
	}

	case 5:
		{
		
			cout<<" ================================================================== \n";
			cout<<" ==               MENGHITUNG VOLUME BALOK                        ==" <<endl;
			cout<<" ==================================================================\n";
			cout<<" == MASUKKAN NILAI PANJANG : ";cin >>p;
			cout<<" == MASUKKAN NILAI LEBAR   : ";cin >>l;
			cout<<" == MASUKKAN NILAI TINGGI  : ";cin >>t;
			volume=p*l*t;
			cout<<" ================================================================== \n";
			cout<<"             VOLUME BALOK ADALAH : " <<volume <<endl;
			cout<<" ================================================================== \n";
			break;	
	    }
	case 6:
		{
	
			cout<<" ================================================================== \n";
			cout<<" ==               MENGHITUNG VOLUME KUBUS                        ==" <<endl;
			cout<<" ==================================================================\n";
			cout<<" == MASUKKAN NILAI SISI : ";cin >>s;
			volume=s*s*s;
			cout<<" ================================================================== \n";
			cout<<"             VOLUME KUBUS ADALAH : " <<volume<<endl;
			cout<<" ================================================================== \n";
			break;	
	    }
	case 7:
	    {
			cout<<" ================================================================== \n";
			cout<<" ==               MENGHITUNG VOLUME TABUNG                       ==" <<endl;
			cout<<" ==================================================================\n";
			cout<<" == MASUKKAN NILAI JARI-JARI ALAS : ";cin >>r;
			cout<<" == MASUKKAN NILAI TINGGI         : ";cin >>T;
			volume=phi*r*r*T;
			cout<<" ================================================================== \n";
			cout<<"             VOLUME TABUNG ADALAH : " <<volume<<endl;
			cout<<" ================================================================== \n";
			break;	
	    }
    case 8:
		{
			cout<<" ================================================================== \n";
			cout<<" ==               MENGHITUNG VOLUME KERUCUT                      ==" <<endl;
			cout<<" ==================================================================\n";
			cout<<" == MASUKKAN NILAI JARI-JARI ALAS : ";cin >>rk;
			cout<<" == MASUKKAN NILAI TINGGI         : ";cin >>Tk;
			volume=phi*rk*rk*Tk/3;
			cout<<" ================================================================== \n";
			cout<<"             VOLUME TABUNG ADALAH : " <<volume<<endl;
			cout<<" ================================================================== \n";
			break;
	    }
				default :
			cout<<" ================================================================== \n";
			cout<<" ==              Pilihan anda tidak ada di sistem                =="<<endl;
			cout<<" ================================================================== \n";
		}
		cout<<" ANDA MAU KEMBALI KE MENU AWAL LAGI [y/n]? ";
        cin>> ulang;


	}
	while(ulang == 'y' || ulang == 'Y'); 
}

