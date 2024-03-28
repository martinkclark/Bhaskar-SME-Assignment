# SME-Assignment

documentation

TASK1> 

I successfully setup the Visual Studio Community 2022 and SFML Headers and library as instructed in the manual. copies the header and lib folders from SFML zip and paste it in sfml folder. Then I ran the .sln file in the visual studio and as instructed it gave me 2 delibrate errors. 

it took me around 20mints

Task2>

The error was in the PlayerController.h file. and it had 2 errors 
       a>syntax error: missing ; before * 
       b>unexpected token(s) precedding ;

I tried to reach up to the actual cause of the error, i was not able to resolve it properly. at first it seems that the error is in PlayerController.h itself, but everything seem good according to me in that file. So it is more likely that the problem is within included headers (PlayerView.h and PlayerModel.h)

unexpected token(s) preceding ';' suggests that the compiler is unable to recognize PlayerView and PlayerModel as valid types at the point where we're declaring pointers to them. but this is also not the case as the classes are properly defined in source/Player. 

I checked the Header guards to prevent multiple inclusion.
I also checked include paths and the files were located where they were expected to be.
also i didnt find any Namespace Conflicts.

I noticed that while adding bin files, to x64/debug my .exe file was not present, i tried several differnet ways still that .exe file was missing. this might be the cause for my local project to not setup.

this took me around 2.5 hrs then i move to the next task

TASK3>
to enable firing of player ship,
Inside PlayerController.cpp i found this function processPlayerInput() where the firing implementation was suppose to be written. i uncommented it. and tried to implement the processBulletFire(); function.

to make Subzero fire ForstBeam i have implemted fireFrostBeam() method in SubzeroController.cpp
 implemeted fireTorpedoes function and Update function in ThunderSnakeController
 for heavy damage bullets and can destroy bunkers as well. 
 implementd fireLockedMissiles() and update() in zapperController.cpp to locked on the player and follows wherever the player goes.

 to implemtnt these function i took around 45 minuts.

 

# SME-solution
