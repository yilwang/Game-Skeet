#ifndef BIRD_H
#define BIRD_H

#include <iostream>
#include "flyingObject.h"
#include "uiDraw.h"

class Bird : public flyingObject
{
  protected:
   int aimed;

  public:

   Bird();

/*********************************************
* Function: Draw
* Purpose : Draw birds on the screen
************************************************/
   virtual  void draw() =0;

/*********************************************
* Function: hit
* Purpose : check once the birds got hit
************************************************/   
   virtual int hit() = 0; 
};

#endif
