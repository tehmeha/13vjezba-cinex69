#include<iostream>
using namespace std;

int main()
{
    cout << "Glavni izbornik" << endl;
    cout << "1. Unos nove osobe" << endl;
    cout << "2. Ispisi podatke" << endl;
    cout << "3. pretraga prema racunu" << endl;
    cout << "4. Pretraga prema prezimenu" << endl;
    cout << "5. Ispisi sortirano" << endl;
    int izbor;
    cin >> izbor;

    unsigned long long int brRacuna[50];
    string prezimeIme[50];
    float saldo[50];
    int brojKlijenata = 0;
    if (izbor == 1)
    {
        cout << "Unesite broj racuna:";
        cin >> brRacuna [brojKlijenata];
        cout << "Unesite prezime i ime:" << endl;
        //! moramo ignoritari novi redak
        cin.ignore();
        getline(cin, prezimeIme[brojKlijenata]);
        saldo[brojKlijenata] = 0;
        brojKlijenata++;
    }
    else if(izbor == 2)
    {
        for(int i = 0; i < brojKlijenata; i++)
        {
            cout << brRacuna[i] << " "<< prezimeIme[i] << "saldo:" << saldo[i] << endl;
        }
    }
    else if(izboir == 3)
    {
        cout << "Unesite broj racuna koji zelite pronaci:" ;
        unsigned long long int brRacunaKojegTrazimo;
        cin >> brRacunaKojegTrazimo;
        for(int i = 0; i < brojKlijenata == brRacuna[i])
        {
            if(brRacunaKojegTrazimo == brRacuna[i])
            {
                cout << "Osoba je pronadjena." << endl;
                break;
            }
        }
    }
}
