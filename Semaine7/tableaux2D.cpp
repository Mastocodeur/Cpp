#include <stdexcept>
#include <iostream>
#include <vector>
using namespace std;



/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

vector<vector<int>> tabVide (0);
vector<vector<int>> tabCarre         = { { 1,  2, 3 },
                                         { 4, 11, 6 },
                                         { 9, 12, 7 } };
vector<vector<int>> tabRectangulaire = { { 1,  2, 3 },
                                         { 9, 12, 7 } };
vector<vector<int>> tabBizarre       = { { 1,  2, 3 },
                                         { 4,  5 },
                                         { 6,  7, 8, 10 } };

/** renvoie le nombre de lignes d'un tableau 2D d'entiers
 * @param t le tableau 2D d'entiers
 * @return le nombre de lignes du tableau t
 **/
int nombreDeLignes(vector<vector<int>> t) {
    return t.size();
}

void nombreDeLignesTest() {
    ASSERT( nombreDeLignes(tabVide) == 0 );
    ASSERT( nombreDeLignes(tabCarre) == 3 );
    ASSERT( nombreDeLignes(tabRectangulaire) == 2 );
    ASSERT( nombreDeLignes(tabBizarre) == 3 );
}

/** renvoie le nombre de colonnes d'un tableau 2D d'entiers
 * @param t le tableau 2D d'entiers
 * @return le nombre de colonnes du tableau t
 **/
int nombreDeColonnes(vector<vector<int>> t) {
   if (t.size()==0){
       return 0;
   }
   return t[0].size();
}


void nombreDeColonnesTest() {
    ASSERT( nombreDeColonnes(tabVide) == 0 );
    ASSERT( nombreDeColonnes(tabCarre) == 3 );
    ASSERT( nombreDeColonnes(tabRectangulaire) == 3 );
    ASSERT( nombreDeColonnes(tabBizarre) == 3 );
}

/** affiche tous les elements de la ligne l de t.
 * @param t le tableau 2D d'entiers
 * @param l un entier
 **/
void afficheLigne(vector<vector<int>> t, int l) {
    for(int i =0 ; i<t[l].size() ; i++){
        cout<< t[l][i] <<endl;
    }
}

/** affiche tous les elements de la colonne c de t.
 * @param t le tableau 2D d'entiers
 * @param c un entier
 **/
void afficheColonne(vector<vector<int>> t, int c) {
    for(int i = 0 ; i<t.size() ; i++){
        cout << t[i][c];
    }
}

/** affiche tous les éléments de la première diagonale de t (supposé carré).
 * @param t le tableau 2D d'entiers
 **/
void afficheDiagonale(vector<vector<int>> t) {
    for(int i = 0 ; i<t.size() ; i++){
        cout<< t[i][i]<<endl;
    }
}

/** affiche tous les elements de t.
 * @param t le tableau 2D d'entiers
 **/
void affiche(vector<vector<int>> t) {
    for(int i= 0 ; i<t.size() ; i++){
        for(int j=0 ; j<t[i].size() ; j++){
            cout<<t[i][j]<<" ";
        }
    }
    cout<<endl;
}

/** Test d'appartenance
 * @param t un tableau d'entiers à deux dimensions
 * @param x un entier
 * @return un booleen: true si x apparaît dans t, false sinon
 **/
bool appartient(vector<vector<int>> t, int x) {
    for(int i = 0 ; i<t.size() ; i++){
        for(int j =0 ; j<t[i].size() ; j++){
            if(x==t[i][j]){
                return true;
            }
        }
    }
    return false;
}

void appartientTest() {
    ASSERT( appartient(tabCarre,2));
    ASSERT( not appartient(tabCarre,25));
}
    
int main() {
    cout << "Lancement tests de nombreDeLignes" << endl;
    nombreDeLignesTest();
    cout << "Lancement tests de nombreDeColonnes" << endl;
    nombreDeColonnesTest();
    cout << "Appel de afficheLigne:" << endl;
    afficheLigne(tabCarre, 1);
    cout << "Appel de afficheColonne:" << endl;
    afficheColonne(tabCarre, 2);
    cout << "Appel de afficheDiagonale:" << endl;
    afficheDiagonale(tabCarre);
    cout << "Appel de affiche:" << endl;
    affiche(tabCarre);

    cout << "Lancement tests de appartient" << endl;
    nombreDeColonnesTest();
    appartientTest();
}
