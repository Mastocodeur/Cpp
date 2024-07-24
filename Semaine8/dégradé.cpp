#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fichier;
    double dimensions;
    fichier.open("dégradé.pgm");
    cout << "Donner les dimensions de votre dégradé" << endl;
    cin >> dimensions ;
    fichier <<" P2"<< endl;
    fichier << "# Affiche le dégradé"<<endl;
    fichier << dimensions <<" "<< dimensions << endl;
    fichier << 2*dimensions <<endl;
    for (int i = 0; i < dimensions; i++){
        for(int j = 0; j< dimensions; j++){
            fichier << j+i << " ";
        }
        fichier << endl;
    }
    fichier.close();
}

