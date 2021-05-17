/****************************************************
___  ____       _                                    
|  \/  (_)     (_)                                   
| .  . |_ _ __  _  ___  _ __         ___ _ __  _ __  
| |\/| | | '_ \| |/ _ \| '_ \       / __| '_ \| '_ \ 
| |  | | | | | | | (_) | | | |  _  | (__| |_) | |_) |
\_|  |_/_|_| |_|_|\___/|_| |_| (_)  \___| .__/| .__/ 
                                        | |   | |    
                                        |_|   |_|    
Sarah Bass
Student ID: 715560
Currently enrolled on C++ 6PM-9PM
Professor Zhen Zhai
Project #3 C++: Minion Project
Minion.cpp 
****************************************************/
#include <stdio.h> 
#include <iostream> 
#include <string>  
#include <fstream> 
#include <iomanip> 
#include <cmath> 
#include "Minion.h"
using namespace std;

int Minion :: minionCount;
//constructor
Minion :: Minion(
string minionName,
float minionHeight,
int minionBananas){
    setMinion(minionName, minionHeight, minionBananas);
}
//setter public to private
void Minion  :: setMinion (string minionName, float minionHeight, int minionBananas){
    name = minionName;
    height = minionHeight;
    bananas = minionBananas;
    Minion :: minionCount++;
}

//operator overload functions
bool Minion :: operator > (const Minion &minion) const{
    return this-> height > minion.height;
}
bool Minion :: operator < (const Minion &minion) const{
    return this-> height < minion.height;
}
 ostream &operator << (ostream &output, const Minion &minion){
     output << "The minion " << minion.name << " is " << minion.height << " inches tall and own " << minion.bananas << " banana(s)."<<endl;
    return output;
 }

Minion& Minion::operator++(){
    this->height++;
    return *this;
}

Minion Minion :: operator++(int){
Minion temp = *this;
this->height++;
return temp;
}

//getter private to public
float Minion :: getHeight()
{
    float temporaryheight;
    temporaryheight = height;
    return temporaryheight;
}

//print minion count from static member
void Minion::printMinionCount() {
 
  cout << minionCount << " minions created." << endl;
}
