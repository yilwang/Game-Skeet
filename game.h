/*********************************************************************
 * File: game.h
 * Description: Defines the game class for Asteroids
 *
 *********************************************************************/


#include "point.h"
#include <vector> // this belongs to using namespace std;
using namespace std;

#include "uiDraw.h"
#include "uiInteract.h"
#include "point.h"
#include "velocity.h"
#include "ship.h"
#include "bullet.h" 
#include "asteroid.h"
#include "bigAsteroid.h"
#include "mediumAsteroid.h"
#include "smallAsteroid.h"

#ifndef GAME_H
#define GAME_H
class Game
{
  private: 
  Point topLeft;
  Point bottomRight;
  vector <Bullet*> bullets;
  vector <Asteroid*> asteroids;
  Ship ship; 
  int score;

  public:
  Game();
  Game(Point topLeft, Point bottomRight);
  ~Game();
  void advance();

  void draw(const Interface & ui);

  void advanceAsteroids();
  void advanceBullets();
  void advanceShip();
  
  void createInitialAsteroid();
  
  void handleInput(const Interface & ui);
  
  void handleCollisions();
  void cleanUpZombies();
  float getClosestDistance(FlyingObject &obj1, FlyingObject &obj2);
  
};


#endif /* GAME_H */
