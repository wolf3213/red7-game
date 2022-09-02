#include<iostream>


using namespace std;

void losowanie (int *a , int ile);//ta funkcja losuje tablice TAB
void manipulator_wartosciami(int *a,int ile);// testowa funckja sluzy do dowolnego manipulowania wartosciami TAB
void przypis (int *tab, int *reka_gr,int *reka_kom,int *p_gr ,int *p_kom); // TA FUNKCJA PRZYPISUJE Z TABLIC TAB wartosci kart gracza i komputera (z jednej tablicy robi 4)
void sprawdzenie_gr (int *reka_gr,int *reka_kom, int *p_gr,int *p_kom, bool &gra);// sprawdza czy gracz nie przegral
void fioletowa_zasada(int *reka_gr,int *reka_kom ,int *zas_gr,int *zas_kom ,int *licznik_kart_gr,int *licznik_kart_kom,int *p_gr,int *p_kom); // podfunkcja ktora sprawdza czy gracz/kompuer  nie przegral w fioletowej zasadzie
void zielona_zasada(int *reka_gr,int *reka_kom,int *zas_gr,int *zas_kom,int *licznik_kart_gr, int *licznik_kart_kom,int *p_gr,int *p_kom ); //podfunkcja ktora sprawdza czy gracz/kompuer nie przegral w zielonej zasadzie
void zolta_zasada(int *reka_gr,int *reka_kom,int *zas_gr,int *zas_kom,int *licznik_kart_gr, int *licznik_kart_kom,int *p_gr,int *p_kom );//podfunkcja sprawdza żolta funkcje zasade
void test(int *reka_gr,int *reka_kom ,int *zas_gr,int *zas_kom ,int *p_gr,int *p_kom,int &naj_gr,int &naj_kom);// wyswietla wszystko na ekranie
/* Przyjeta notacja zasad
1-fioletowa
       2-indygo
       3-niebieska
       4-zielona
       5-zolta
       6-porañczowa
       7-czerwona

karty spelniajace fioletowa_zasada
0-2
7-9
14-16
21-23
28-30
35-37
42-44
co do zielonej zasady (po lewej nr karty po prawej wartosc karty w rzeczywistosci P-parzysta liczba po lewej NP-nieparzysta liczpa po prawej)

POPRAWIC

0-1 P
1-2
2-3
.
.
6-7
7-1 NP
8-2
9-3
.
.
.
.
13-7
14-1 P
15-2
.
.
.
20-7
21-1 NP
22-2
*/

