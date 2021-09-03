/*****************************************************************
//    NAME:        Tracy Bui
//  
//    HOMEWORK:    Homework 9
//
//    CLASS:	   ICS 212
//
//    INSTRUCTOR:  Ravi Narayan
//
//    DATE:        December 10, 2020
//  
//    FILE:        Pokemon.cpp
//
//    DESCRIPTION:
//     This file contains the parent class Pokemon, Pokemon.cpp
//     functions for Homework 9. This will execute all the 
//     necessary methods that are called.
//
//
****************************************************************/

#include <iostream>
#include "Pokemon.h"
using namespace std;

/*****************************************************************
//
//  Function name: Pokemon
//
//  DESCRIPTION:   A constructor function
//                 This function will be called in the beginning
//                 before the actual program starts and execute
//                 certain actions needed.
//
//  Parameters:    N/A
//
//  Return values: N/A
//
****************************************************************/

Pokemon::Pokemon()
{
    cout << "Pokemon Constructor\n";
}

/*****************************************************************
//
//  Function name: ~Pokemon
//
//  DESCRIPTION:   A destructor function
//                 This function will be called after the program
//                 is done and execute certain actions needed.
//
//  Parameters:    N/A
//
//  Return values: N/A
//
****************************************************************/

Pokemon::~Pokemon()
{
    cout << "Pokemon Destructor\n";
}
