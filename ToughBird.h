#ifndef TOUGHBIRD_H
#define TOUGHBIRD_H

#include <iostream>
#include "Bird.h"


class ToughBird : public Bird
{
   private:

   public:
      ToughBird();

      void draw(); 
      int hit();


};


#endif