###############################################################
# Program:
#     Milestone 08, Skeet
#     Brother MacBeth, CS165
# Author:
#     Liya Wang
# Summary:
#     Put your summary code here... 
# Above and Beyond
#     When you submit your final project (not for milestones),
#     list anything here that you did to go above and beyond
#     the base requirements for your project.
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main game
###############################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o rifle.o flyingObject.o velocity.o Bird.o Bullet.o SacredBird.o StandardBird.o ToughBird.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o rifle.o SacredBird.o velocity.o ToughBird.o StandardBird.o Bird.o Bullet.o flyingObject.o $(LFLAGS)

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h point.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

game.o: game.cpp uiDraw.h uiInteract.h point.h rifle.h Bullet.h Bird.h
	g++ -c game.cpp

driver.o: game.h uiInteract.h driver.cpp
	g++ -c driver.cpp

rifle.o: rifle.h point.h uiDraw.h rifle.cpp
	g++ -c rifle.cpp

#######################################################################
# ADD YOUR ADDITIONAL RULES HERE!
#
# Then, don't forget to add them to the dependecy list for a.out above.
#######################################################################

velocity.o: velocity.h velocity.cpp	
	g++ -c velocity.cpp

Bird.o: Bird.h flyingObject.h uiDraw.h Bird.cpp 
	g++ -c Bird.cpp

Bullet.o: Bullet.h flyingObject.h uiDraw.h Bullet.cpp
	g++ -c Bullet.cpp

flyingObject.o: flyingObject.h point.h velocity.h flyingObject.cpp
	g++ -c flyingObject.cpp

SacredBird.o: SacredBird.h SacredBird.cpp Bird.h
	g++ -c SacredBird.cpp

StandardBird.o: StandardBird.cpp StandardBird.h Bird.h
	g++ -c StandardBird.cpp

ToughBird.o: ToughBird.cpp ToughBird.h Bird.h
	g++ -c ToughBird.cpp


###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o
