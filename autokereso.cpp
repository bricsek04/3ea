#include <iostream>
using namespace std;
int main(){
    struct Autokereso
    {
        string rendszam;
        string szin;
        string tipus;
        int evjarat;
        int ar;
    };
    Autokereso kocsik[5];
    kocsik[0].evjarat = 2000;
    kocsik[1].evjarat = 2010;
    kocsik[2].evjarat = 2010;
    kocsik[3].evjarat = 2003;
    kocsik[4].evjarat = 2024;

    kocsik[0].rendszam = "XYZ456";
    kocsik[1].rendszam = "EFG444";
    kocsik[2].rendszam = "GMK586";
    kocsik[3].rendszam = "MEV765";
    kocsik[4].rendszam = "LLL333";

    kocsik[0].szin = "piros";
    kocsik[1].szin = "kék";
    kocsik[2].szin = "fehér";
    kocsik[3].szin = "piros";
    kocsik[4].szin = "zöld";

    kocsik[0].tipus = "volkswagen";
    kocsik[1].tipus = "skoda";
    kocsik[2].tipus = "seat";
    kocsik[3].tipus = "audi";
    kocsik[4].tipus = "skoda";

    kocsik[0].ar = 2345543;
    kocsik[1].ar = 506832;
    kocsik[2].ar = 4567245;
    kocsik[3].ar = 343345;
    kocsik[4].ar = 1875439;
    
    cout << "Írja be a keresendő gépjámű egyik paraméterét(rendszám(ABC123 formátum), szín, típus, évjárat): ";
    string param;
    cin >> param;
    bool talalt = false;
    int osszar = 0;
    for(Autokereso kocsi : kocsik){
        try
        {
            if (kocsi.evjarat == stoi(param))
            {
            cout << "\nTípus: " <<  kocsi.tipus << " Szín: " << kocsi.szin << " Rendszám: " << kocsi.rendszam << " Évjárat: " << kocsi.evjarat  << "Ár: " << kocsi.ar<< " Ft" << endl;
            talalt = true;
            osszar += kocsi.ar;
            }
        }
        catch(const std::exception& e)
        {
        }
        
        if(kocsi.rendszam == param)
        {
            cout << "\nTípus: " <<  kocsi.tipus << " Szín: " << kocsi.szin << " Rendszám: " << kocsi.rendszam << " Évjárat: " << kocsi.evjarat  << " Ár: " << kocsi.ar << " Ft" << endl;
            talalt = true;
            osszar += kocsi.ar;
        }
        if (kocsi.szin == param)
        {
            cout << "\nTípus: " <<  kocsi.tipus << " Szín: " << kocsi.szin << " Rendszám: " << kocsi.rendszam << " Évjárat: " << kocsi.evjarat  << " Ár: " << kocsi.ar<< " Ft" << endl;
            talalt = true;
            osszar += kocsi.ar;
        }
        if (kocsi.tipus == param)
        {
            cout << "\nTípus: " <<  kocsi.tipus << " Szín: " << kocsi.szin << " Rendszám: " << kocsi.rendszam << " Évjárat: " << kocsi.evjarat  << " Ár: " << kocsi.ar<< " Ft" << endl;
            talalt = true;
            osszar += kocsi.ar;
        }
        
        
        

    }
    if(!talalt) cout << "Nincs ilyen jámű a rendszerben" << endl;
    else cout << "\nA kereskedésben található gépjárművek össz értéke: " << osszar << " Ft \n";





}