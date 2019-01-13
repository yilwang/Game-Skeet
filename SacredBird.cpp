#include "SacredBird.h"

/******************************************************
* Function: Constructor  
* Purpose : Implement the intial situation
*******************************************************/
SacredBird :: SacredBird() 
{
  if(point.getY() >= 0)
  {
     velocity.setDy(velocity.getDy() - 4);
  }
  else if (point.getY() < 0)
  {
     velocity.setDy(velocity.getDy() + 3); 
  }  
   velocity.setDx(velocity.getDx() + 2); // move the bird horizontally
}
   

/**************************************************
*Function: Draw
*Purpose: Draw StandaradBird out on the screen
***************************************************/   
void SacredBird :: draw()
{
      drawSacredBird(point, 15);
}


/**************************************************
*Function: hit
*Purpose: Check if we hit StandaradBirds on the screen
***************************************************/
int SacredBird :: hit() 
{
  kill();
  return -10; 
} 
