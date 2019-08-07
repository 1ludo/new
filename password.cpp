#include <iostream>
#include <string>

using namespace std;

int main()


{
    string const bitcoinPK("5KfXfW4x9NS8nRNd1P4sC9ezJHZnBZjgnGcfBr9yeaVBDf1AkVg");
    int const password(1234);
    int input;
    int trials(3);

    cout << "Pour acceder a votre cle prive, saisissez votre mot de passe: " << endl;

    do
    {
        cin >> input;

        if (input != password)
        {
            trials--;
        }
        if (trials >= 1)
        {
            cout << "Tentatives restantes : " << trials << endl;
        }
        if (trials == 0)
        {
            cout << "Vous avez depasser le nombre de tentatives autorises." << endl;
        }

    } while (input != password && trials > 0);


    if (input == password)
    {
        cout << "Authentification reussie !" << endl;
        cout << "Voici votre cle prive : " << bitcoinPK << endl;
    }
    else
    {
        cout << "Echec d'authentification, fin du programme." << endl;
    }

    return 0;
}
