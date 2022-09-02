#include <iostream>

using namespace std;
/* Przyjeta TUTTAJ notacja zasad
0-fioletowa
       1-indygo
       2-niebieska
       3-zielona
       4-zolta
       5-porañczowa
       6-czerwona
*/
// W trakcie pisania
void zolta_zasada(int *reka_gr,int *reka_kom,int *zas_gr,int *zas_kom,int *licznik_kart_gr, int *licznik_kart_kom,int *p_gr,int *p_kom )
{
    bool czy_zol_zas_gr=false;
    int licznik_zolt_kart_gr[7];
    int licznik_zolt_kart_kom[7];
    int test;
    int naj_licznik_zolt_kart_gr;//najwieksza ilosc zoltych kart gracza
    int naj_licznik_zolt_kart_kom;// najwieksza ilosc zoltych kart komputera
    //Gracz
    for (int i=1; i<=7; i++)//sprawdza czy gracz ma zielona zasade
    {
        if(zas_gr[i]==5)
        {
            czy_zol_zas_gr=true;
            break;
        }
    }

    // zmodyfikowac sprawdzic zasade
    if (czy_zol_zas_gr==true)
    {
        for (int p=0; p<7; p++) // // ta czesc odpowiada za sprawdzenie reki

        {
            for (int i=0; i<7; i++) //sprawdza wszystkie karty w rece czy maja jeden kolor jezeli ma licznik++;
            {

                if (0<=reka_gr[i] && ((reka_gr[i]%7)==p)) // to drugie to kolor karty
                {
                    licznik_zolt_kart_gr[p]++;
                    break;
                }
            }





        }

        for (int p=0; p<7; p++) // a ta za palety
        {
            test=0;
            if (p_gr[p]<=48 && 0<= p_gr[p] )
            {
                test=1;
            }
            if  (test==1 && (p_gr[p]%7)==p)
            {
                licznik_zolt_kart_gr[p]++;
            }
        }

naj_licznik_zolt_kart_gr = licznik_zolt_kart_gr[0];
   for (int p=1;p<7;p++)
   {
      if (licznik_zolt_kart_gr[p]>naj_licznik_zolt_kart_gr)
        naj_licznik_zolt_kart_gr=licznik_zolt_kart_gr[p];
   }

   //TEST WYSWIETLACJACY
    for  (int p=0;p<7;p++)
    {
        if (0<=licznik_zolt_kart_gr[p] && licznik_zolt_kart_gr[p]<=7 )
        cout<<" wartosci zoltych "<<p<<" "<<licznik_zolt_kart_gr[p]<<endl;
    }

    if (0<=naj_licznik_zolt_kart_gr && naj_licznik_zolt_kart_gr<=7 )
    cout<<"najwieksza wartosc zoltych "<<naj_licznik_zolt_kart_gr<<endl;
    //KONIEC TESTU


        //cout<<"Drugi test gracza = "<<licznik_kart_gr[1]<<endl;

//z tego licznka ("licznik_zolt_kart_gr") trzeba wybrac najwieksza karte

// NASTEPNIE Z LICZNIKA_ZOLT_KART_GR TRZEBA WYBRAC NAJWIEKSZA A POTEM POROWNANAC  Z NAJWIEKSZSA KOMPUTERA
// Kompueter
    }


}
