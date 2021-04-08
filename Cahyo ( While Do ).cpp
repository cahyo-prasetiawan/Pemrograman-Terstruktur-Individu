#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
   int x;
   int y,i;
   x=1;
   cout<<"masukkan Jumlah Maks Bintang = "; cin>>i;
   cout<<endl;
   int z=i;
   while (x<=i)
   {
     y=1;
     while( y<=x)
     {
       cout<<" * ";
       y++;
   }
     cout<<endl;
     x++;
    z--;
}

}
