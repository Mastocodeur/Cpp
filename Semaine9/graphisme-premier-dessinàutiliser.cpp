#include <stdexcept>
#include "MLV.h"
#include <cmath>
using namespace mlv;
using namespace std;  // Pour les exceptions dans la version distribuée

int main() {
    int delai = 1;

    window_t fenetre = window_t( "Premier dessin", "Premier dessin", 900, 480 );
    fenetre.clear( color::lightyellow );

    // Dessine un point noir de coordonnées (418, 143)
    // Remplacer la ligne suivante par le code adéquat
    fenetre.draw_point({418,143}, color::black );
    fenetre.update();
    fenetre.wait_seconds( delai );

    // Dessine un segment marron entre les points (100,200) et (200,200)
    // Remplacer la ligne suivante par le code adéquat
    cout << "segment1";
    for(int i = 100 ; i<=200 ; i++){
        fenetre.draw_point({ i , 200 }, color::saddlebrown );
    }
    fenetre.update();
    fenetre.wait_seconds( delai );

    // Dessine un segment marron entre les points (200,300) et (200,400)
    // Remplacer la ligne suivante par le code adéquat
    cout << "segment";
    for(int i = 300 ; i<=400 ; i++){
        fenetre.draw_point({200,i}, color::saddlebrown );
    }
    fenetre.update();
    fenetre.wait_seconds( delai );

    // Dessine un rectangle horizontal vide de sommets diagonaux (200,200) et (400,300) et de contour marron
    // Remplacer la ligne suivante par le code adéquat
    cout << "rectangle";
    for(int i = 200 ; i<=400 ; i++){
        fenetre.draw_point({i,200}, color::saddlebrown );
        fenetre.draw_point({i,300}, color:: saddlebrown );
    }
    for(int i = 200 ; i<= 300 ; i++){
        fenetre.draw_point({200,i}, color::saddlebrown );
        fenetre.draw_point({400,i}, color:: saddlebrown );
    }
    fenetre.update();
    fenetre.wait_seconds( delai );

    // Dessine un rectangle horizontal plein marron de sommets diagonaux (400,150) et (500,200)
    // Remplacer la ligne suivante par le code adéquat
    for(int i = 400 ; i<=500 ; i++){
        for(int j = 150 ; j<= 200 ; i++){
        fenetre.draw_point({400+i,150+j}, color::saddlebrown);
        }
    }
    fenetre.update();
    fenetre.wait_seconds( delai );

    // Dessine un segment marron entre les points (400,300) et (500,400)
    // Remplacer la ligne suivante par le code adéquat
    for(int i = 0 ; i<=100 ; i++){
        for(int j=0 ; j<= 100 ; j++){
            fenetre.draw_point({400+i,300+j}, color::saddlebrown );
            fenetre.update();
        }
    }
   
    fenetre.wait_seconds( delai );

    // Dessine un cercle marron de centre (415,145) et de rayon 10
    // Remplacer la ligne suivante par le code adéquat
    for(int i = 0 ; i<= 360 ; i=i+0,01){
       int a= 415 + 10 * cos ((i * 3,14)/180);
       int b = 145 * 10 * sin((i * 3,14)/180);
        fenetre.draw_point({a,b}, color::saddlebrown);
    fenetre.update();
    }
    fenetre.wait_seconds( delai );

    // Dessine un disque rouge de centre (700, 100) et de rayon 50
    // Remplacer la ligne suivante par le code adéquat
    for(int i = 0 ; i<= 50 ; i=i+0,01){
        for (int j =0 ; j<360; j++){
            int a= 415 + 10 * cos ((i * 3,14)/180);
            int b = 145 * 10 * sin((i * 3,14)/180);
            fenetre.draw_point({a,b}, color::saddlebrown);
            fenetre.update();
       }
    }
    fenetre.wait_seconds( delai );
  
return 0;
}
