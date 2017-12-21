#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    string napis, nowe_slowo, napis_schowek;
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
        nowe_slowo+=napis[napis.size()-2];
        nowe_slowo+=napis[napis.size()-1];
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
        nowe_slowo+=napis[napis.size()-2];
        nowe_slowo+=napis[napis.size()-1];
    }

    if (nowe_slowo.size()<4)
        {
            cout << "Podano za malo napisow, aby je porownywac, program zostanie zakonczony, kliknij dowolny klawisz aby wyjsc i sproboj ponownie." << endl;
            cin.sync();
            cin.get();
            exit(0);
        }

    int powtorzenie=0, schowek, zamiana;
    do
    {
        zamiana=0;
        for (int i=0; i<nowe_slowo.size()-3; i+=2)
        {
            if (nowe_slowo[i]>nowe_slowo[i+2])
            {
                zamiana+=1;
                schowek=nowe_slowo[i];
                nowe_slowo[i]=nowe_slowo[i+2];
                nowe_slowo[i+2]=schowek;
                schowek=nowe_slowo[i+1];
                nowe_slowo[i+1]=nowe_slowo[i+3];
                nowe_slowo[i+3]=schowek;
            }
        }
    }
    while (zamiana!=0);

    int i=0;
    while (i<nowe_slowo.size()-3)
    {
        if (nowe_slowo[i]==nowe_slowo[i+2] && nowe_slowo[i+1]==nowe_slowo[i+3])
        {
            powtorzenie+=2;
            i+=2;
            while (nowe_slowo[i]==nowe_slowo[i+2] && nowe_slowo[i+1]==nowe_slowo[i+3])
                {
                    powtorzenie++;
                    i+=2;
                }
        }
        i+=2;
    }
    cout << "Takie same koncowki wystepuja w " << powtorzenie << " wyrazach." << endl;
    cout << "Najkrotszy napis ma " << napis_schowek.size() << " znakow."<< endl;

    return 0;
}
