#ifndef PLAYER_H
#define PLAYER_H

#include "GameMechs.h"
#include "objPos.h"
#include "objPosArrayList.h"
#include "Food.h"

class Player
{
  // Construct the remaining declaration from the project manual.

  // Only some sample members are included here

  // You will include more data members and member functions to complete your design.

public:
  enum Dir
  {
    UP,
    DOWN,
    LEFT,
    RIGHT,
    STOP
  }; // This is the direction state

  Player(GameMechs *thisGMRef, Food *foodObj);
  ~Player();

  objPosArrayList *getPlayerPos() const; // Upgrade this in iteration 3.
  void updatePlayerDir();
  void movePlayer();

  // More methods to be added here
  bool checkSpecialFoodConsumption(int i);
  bool checkFoodConsumption();
  void increasePlayerLength();
  bool checkSelfCollision();

private:
  objPosArrayList *playerPos; // Upgrade this in iteration 3.
  enum Dir myDir;

  // Need a reference to the Main Game Mechanisms
  GameMechs *mainGameMechsRef;
  Food *food;
  bool specialFood;
};

#endif