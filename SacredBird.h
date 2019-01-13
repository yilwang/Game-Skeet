#ifndef SACREDBIRD_H
#define SACREDBIRD_H

#include <iostream>
#include "Bird.h"

class SacredBird : public Bird
{
   private:

   public:
      SacredBird();
   
      void draw(); 
      int hit();


};


#endif