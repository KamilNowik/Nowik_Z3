#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    string napis, napis_schowek;
    int powtorzenie;
    while (napis != "end")
    {
        cout << "Podaj ciag napisow oddzielonych spacja, na zakonczenie wpisz 'end' : " << endl;
        cin >> napis;
        if (napis!="end" && napis_schowek.empty())
        {
            napis_schowek=napis;
        }
        if (napis.size()<napis_schowek.size()&& napis!="end")
        {
            napis_schowek=napis;
        }

    }
    int n;
    do
    {
        cin.clear();
        cin.sync();
        cout << "Podaj stala n, liczbe w przedziale <5,10>" << endl;
        cin >> n;
    }
    while(n<5 || n>10);
    cout << "Podaj " << n << " napisow: " << endl;

    for( int i=0; i<n; i++)
    {
        cout << "Podaj napis nr " << i+1 << " :" << endl;
        cin >> napis;
        if (napis=="end")
        {
            break;
        }
        if (napis_schowek.empty())
        {
            napis_schowek=napis;
        }
        if (napis.size()<napis_schowek.size())
        {
            napis_schowek=napis;
        }

    }

    cout << "Powtórzenie dwóch ostatnich liter wystêpuje" << powtorzenie  << " razy." << endl;
    cout << "Najkrotszy napis ma " << napis_schowek.size() << " znakow."<< endl;

    return 0;
}
