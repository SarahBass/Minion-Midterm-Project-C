# Minion-Midterm-Project-C
------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------
You will be asked to implement a class Minion. We will be creating three minions in our main() function using information taken in from the terminal with the minion constructor. Then we will find the tallest minion using if statements and > and < operators. Then two of the minions are growing taller with pre and post increment. The second minion we created will be growing two inches with pre-increment and cascaded function call (++(++minion)). The third minion we created will be growing one inch with post-increment (minion++). Finally we will print out how many minions we have created. Detail input and output format please see example input and output.

Detail
For the class Minion, you would declare in a header file with safe check to prevent duplicate declaration, and define your class within a cpp file.

You will have three private attributes for your class Minion, including name, height, and bananasOwned. You will also have a private class static variable int minionCount. Your constructor should initialize all three private variables and also increase the minionCount every time it's called. The minionCount is used to keep track of how many minions we have created with the class Minion.

We need one getter function, which returns a constant, to give us access to the float height in main().

We also need a static function to print out the minionCount, as following:
------------------------------------------------------------------------------------------------------------------------------------
    void Minion::printMinionCount() {
    cout << minionCount << " minions created." << endl;}
------------------------------------------------------------------------------------------------------------------------------------
We will overload the following operators for the class Minion: greater than operator, smaller than operator, pre-increment, post-increment, and insertion operator for output.

The greater than operator(>) and the smaller than operator(<) should both return a boolean, be constant, and take constant reference as parameters. These two functions should compare the height of two minions. 

The pre and post increment operators should increase the height by one inch at a time. Make sure to return reference for pre-increment and return the un-incremented version of the class for post increment.

The insertion operator should output the following:
------------------------------------------------------------------------------------------------------------------------------------

    The minion <name> is <height> inches tall and own <bananasOwned> banana(s).

------------------------------------------------------------------------------------------------------------------------------------  
Read the name, height, and bananasOwned from the class attributes. Ends the line with a newline. Please double check that the output format and spaces between each character match the example above.

You would need to use at least one member function overloading and one non-member function overloading in this project. Your non-member function(s) should be declared as friend function(s) inside the Minion class.
------------------------------------------------------------------------------------------------------------------------------------
Main
------------------------------------------------------------------------------------------------------------------------------------
First print out an input instruction "Enter information for three minions(names, height, and bananas): ". Then be ready to take in 9 total inputs which you will be use to create your three minions.

Then output the "The tallest minion:" before triggering the insertion operator

    cout << "The tallest minion:" << endl;
    
 //Check who is the tallest with > and < operators
    
    cout << tallestMinion;
    
    cout << endl;
    
 Then use pre and post increment to have minions grow.

 //Minion2 grows 2 inch
    
    cout << minion2;
    
    cout << "The minion grows 2 inch.\n";
    
    cout << "The minion now is " << (++(++minion2)).getHeight() << " inch tall.\n" << endl;

 //Minion3 grow 1 inch
 
    cout << minion3;
    
    cout << "Before growing 1 inch the minion was " << minion3++.getHeight() << " inch tall.\n";
    
    cout << "After growing 1 inch the minion is " << minion3.getHeight() << " inch tall.\n" << endl;
    
Finally, output the minion count with the static function printMinionCount().

------------------------------------------------------------------------------------------------------------------------------------
Example Input and Output
------------------------------------------------------------------------------------------------------------------------------------
    Enter information for three minions(names, height, and bananas): 
    
    Kevin 38 1
   
    Stuart 25.5 4
    
    Bob 23.8 0
    
    The tallest minion:
    
    The minion Kevin is 38 inches tall and own 1 banana(s).

    
    The minion Stuart is 25.5 inches tall and own 4 banana(s).
    
    The minion grows 2 inch.
    
    The minion now is 27.5 inch tall.

    The minion Bob is 23.8 inches tall and own 0 banana(s).
    
    Before growing 1 inch the minion was 23.8 inch tall.
   
    After growing 1 inch the minion is 24.8 inch tall.

    3 minions created.
    
------------------------------------------------------------------------------------------------------------------------------------    
Submission
You will submit a header file Minion.h, a source file Minion.cpp, and a main file main.cpp for this project.

Only use what's covered in class to finish this assignment. Otherwise 0 point will be given to the corresponding rubric.
