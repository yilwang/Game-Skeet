
#ifndef BULLET_H
#define BULLET_H

#include "flyingObject.h"
#include "uiDraw.h"
#include <cmath> // used for sin, cos, and M_PI

class Bullet : public flyingObject
{
   private:


   public:
      Bullet();
   
      void draw();
      void fire(Point point,float angel);

};



#endif