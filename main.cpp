#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string napis, nowe_slowo;
    while (napis != "end")
    {
        cout << "Podaj ciag napisow oddzielonych spacja: " << endl;
        cin >> napis;
    }
    int n;
    do
    {
        cout << "Podaj stala n, w przedziale <5,10>" << endl;
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

        nowe_slowo+=napis[napis.size()-2];
        nowe_slowo+=napis[napis.size()-1];
    }

    cout <<  nowe_slowo << endl;
    cout << nowe_slowo.size() << endl;
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

    cout << nowe_slowo << endl;







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








    return 0;
}
