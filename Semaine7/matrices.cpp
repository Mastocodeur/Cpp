#include <stdexcept>
#include <iostream>
#include <vector>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

typedef vector<vector<int>>  Matrice;

Matrice matriceVide (0);
Matrice matriceCarre       = { { 1,  2, 3 },
                          { 4, 11, 6 },
                          { 9, 12, 7 }};
Matrice matriceRectangulaire={ { 1,  2, 3 },
                          { 9, 12, 7 }};
Matrice matriceSymetrique = { { 1,  2, 3 },
                         { 2, 11, 4 },
                         { 3,  4, 0 }};


/** Teste si une matrice est symétrique
 * @param t une matrice carrée
 * @return true si t[i][j] == t[j][i] pour tout i,j, false sinon
 **/
bool estSymetrique(Matrice t) {
    for(int i=0; i<t.size(); i++){
        for(int j=0; j<t[i].size(); j++){
            if(t[i][j]!=t[j][i]){
                return false;
            }
        }
    }
    return true;
}

void estSymetriqueTest() {
    ASSERT(     estSymetrique(matriceVide) );
    ASSERT( not estSymetrique(matriceCarre) );
    ASSERT(     estSymetrique(matriceSymetrique) );
}


/** somme deux matrices dont les dimensions sont identiques
 * @param t1 une matrice
 * @param t2 une matrice
 * @return la matrice t1 + t2
 **/
Matrice somme(Matrice t1, Matrice t2) {
    for(int a=0; a< t1.size();a++){
        for(int b=0 ; b<t1[a].size(); b++){
            t1[a][b]=t1[a][b]+t2[a][b];
        }
    }
    return t1;
}


void sommeTest() {
    ASSERT( somme(matriceCarre, matriceSymetrique) == Matrice({{ 2, 4, 6 }, { 6, 22, 10 }, { 12, 16, 7 }}) );
}


int main() {
    // Lance tous les tests
    estSymetriqueTest();
    sommeTest();
}
