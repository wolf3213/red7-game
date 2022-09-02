
#include <iostream>
#include "zpis_zasad.h"
using namespace std;
// TRZEBA SPRAWDZIC FUNKCJE SPRAWDZAJACA MA ONA DAWAC WARTOSCI OD 0 DO MAX 2
void sprawdzenie_gr (int *reka_gr,int *reka_kom,int *p_gr,int *p_kom,bool &gra)
{
    //tutaj trzeba sprawdzic czy ma dane zasady w rece
    int zas_gr[7];//kazda karta ma przypisana zasade <-gracz
    int zas_kom[7];
    for (int y=0; y<7; y++)
    {
        for(int i=0; i<7; i++)// ta funkcja sprawdza do ktorego przedzialu nalezy karta gracza
        {
            if (7*i<=reka_gr[y] && reka_gr[y]<=(7*(i+1)-1) && 0<=reka_gr[y] )
            {
                zas_gr[y]=i+1;
                break;
            }

        }
    }

    for (int y=0; y<7; y++)
    {
        for(int i=0; i<7; i++)
        {
            if (7*i<=reka_kom[y] && reka_kom[y]<=(7*(i+1)-1) && 0<=reka_kom[y] )
            {
                zas_kom[y]=i+1;
                break;
            }

        }
    }

    int naj_gr=reka_gr[0];
    int licznik_kart_gr[6];
    int licznik_kart_kom[6];
    bool gra_gr[7];
    for(int i=1; i<7; i++)
    {
        licznik_kart_gr[i]=0;
        licznik_kart_kom[i]=0;
    }
    /* 1-fioletowa  aka "fiol"
       2-indygo
       3-niebieska
       4-zielona    aka "ziel"
       5-zolta
       6-porañczowa
    */
    for (int i=1; i<8; i++)
    {
        gra_gr[i]=false;
    }
    int naj_kom=reka_kom[0];

    for (int i=0; i<7; i++)//Mechaniznm czerwonej zasady
    {
        if (zas_gr[i]==7)
        {
            //mechaniczm czerwonej zasady dla gracza
            // wybiara najsilnijsza karte gracza
            for (int i=0; i<7; i++)
            {
                if (reka_gr[i]>=naj_gr) naj_gr=reka_gr[i];
            }
            // wybiara najsilnijsza karte komputera
            for (int i=0; i<7; i++)
            {
                if (reka_kom[i]>=naj_kom) naj_kom=reka_kom[i];
            }
            //POROWNUJE NAJSILNJSZE KARTY
            if (naj_gr>naj_kom) gra_gr[0]=true;//porownuje kolory
            else gra_gr[0]=false;

        }
    }

//#POMYSL (reka_gr,reka_kom,zas_gr,zas_kom,licznik_kart_gr,licznik_kart_kom,p_gr,p_kom) zamiast przekazywać to mozna by przekazac obiekt zawierajacy wszystkie dane(?)
// Pomsyl zamiast sprawdzac kazdej zasady po kolejii najpierw nalezy sprawdzic czy grac posiada karte z dana zasada
    //fioletowa zasada liczby mniejsze od 4
    fioletowa_zasada(reka_gr,reka_kom,zas_gr,zas_kom,licznik_kart_gr,licznik_kart_kom,p_gr,p_kom);

    zolta_zasada(reka_gr,reka_kom,zas_gr,zas_kom,licznik_kart_gr,licznik_kart_kom,p_gr,p_kom);

    zielona_zasada(reka_gr,reka_kom,zas_gr,zas_kom,licznik_kart_gr,licznik_kart_kom,p_gr,p_kom);

    //zasada indygo//liczby tworzace ciag

    //zasada zielona -najwiecej liczb parzystych
    //Gracz




//cout<<"spelniajacych warunek fioletowych  gracza "<< licznik_kart_gr[1]<<endl;
//cout<<"spelniajacych warunek fioletowych  komputera "<< licznik_kart_kom[1]<<endl;

cout<<"spelniajacych warunek zielony kart  gracza "<< licznik_kart_gr[4]<<endl;
cout<<"spelniajacych warunek zielony   komputera "<< licznik_kart_kom[4]<<endl;

if (licznik_kart_gr[1]>licznik_kart_kom[1])
{
    cout<<" Gracz wygral w fioletowej zasadzie;" <<endl;
    gra_gr[1]=true;
}
else
{
    cout<<"Komputer wygral w fioletowej zasadzie"<<endl;
    gra_gr[1]=false;
}

if (licznik_kart_gr[4]>licznik_kart_kom[4])
{
    cout<<" Gracz wygral w zielonej zasadzie;" <<endl;
    gra_gr[4]=true;
}
else
{
    cout<<"Komputer wygral w zielonej zasadzie"<<endl;
    gra_gr[4]=false;
}
//if remis sprawdz najwyzsza karte spelniajace regule gry

test(reka_gr,reka_kom,zas_gr,zas_kom,p_gr,p_kom,naj_gr,naj_kom);       //ten test wszystko wyswietla ma na celu testowanie gry

for(int i=1; i<8; i++) //jezeli ktoras wartosc gra[]=true to gra=true;
{
    gra = false;
    if (gra_gr[i])
        gra = true;
    break;
}


}
