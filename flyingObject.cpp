/*************************************************************
 * File: flyingObject.cpp
 * Author: Liya Wang
 *
 * Description: Contains the implementations of the
 *  method bodies for the game class.
 *************************************************************/
#include "flyingObject.h"


/*************************************************
* Function: getPoint
* Purpose: access to a point
*************************************************/
Point flyingObject :: getPoint()
{
   return point;
}


/*************************************************
* Function: getVelocity
* Purpose: access to a velocity
*************************************************/

Velocity flyingObject :: getVelocity()
{
   return velocity;
}


/*************************************************
* Function: setPoint
* Purpose: change value in a point
*************************************************/
void flyingObject :: setPoint(Point point)
{
   this-> point = point; 
}

/******************************************************
* Function: setVelocity
* Purpose: change value in the velocity
*************************************************/
void flyingObject :: setVelocity(Velocity velocity)
{
   this-> velocity = velocity;
} 

/****************************************************
* Function: advance
* Purpose: will add velocity in the point
*************************************************/
void flyingObject :: advance()
{
  point.setX(point.getX()+velocity.getDx());
  point.setY(point.getY()+velocity.getDy());
}



/******************************************************
* Function: kill
* Purpose: see if the bird is killed
*************************************************/
void flyingObject :: kill()
{
      alive = false;
}

/******************************************************
* Function: isAlived
* Purpose: saccess to the bird's status
*************************************************/
bool flyingObject :: isAlive()
{
   return alive;
} 
     


