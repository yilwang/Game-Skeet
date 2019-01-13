#include "StandardBird.h"



/******************************************************
* Function: Constructor  
* Purpose : Implement the intial situation
*******************************************************/
StandardBird :: StandardBird()
{
  if(point.getY() >= 0)
    {
      velocity.setDy(velocity.getDy() - 4);
    }
  else if (point.getY() < 0)
    {
     velocity.setDy(velocity.getDy() + 4); 
    }  
  velocity.setDx(velocity.getDx() + 3); // move the bird horizontally
}

/**************************************************
*Function: Draw
*Purpose: Draw StandaradBird out on the screen
***************************************************/
void StandardBird :: draw()
{
  drawCircle(point, 15);
}

/**************************************************
*Function: hit
*Purpose: Check if we hit StandaradBirds on the screen
***************************************************/
int StandardBird :: hit() 
{
    kill();
    return 1;
} 