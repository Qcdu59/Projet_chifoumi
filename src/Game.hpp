#ifndef GAME_HPP_
#define GAME_HPP_

#include <string>

class Game{

  private:
  std::string _LastResult;
  std::string _AiMove;
  std::string _JoMove;
public:
  void play(std::string move);
  std::string getLastResult();
  std::string getLastAiMove();
};

#endif
