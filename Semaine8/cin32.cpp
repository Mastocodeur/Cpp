#include <iostream>
#include <fstream>
using namespace std;


int main () {
    ofstream fichier;
    fichier.open("multiplication.txt");
    double nombre1;
    double nombre2;                   
    cout << "Donner un premier nombre svp" << endl;
    cin >> nombre1;
    cout << "Donner un deuxième nombre svp" << endl;
    cin >> nombre2;   
    fichier <<  nombre1 << " fois " << nombre2  << " vaut " << nombre1 * nombre2 << endl;           
    fichier.close();                            
}



