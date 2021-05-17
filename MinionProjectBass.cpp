/*********************************              _       
 _ __ ___   __ _(_)_ __  
| '_ ` _ \ / _` | | '_ \ 
| | | | | | (_| | | | | |
|_| |_| |_|\__,_|_|_| |_|    

Sarah Bass
Student ID: 715560
Currently enrolled on C++ 6PM-9PM
Professor Zhen Zhai
Project #3 C++: Minion Project
Main.cpp File
-----------------------------------
---------Contents------------------
Part 1:  Construct 3 minions
Minion# = name, height, bananas  
Part 2: Call tallest minion operators    
        a. > operator:
        b. < operator: 
        c. Print tallest
Part 3: Change minion height                 
        a. pre-increment
        cascaded (++(++minion))  
        b. post- increment
        (minion++)
Part 4: Print Minion Count                
        a. printMinionCount()
-----------------------------------
-----------------------------------
***********************************/
#include <stdio.h> 
#include <iostream> 
#include <string>  
#include <fstream> 
#include <iomanip> 
#include <cmath> 
#include "Minion.h"

using namespace std; 

int main(){
string name;
float height;
int bananas;
//enter in data to private variables in Minion.h constructor   
cout<< "Enter information for three minions(names, height, and bananas): " << endl;

cin >> name >> height >> bananas;
Minion minion1(name, height, bananas);
cin >> name >> height >> bananas;
Minion minion2(name, height, bananas);
cin >> name >> height >> bananas;
Minion minion3(name, height, bananas);

//output the "The tallest minion:" before triggering the insertion operator
cout << "The tallest minion:" << endl;
if (minion1 > minion2){
        if (minion2 > minion3) {cout << minion1;
        }
        else {
                if (minion1 < minion3) {cout << minion3;
                }else {cout << minion1;
        }
        }
}else {
        if (minion2 < minion3){
                cout << minion3;
} else {
        cout << minion2;
}
}
cout << endl;

//Then use pre and post increment to have two minions grow with mutators.
//Minion2 grows 2 inch
cout << minion2;
cout << "The minion grows 2 inch.\n";
cout << "The minion now is " << (++(++minion2)).getHeight()<< " inch tall.\n" << endl;
cout << minion3;
cout << "Before growing 1 inch the minion was " << minion3++.getHeight() << " inch tall.\n";
cout << "After growing 1 inch the minion is " << minion3.getHeight() << " inch tall.\n" << endl;
//Output the minion count with the static function 

Minion :: printMinionCount();

return 0;
}

//----------------EXAMPLE INPUT AND OUPUT------------------------.
/*---------------------------------------------------------------.
Enter information for three minions(names, height, and bananas): |
Kevin 38 1                                                      
Stuart 25.5 4                                                    
Bob 23.8 0                                                       
The tallest minion:                                              |
The minion Kevin is 38 inches tall and own 1 banana(s).          | 
                                                                 |
The minion Stuart is 25.5 inches tall and own 4 banana(s).       | 
The minion grows 2 inch.                                         |
The minion now is 27.5 inch tall.                                |
                                                                 |
The minion Bob is 23.8 inches tall and own 0 banana(s).          |
Before growing 1 inch the minion was 23.8 inch tall.             |
After growing 1 inch the minion is 24.8 inch tall.               | 
                                                                 |
3 minions created.                                               |
---------------------------------------------------------------*/


