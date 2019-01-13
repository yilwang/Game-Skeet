#include "Bullet.h"
#include <cmath> // used for sin, cos, and M_PI

#define BULLET_SPEED 15.0


/**************************************************
*Function: Constructor
*Purpose: Implement the initial condition
***************************************************/
Bullet :: Bullet()
{ 
   alive = true;
}


/**************************************************
*Function: Fire
*Purpose: Fire the bullet to birds on the screen
***************************************************/
void Bullet :: fire(Point point, float  angel)
{
   this->point = point;
   float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angel));
   float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angel));

   velocity.setDx(velocity.getDx() + dx);
   velocity.setDy(velocity.getDy() + dy);
}

/**************************************************
*Function: Draw
*Purpose: Draw bullet out on the screen
***************************************************/
void Bullet :: draw()
{
   drawDot(point);
}

