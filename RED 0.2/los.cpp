#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void manipulator_wartosciami (int *a,int ile)
{
    for (int i=0;i<ile;i++)
    {
        cin>>a[i];

    }
}

bool powtarza(int *a,int i) //funckja sprawdzaj¹ca czy liczba a[i] sie powtarza
{
         for (int k=1; k<=i; k++)
            {
                if (a[i]==a[i-k])
                {
                    return false;
                }
            }
        return true;

}


void  losowanie (int *a,int ile)
{
    srand( time( NULL ) );
    bool czy=true;
    for (int i=0; i<ile; i++)
    {
        a[i]=(rand()%48);
        if (i>=1)// tutaj sprawdze czy liczba jest druga
        {
            /*for (int k=1; k<=i; k++) //sprawdzamy czy sie powtarza
            {
                if (a[i]==a[i-k])
                {
                    czy=false;
                    break;
                }
            }*/
            czy=powtarza(a,i);

            if (czy==false) //jezeli sie to powtarza to losujemy ponownie
            {
                do
                {
                    czy=true;
                    a[i]=(rand()%48);
                    czy=powtarza(a,i);
                }
                while (czy==false);//dopoki nie uzyskamy innej liczby losujemy do sktuku

            }
        }
    }

}
