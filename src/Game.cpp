#include "Game.hpp"
#include "Random.hpp"
#include <vector>
#include <iostream>

using namespace std;

vector<string> Coups{"Pierre","Feuille","Ciseaux"};

void Game::play(string move){
  Random r;
  _JoMove = move;
  _AiMove = Coups[r(3)];
  string iamove = _AiMove;
  int resultat;
  
  //////////////////////Défaites/////////////////  
  if(move == "Ciseaux" && iamove == "Pierre")
    {
      resultat = -1;
    }

  if(move == "Pierre" && iamove == "Feuille")
    {
      resultat = -1;
    }

  if(move == "Feuille" && iamove == "Ciseaux")
    {
      resultat = -1;
    }

  //////////////////////Draw///////////////////
  if(move == "Pierre" && iamove == "Pierre")
    {
      resultat = 0;
    }

  if(move == "Ciseaux" && iamove == "Ciseaux")
    {
      resultat = 0;
    }

  if(move == "Feuille" && iamove == "Feuille")
    {
      resultat = 0;
    }
  //////////////////////Victoires///////////////////
  if(move == "Ciseaux" && iamove == "Feuille")
    {
      resultat = 1;
    }

  if(move == "Pierre" && iamove == "Ciseaux")
    {
      resultat = 1;
    }

  if(move == "Feuille" && iamove == "Pierre")
    {
      resultat = 1;
    }

  cout << iamove << endl;
  
  switch(resultat){
  case -1:
    _LastResult = "Perdu";
    cout << _LastResult << endl;
    break;
  case 0:
    _LastResult = "Egalite";
    cout << _LastResult << endl;
    break;
  case 1:
    _LastResult = "Victoire";
    cout << _LastResult << endl;
    break;
  }
}

string Game::getLastResult(){
  return _LastResult;
}
  
string Game::getLastAiMove(){
  return _AiMove;
}
    
    
  
