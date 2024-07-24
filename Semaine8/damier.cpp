#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fichier;
    fichier.open("damier-automatique.pbm");
    double dimensions;
    cout << "Donner les dimensions de votre damier" << endl;
    cin >> dimensions ;
    fichier <<" P1"<< endl;
    fichier << "# CREATOR: GIMP PNM Filter Version 1.1"<<endl;
    fichier<< dimensions <<" "<< dimensions << endl;
    for (int i = 0; i < dimensions; i++){
        if (i%2==0){
            for (int j = 0; j< dimensions/2; j++){
                fichier << "0 1 ";
            }
        }
        
        else{
            for(int j = 0; j< dimensions/2; j++){
                fichier<< "1 0 ";
            }
       }
    }
    fichier.close();
}


