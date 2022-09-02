#include <iostream>

using namespace std;

void zielona_zasada(int *reka_gr,int *reka_kom,int *zas_gr,int *zas_kom,int *licznik_kart_gr, int *licznik_kart_kom,int *p_gr,int *p_kom )
{
    bool czy_ziel_zas_gr=false;
    int  test=0;
    //Gracz
    for (int i=1; i<=7; i++)//sprawdza czy gracz ma zielona zasade
    {
        if(zas_gr[i]==4)
        {
            czy_ziel_zas_gr=true;
            break;
        }
    }
    if (czy_ziel_zas_gr==true)//sprawdza czy gracz ma zielona zasade
    {


        for (int p=0; p<7; p++) // ta czesc odpowiada za sprawdzenie reki

        {
            if (0<=reka_gr[p])
            {
                for (int k=0; k<4; k++)
                {
                    if (k*14<=reka_gr[p]<=k*14+6)// to rodziela przedzialy jesli naleza od <0,6> <14,20> <28,34> <42,48> itd.
                    {
                        if (0<=reka_gr[p] && ((reka_gr[p])%2)==0)
                        {
                            licznik_kart_gr[4]++;
                            break;

                        }
                    }
                    else if (0<=reka_gr[p] && ((reka_gr[p])%2)!=0)
                    {
                        licznik_kart_gr[4]++;
                        break;
                    }



                }



            }

        }



        cout<<"Pierwsze test gracza w zielonej= "<<licznik_kart_gr[4]<<endl;

        for (int p=0; p<7; p++) // a ta za palety
        {
            if (0<=p_gr[p])
            {
                for (int k=0; k<4; k++)
                {
                    if (k*14<=p_gr[p]<=k*14+6)// to rodziela przedzialy jesli naleza od <0,6> <14,20> <28,34> <42,48> itd.
                    {
                        if (0<=p_gr[p] && ((p_gr[p])%2)==0)
                        {
                            licznik_kart_gr[4]++;
                            break;

                        }
                    }
                    else if (0<=reka_gr[p] && ((reka_gr[p])%2)!=0)
                    {
                        licznik_kart_gr[4]++;
                        break;
                    }



                }


            }




        }
        cout<<"Drugi test gracza w zielonej= "<<licznik_kart_gr[4]<<endl;


////Poprawic Komputer

        bool czy_ziel_zas_kom=false;
        test=0;
        for (int i=1; i<=7; i++)//sprawdza czy komputer ma zielona zasade
        {
            if(zas_kom[i]==4)
            {
                czy_ziel_zas_kom=true;
                break;
            }
        }
        if (czy_ziel_zas_kom==true)//sprawdza czy komputer ma zielona zasade
        {


            for (int p=0; p<7; p++) // ta czesc odpowiada za sprawdzenie reki

            {

                if (0<=reka_kom[p])
                {
                    for (int k=0; k<4; k++)
                    {
                        if (k*14<=reka_kom[p]<=k*14+6)// to rodziela przedzialy jesli naleza od <0,6> <14,20> <28,34> <42,48> itd.
                        {
                            if (0<=reka_kom[p] && ((reka_kom[p])%2)==0)
                            {
                                licznik_kart_kom[4]++;
                                break;

                            }
                        }
                        else if (0<=reka_kom[p] && ((reka_kom[p])%2)!=0)
                        {
                            licznik_kart_kom[4]++;
                            break;
                        }



                    }



                }



            }



            //cout<<"Pierwsze test gracza w zielonej= "<<licznik_kart_kom[4]<<endl;

            for (int p=0; p<7; p++) // a ta za palety
            {
                if (0<=p_kom[p])
                {
                    for (int k=0; k<4; k++)
                    {
                        if (k*14<=p_kom[p]<=k*14+6)// to rodziela przedzialy jesli naleza od <0,6> <14,20> <28,34> <42,48> itd.
                        {
                            if (0<=p_kom[p] && ((p_kom[p])%2)==0)
                            {
                                licznik_kart_kom[4]++;
                                break;

                            }
                        }
                        else if (0<=reka_kom[p] && ((reka_kom[p])%2)!=0)
                        {
                            licznik_kart_kom[4]++;
                            break;
                        }



                    }


                }


            }



            //cout<<"Drugi test kompuera w zielonej= "<<licznik_kart_kom[4]<<endl;
        }


    }
}
