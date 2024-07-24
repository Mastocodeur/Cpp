#include <stdexcept>
#include <iostream>
#include <vector>
using namespace std;



/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

/** Construit un tableau 2D L x C dont les valeurs sont initialisées à v
 * @param L un entier: le nombre de lignes
 * @param C un entier: le nombre de colonnes
 * @param v un entier pour initialiser les valeurs
 * @return le tableau 2D d'entiers
 **/
vector<vector<int>> tableau2DInitialise(int L, int C, int v) {
    vector<vector<int>>r;
    r=vector<vector<int>>(L);
    for(int i=0 ; i<r.size() ; i++){
        r[i]=vector<int>(C);
        for(int j=0 ; j<r[i].size();j++){
            r[i][j]=v;
        }
    }
    return r;        
}

int main() {
    ASSERT( tableau2DInitialise(0, 0, 1) == vector<vector<int>>({}) );
    ASSERT( tableau2DInitialise(3, 4, 1) ==
            vector<vector<int>>({ { 1,1,1,1 },
                                  { 1,1,1,1 },
                                  { 1,1,1,1 } }) );
}
