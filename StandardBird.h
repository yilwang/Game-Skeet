#ifndef STANDARDBIRD_H
#define STANDERDBIRD_H

#include <iostream>
#include "Bird.h"

class StandardBird : public Bird
{
   private:

   public:
      StandardBird();
     
      void draw(); 
      int hit();
};


#endif