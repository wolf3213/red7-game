#include<iostream>
using namespace std;
void test (int *reka_gr,int *reka_kom ,int *zas_gr,int *zas_kom ,int *p_gr,int *p_kom,int &naj_gr,int &naj_kom)
{
       cout<<"reka gracza ";
    for(int i=0; i<7; i++)
    {
        cout<< reka_gr[i]<<" ";
    }
    cout<<endl;
    //cout<<"najlepsza karta gracza "<<naj_gr<<endl;

    cout<< "reka komputera  ";
    for(int i=0; i<7; i++)
    {
        cout<< reka_kom[i]<<" ";
    }
    cout<<endl;
    //cout<<"najlepsza karta komputera "<<naj_kom<<endl;
    cout<<"zasady gracza ";
    for(int i=0; i<7; i++)
    {
        cout<<zas_gr[i]<<" " ;
    }
    cout<<endl;
    cout<<"zasady komputera ";
    for(int i=0; i<7; i++)
    {
        cout<<zas_kom[i]<<" " ;
    }
    cout<<endl;
    cout<<"paleta gracza "<<p_gr[0]<<endl;
    cout<<"paleta komputera "<<p_kom[0]<<endl;
    /*
     cout<<"TESTOWA WARTOSC PALET"<<endl;
    for(int i=1;i<7;i++)
    {
   cout<< p_gr[i]<<" "<< p_kom[i];

    }
    */
}
