#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    cout<<"Daftar Operator Aritmatika:"<<endl;
    int x, y, hasil;
    string jumlah ="(1) penjumlahan (+)";
    cout<<jumlah<<endl;
    string pengurangan ="(2) pengurangan (-)";
    cout<<pengurangan<<endl;
    string perkalian ="(3) perkalian (*)";
    cout<<perkalian<<endl;
    string pembagian ="(4) pembagian (/)";
    cout<<pembagian<<endl;

    cout<<"Masukan angka ke 1 :" ;
    cin>>x;
    cout<<"Masukan angka ke 2 :" ;
    cin>>y;
    a:

    int z;
    cout<<"Masukan Operation Aritmatika=";
    cin>>z;

    if(z==1)
    {
    hasil=x+y;
    cout<<"Hasil Dari :"<<jumlah<<" , "<<x<<" dan "<<y<<" = "<<hasil<<endl;
    }
    else if(z==2)
    {
    hasil=x-y;
    cout<<"Hasil Dari :"<<pengurangan<<" , "<<x<<" dan "<<y<<" = "<<hasil<<endl;
    }
    else if(z==3)
    {
    hasil=x*y;
    cout<<"Hasil Dari :"<<perkalian<<" , "<<x<<" dan "<<y<<" = "<<hasil<<endl;
    }
    else if(z==4)
    {
    hasil=x/y;
    cout<<"Hasil Dari :"<<pembagian<<" , "<<x<<" dan "<<y<<" = "<<hasil<<endl;
    }
    else
    {
    cout<<"Operation Aritmatika Salah :"<<endl<<endl;
    }
    getch();
}
