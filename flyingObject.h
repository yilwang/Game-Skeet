
#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H

#include "point.h"
#include "velocity.h"


class flyingObject
{
   protected:
      bool alive;
      Point point;
      Velocity velocity;

   public:
       flyingObject()
       {
          this-> point = point;
          this-> velocity = velocity;
       }
       
       Point getPoint();
       Velocity getVelocity();
       void setPoint(Point point);
       void setVelocity(Velocity velocity);

       bool isAlive();
       void kill();
       void advance();

};


#endif