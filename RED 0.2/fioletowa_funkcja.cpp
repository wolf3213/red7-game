#include <iostream>

using namespace std;

void fioletowa_zasada(int *reka_gr,int *reka_kom,int *zas_gr,int *zas_kom,int *licznik_kart_gr, int *licznik_kart_kom,int *p_gr,int *p_kom )
{
    bool czy_fiol_zas_gr=false;
    int  test=5;
    //Gracz
    for (int i=1; i<=7; i++)//sprawdza czy gracz ma fioletowa zasade
    {
        if(zas_gr[i]==1)
        {
            czy_fiol_zas_gr=true;
            break;
        }
    }
    if (czy_fiol_zas_gr==true)//sprawdza czy gracz ma fioletowa zasade
    {


        for (int p=0; p<7; p++) // ta czesc odpowiada za sprawdzenie reki

        {
            if (0<=reka_gr[p])
            {
                if (0<=reka_gr[p] && ((reka_gr[p])%7)<3)
                {
                    licznik_kart_gr[1]++;
                    break;

                }



            }

        }



        //cout<<"Pierwsze test gracza = "<<licznik_kart_gr[1]<<endl;

        for (int p=0; p<7; p++) // a ta za palety
        {
            test=5;
            if (p_gr[p]<=48 && 0<= p_gr[p] )
            {
                test=(p_gr[0])%7;
            }
            if  (test<3)
            {
                licznik_kart_gr[1]++;
                break;
            }
        }



        //cout<<"Drugi test gracza = "<<licznik_kart_gr[1]<<endl;
    }


//Komputer

    bool czy_fiol_zas_kom=false;
    test=5;
    //Gracz
    for (int i=1; i<=7; i++)//sprawdza czy gracz ma fioletowa zasade
    {
        if(zas_kom[i]==1)
        {
            czy_fiol_zas_kom=true;
            break;
        }
    }
    if (czy_fiol_zas_kom==true)//sprawdza czy gracz ma fioletowa zasade
    {


        for (int p=0; p<7; p++) // ta czesc odpowiada za sprawdzenie reki

        {
            if (0<=reka_kom[p])
            {
                if (0<=reka_kom[p] && ((reka_kom[p])%7)<3)
                {
                    licznik_kart_kom[1]++;
                    break;

                }



            }

        }



        //cout<<"Pierwsze test komputera = "<<licznik_kart_kom[1]<<endl;

        for (int p=0; p<7; p++) // a ta za palety
        {
            test=5;
            if (p_kom[p]<=48 && 0<= p_kom[p] )
            {
                test=(p_gr[0])%7;
            }
            if  (test<3)
            {
                licznik_kart_kom[1]++;
                break;
            }
        }


        //cout<<"Drugi test komputera= "<<licznik_kart_kom[1]<<endl;

    }
}
