#include <stdexcept>
#include "MLV.h"
using namespace mlv;

int main() {
    // Crée et affiche une fenêtre de taille 640x480
    window_t mafenetre = window_t( "Premier essai", "essai", 640, 480 );
    // Dessine un point rouge de coordonnées x=120 et y=50
    mafenetre.draw_point( {120, 50}, color::red );
    // Actualise la fenêtre
    mafenetre.update();
    // Attend 10 secondes
    mafenetre.wait_seconds( 10 );
}
