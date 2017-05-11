/*! \mainpage Chifoumi_GL
 *
 * \section intro_sec Chifoumi
 *
 * Realisation d'un chifoumi en c++, respectivement en version "terminal" et
 * en interface graphique.
 * Chifoumi utilise les bibliothèque ccputest et libglog pour les test
 * unitaires et les logs. 
 *
 */

#include <iostream>
#include <glog/logging.h>
#include "Game.hpp"

int main(int argc, char ** argv)
{
  ////////////////Initialisation Logs////////////////////
  google::InitGoogleLogging("log_chifoumi");
  google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
  ///////////////////////////////////////////////////////

  
  //std::cout << "Hello World!" << std::endl;
  Game gametest;
  std::string move;
  std::cout << "move (Pierre, Feuille, Ciseaux) :";
  std::cin >> move;
  gametest.play(move);
  return 0;
}
