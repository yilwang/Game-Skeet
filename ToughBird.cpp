#include "ToughBird.h"

/*********************************************
* Function: Constructor
* Purpose : Set things to the initial condition
************************************************/
ToughBird :: ToughBird() 
{ 
    aimed = 3;
    if(point.getY() >= 0)
    {
        velocity.setDy(velocity.getDy() - 3);
    }
    else if (point.getY() < 0)
    {
        velocity.setDy(velocity.getDy() + 1); 
    }  
    velocity.setDx(velocity.getDx() + 0.1); // move the bird horizontally

}



/**************************************************
*Function: Draw
*Purpose: Draw StandaradBird out on the screen
***************************************************/
void ToughBird :: draw()
{

    drawToughBird(point, 15, aimed);
}
   
/**************************************************
*Function: hit
*Purpose: Check if we hit StandaradBirds on the screen
***************************************************/    
int ToughBird :: hit() 
{   
    aimed--;
    if (aimed ==0)
    {
      kill();
      return 3;
    }
  return 1;
} 