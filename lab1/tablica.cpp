#include <iostream>
using namespace std;

int tabX=10;
int tabY=10;
int** tab = new int *[tabX];
bool tabIstnieje = false;

void inicjujTablice (int x,int y)
{
    tab = new int *[y];
    for(int i=0;i<y;i++)
    {
        tab[i]=new int[x];
    }
    tabIstnieje=true;
}

int** stworzDomyslnaTablice()
{
    inicjujTablice(tabX,tabY);
    return tab;
}

int** stworzTablice(int nowyX, int nowyY)
{
    tabX=nowyX;
    tabY=nowyY;
    inicjujTablice(tabX,tabY);
    return tab;
}

void wypisanieTablicy()
{
    if(tabIstnieje)
    {

        int test=0;
        for(int i=0;i<tabY;i++)
        {
            for(int j=0;j<tabX;j++)
            {
                tab[i][j]=test++;
                cout<<tab[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Tablica nie istnieje! Wczytaj lub stworz tablice."<<endl;
    }
}

void usunTab ()
{
    for (int i=0; i<tabY; i++)
    {
        delete[] tab[i];
    }
    delete [] tab;
    tabIstnieje=false;
}

int** getTab()
{
    return tab;
}

bool getStanTab ()
{
    return tabIstnieje;
}

