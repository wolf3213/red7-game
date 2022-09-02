#include <iostream>
#include <conio.h>
#include "zpis_zasad.h"

//WERSJA GRY KARTCIANEJ RED7 NA KOMPUTER NARAZIE DLA 2 OSOB WERSJA PRE-PRE-PRE ALFA
//bez dobierania
//gdy jest mowa o "komputerze" jest to AI lub drugi gracz
using namespace std;

int main()
{

    int reka_gr[7];//reka gracza
    int reka_kom [7];// reka komputera
    int p_gr[8]; //paleta gracza
    int p_kom[8]; // paleta komputera
    int r_gr=1; //liczy ruchy gracza
    int r_kom=1; // liczy ruchy komputera
    bool kto;//true-gracz false-kompter
    bool gra=true;
    for (int i=0; i<7; i++) //przypisane pseudowartoscia pustych kart w palecie "pusta karta" czyli brak karty=-1
    {
        p_gr[i]=-1;
        p_kom[i]=-1;
    }
    /* KILKA S£OW DO PRZYSZ£EGO JA
    BARDZO MO¯LIWE ¯E JEST TO GOWNOKOD ALE PRZYNAJMNIEJ DZIA£A
    DLATEGO SZANUJ GO

    KILKA SLOW CO DO NOTACJI
    kazda karta bedzie miala okreslona za pomoca liczby "wartosc" od 0 do 48
    przy czym
    0-6 fiolet 1 zasada
    7-13 indygo 2 zasada
    14-20 niebieska 3 zasada
    21-27 zielona 4 zasada
    28-34 zolta 5 zasada
    35-41 pomaranczowa 6 zasada
    42-48 czerwona 7 zasada
    oraz tak zwana pusta karta czyli brak miejsca na karty w rece
    "pusta karta"czyli brak karty=-1
     */
// losuj
// losujemy reke
    int ile_kart=16;// ta odpowieda za ilosc kart jaka jest wylosowana potrzebna do gry
    int  *tab=new int[ile_kart];// "prowizoryczna" tabela z wszystkimi kartami
    // manipulator_wartosciami (tab,16); <-ta funkcja sluzy do sprawdzenia JEST ONA TYLKO I WYLACZNIE DO TESTOW
    losowanie (tab, ile_kart);
    przypis   (tab, reka_gr,reka_kom,p_gr,p_kom );  // przypisuje liczby z tabeli do kart
    delete [] tab;
// porownaj pierwsze karty poczatkowe
    if (p_gr[0]>p_kom[0]) kto=false;//POPRAWIC NAJPIERW POROWNAC LICZBE POTEM KOLOR
    else
    {
        kto=true;
        cout<<"gracz przegral w rozdaniu"<<endl;//<- pozniej trzeba to usunac
    }
    kto=false;//<=USUNAC TO POTEM (USTAWIA ZE GRACZ ZAWSZE ROZPOCZYNA)
//jezeli ruch
    int podana_karta_gr;//wartosc ta bedzie podana przez gracza jako karta
    int podana_karta_kom;// ta wartosc bedzie podana przez komputer/drugiego gracza
    for (int i=0; i<48; i++)//petla gry
    {
        if (kto==false)
        {

            sprawdzenie_gr(reka_gr, reka_kom,p_gr,p_kom,gra);   //<- TUTAJ FUNKCJA
            //sprawcza czy gracz nie przegral a jezeli pragral to ustaw gra=false

            if (gra==true)
            {
                //ruch gracza


                p_gr[r_gr]=podana_karta_gr;//wybrana karta

                r_gr++;//liczy ruchy gracza

            }

            else
            {
                cout<<" przegrales";
                break;
            }

        }
        if (kto==true)
        {
            //sprawcza czy komputer nie przegral
            //ruch komputera
            p_kom[r_kom]=podana_karta_kom;//wybrana karta
            r_kom++;//liczy ruchy komputera
            //testcout<<"To ja komputer"<<endl;
        }
        if (kto==false) kto=true;
        if (kto==true) kto=false;

        break;//dezyaktywuje TYMCZASOWO petle USUNAC POTEM
    }



    return 0;
}
