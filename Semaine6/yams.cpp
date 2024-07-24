#include <stdexcept>
#include <iostream>
#include <vector>
#include <cstdlib>
#define ASSERT(C) if ( !(C) ) { std::cerr << "Test failed: "#C << std::endl; }

using namespace std;
typedef vector<int> tableau;

int aleaint(int a, int b) {
    return (rand() % (b - a + 1) + a);
}

// Mettez ici les différentes fonctions nécessaires au jeu de Yams :


tableau lanceDes() {
    vector<int> s ={0,0,0,0,0};
    for (int i=0; i<5;i++){
        s[i]=aleaint(1,6);
    }
    return s;
}


tableau compteDes(vector<int> des) {
    vector<int> s = {0,0,0,0,0,0};
    for(int i=0;i<des.size();i++){
        s[des[i]-1]=s[des[i]-1]+1;
    }
    return s;
}


int chercheDansTab(int n, vector<int>t){
    for(int i=0;i<t.size();i++){
        if(n==t[i]){
            return i;
        }
    }
    return (-1);
}


int pointsFigureYams(vector<int>t){
    int Yams=60 + t[0];
    for(int i=0;i< t.size()-1;i++){
        if(t[i]==t[i+1]){
            Yams=Yams+t[0];
        }else{
            return 0;
        }
    }
    return Yams;
}


/*
int pointsFigureBrelan(vector<int> des) {
  vector<int> compte = compteDes(des);

  int valeur = (chercheDansTab(3, compte) + 1)
                      + (chercheDansTab(4, compte) + 1)
                      + (chercheDansTab(5, compte) + 1);

  if (valeur > 0) return (valeur * 3) + 10;
  else return 0;
}

int pointsFigure(vector<int> des, string figure) {
  if(figure == "brelan") {
    return pointsFigureBrelan(des);
  } else if(figure == "full") {
    return pointsFigureFull(des);
  } else if(figure == "carre") {
    return pointsFigureCarre(des);
  } else if(figure == "yams") {
    return pointsFigureYams(des);
  }
  return 0;
}*/

int main() {
    vector<int> tirage;
    tirage=lanceDes();
    afficheDes(tirage); 
    cout << pointsFigureYams(tirage) << endl;
    
}
