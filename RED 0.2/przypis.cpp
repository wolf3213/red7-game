#include <iostream>

using namespace std;

void przypis (int *tab, int *reka_gr,int *reka_kom,int *p_gr,int *p_kom)
{
    for (int i=0; i<=6; i++)
    {
        reka_gr[i]=tab[i];
    }
    for (int i=7; i<=13; i++)
    {
        reka_kom[i-7]=tab[i];
    }
    p_gr [0]=tab[14];
    p_kom [0]=tab[15];

    /* //Przypisuje reszcie palecie wartosci pustej kart
    for (int i=1;i<7;i++)
    {
    p_gr[i]=-1;
    p_kom[i]=-1;
    }
*/
}
