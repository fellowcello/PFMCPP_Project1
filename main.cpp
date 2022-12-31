#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: cat
//  action 1: the cat fights
cat.fight();
//  action 2: the cat scratches
cat.scratch();
//  action 3: the cat meows
cat.meow();
//  2)
//  Noun: bowling ball
//  action 1: the bowling ball rolls down the lane
bowlingBall.rollsDownLane();
//  action 2: the bowling ball knocks pins down
bowlingBall.knocksPinsDown();
//  action 3: the bowling ball goes in the gutter
bowlingBall.goesInGutter();

//  3)
//  Noun: olympic gymnist
//  action 1: the olypmic gymnist practices routine 
olympicGymnist.practiceRoutine();
//  action 2: the olypmic gymnist stretches legs
olympicGymnist.stretchLegs();
//  action 3: the olypmic gymnist wins a medal
olympicGymnist.winMedal();

//  4)
//  Noun: weight lifter
//  action 1: the weight lifter does curls
weightLifter.curls();
//  action 2: the weight lifter does squats
weightLifter.squats();
//  action 3: the weight lifter bench presses
weightLifter.benchPresses();

//  5)
//  Noun: tiger
//  action 1: the tiger hunts
tiger.hunt();
//  action 2: the tiger growls
tiger.growl();
//  action 3: the tiger sleeps
tiger.sleep();

//  6)
//  Noun: barber
//  action 1: the barber cuts hair
barber.cutHair();
//  action 2: the barber shaves a beard
barber.shavesBeard();
//  action 3: the barber combs hair
barber.combHair();

//  7)
//  Noun: mascot
//  action 1: the mascot dunks a ball
mascot.dunkBall();
//  action 2: the mascot does a flip
mascot.flip();
//  action 3: the mascot makes a joke
mascot.joke();

//  8)
//  Noun: chef
//  action 1: the chef cooks a steak
chef.cookSteak();
//  action 2: the chef washes dishes
chef.washDishes();
//  action 3: the chef yells
chef.yell();

//  9)
//  Noun: politician
//  action 1: the politician lies
politician.lie();
//  action 2: the politician cheats
politician.cheat();
//  action 3: the politician steals
politician.steal();

//  10)
//  Noun: airplane
//  action 1: the airplane flies
airplane.fly();
//  action 2: the airplane crashes
airplane.crash();
//  action 3: the airplane lands
airplane.land();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
