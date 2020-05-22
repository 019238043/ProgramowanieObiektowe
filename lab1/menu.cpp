#include <iostream>
#include <stdlib.h>
#include "tablica_wysw.h"
#include "tablica.h"

using namespace std;
int wpiszLiczbe ()
{
    int liczba;
    while(!(cin >> liczba)){
        cin.clear();
        cin.ignore(INT8_MAX, '\n');
        cout << "Nie wprowadzono liczby, sprobuj ponownie. ";
    }
    cin.clear();
    cin.ignore(INT8_MAX, '\n');
    return liczba;
}

char wpiszZnak ()
{
    char znak;
    cin >> znak;
    cin.clear();
    cin.ignore(INT8_MAX, '\n');
    return znak;
}

void wyswietlMenu()
{
    cout<<"1. wyswietl tablice"<<endl;
    cout<<"2. stworz tablice"<<endl;
    cout<<"3. zapisz tablice"<<endl;
    cout<<"4. wczytaj tablice"<<endl;
    cout<<"5. usun tablice"<<endl;
    cout<<"6. wyjdz"<<endl;
}

void wyczyscMenu()
{
    system("clear");
}

void menu ()
{
    bool menu_aktywne = true;
    char znak;

    while (menu_aktywne)
    {
        wyswietlMenu();
        znak=wpiszZnak();
        wyczyscMenu();

        switch (znak)
        {
        case '1'://wyswietl tablice
            wypisanieTablicy();
            break;

        case '2'://stworz tablice
            if(getStanTab())
            {
                cout<<"Nie mozna stworzyc tablicy gdy juz jakas istnieje, "<<endl;
                cout<<"nalezy najpierw usunac stara tablice. "<<endl;
            }
            else
            {
                int x,y;
                cout<<"Wpisz wysokosc tablicy "<<endl;
                y = wpiszLiczbe();
                cout<<"Wpisz szerokosc tablicy "<<endl;
                x = wpiszLiczbe();
                stworzTablice(x,y);
            }
            break;

        case '3'://zapisz tablice
            if(getStanTab)
            {
                cout<<"Zapisz tablice ToDO"<<endl;
            }
            else
            {
                cout<<"Tablica nie istnieje, nie mozna zapisac!"<<endl;
            }
            break;

        case '4'://wczytaj tablice
            if(getStanTab())
            {
                cout<<"Wczytywanie tablicy gdy juz istnieje jakas. Nie zaimplementowano"<<endl;
            }
            else
            {
                cout<<"Wczytywanie tablicy. Nie zaimplementowano"<<endl;
            }
            break;

        case '5'://usun tablice
            if(getStanTab())
            {
                char napewno;
                cout<<"Jezeli napewno chcesz usunac tablice wpisz 'y'. "<<endl;
                cin>>napewno;
                if(napewno=='y' || napewno=='Y')
                {
                    usunTab();
		    cout << "Usunieto tablice. "<<endl;
                }
            }
            else
            {
                cout<<"Nie mozna usunac tablicy jezeli nie istnieje!"<<endl;
            }
            break;

        case '6'://wyjdz
            menu_aktywne=false;
            break;

        default:
            cout << "Niema takiej opcji w menu.";
            break;
        }
    }
}


