#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
#define MAX_KARATA 999

int main() {
    fastio;
    int i,j,k;
    int broj_karata,broj_dijeljenja;
    string oznaka_stupca;
    int broj_stupca;
    int brojac;
    int poredak[MAX_KARATA],stari_poredak[MAX_KARATA],kandidati[MAX_KARATA];

    cin >> broj_karata >> broj_dijeljenja;

    for (i = 0;i < broj_karata;++i)
    {
        poredak[i] = i;
        kandidati[i] = 1;
    }

    //

    for (i = 0;i < broj_dijeljenja;++i)
    {
        cin >> oznaka_stupca;

        switch (oznaka_stupca[0])
        {
            case 'p' : broj_stupca = 0;
                break;
            case 'd' : broj_stupca = 1;
                break;
            case 't' : broj_stupca = 2;
        }

        for (j = 0;j < broj_karata;++j)
            if (j % 3 != broj_stupca)
                kandidati[poredak[j]] = 0;

        for (j = 0;j < broj_karata;++j)
            stari_poredak[j] = poredak[j];

        brojac = 0;

        for (j = 0;j < 3;++j)
            for (k = 0;k < broj_karata / 3;++k)
                poredak[brojac++] = stari_poredak[3 * k + j];
    }
    for (i = 0;i < broj_karata;++i)
        if (kandidati[i])
            cout << i + 1 << " ";
    return 0;
}
