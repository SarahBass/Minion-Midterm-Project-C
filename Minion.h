/*******************************************
___  ____       _                   _     
|  \/  (_)     (_)                 | |    
| .  . |_ _ __  _  ___  _ __       | |__  
| |\/| | | '_ \| |/ _ \| '_ \      | '_ \ 
| |  | | | | | | | (_) | | | |  _  | | | |
\_|  |_/_|_| |_|_|\___/|_| |_| (_) |_| |_|
Sarah Bass
Student ID: 715560
Currently enrolled on C++ 6PM-9PM
Professor Zhen Zhai
Project #3 C++: Minion Project
Minion.h File
********************************************/
#ifndef MINION_H
#define MINION_H
#include <string>

using namespace std;
class Minion
{

//------PUBLIC AND PRIVATE VARIABLES--------------------
public:
//------OPERATORS-----------------
bool operator > (const Minion&) const;
bool operator < (const Minion&) const;
friend ostream& operator << (ostream&, const Minion&);
Minion &operator++();

Minion(
string minionName,
float minionHeight,
int minionBananas
);
Minion operator++(int);
//------Public FUNCTIONS---------------
float getHeight(); 
static void printMinionCount();
void setMinion (string minionName, float minionHeight, int minionBananas);
//--------------------------------------------------------

private:
string name;
float height;
int bananas;
static int minionCount;
};

#endif // MINION_H

/*MINION.H notes:
1. Create 3 minions in main using information 
taken from terminal from the minion constructor.

Minion1: name, height, bananas
Minion2: name, height, bananas
Mionin3: name, height, bananas 

2. Find the tallest minion using > and < operators.

3. Change Height of minions.
Minion1: no change
Minion2: pre-increment cascade change
Mionin3  post- increment change
----------------------------------------------------------------
Minion 1: no change
----------------------------------------------------------------
Minion 2:The second minion we created will be growing two inches 
with pre-increment and cascaded function call (++(++minion)). 
----------------------------------------------------------------
Minion 3:The third minion we created will be growing one inch with 
post-increment (minion++).
---------------------------------------------------------------
OVERLOADING INSTRUCTIONS
---------------------------------------------------------------
We will overload the following operators for the class Minion: 
greater than operator, smaller than operator, pre-increment, 
post-increment, and insertion operator for output.

The greater than operator(>) and the smaller than operator(<) 
should both return a boolean, be constant, and take constant 
reference as parameters. These two functions should compare the 
height of two minions. 

The pre and post increment operators should increase the height 
by one inch at a time. Make sure to return reference for pre-increment
 and return the un-incremented version of the class for post increment.
*/