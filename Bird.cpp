#include "Bird.h"

/*********************************************
* Function: Constructor
* Purpose : Set things to the initial condition
************************************************/
Bird :: Bird() 
{
   setPoint(Point(-200,random(-200,200)));
   velocity.setDx(velocity.getDx() + 0.5);
   alive = true;
}
