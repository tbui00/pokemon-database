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
//    FILE:        Lugia.cpp
//
//    DESCRIPTION:
//     This file contains the child class Lugia, Lugia.cpp 
//     functions for Homework 9. This will execute all the
//     necessary methods that are called.
//
//
****************************************************************/

#include <iostream>
#include "Pokemon.h"
#include "Lugia.h"
using namespace std;

/*****************************************************************
//
//  Function name: Lugia
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

Lugia::Lugia()
{
    cout << "Lugia Constructor\n";
    this->type = "Psychic and Flying";
    this->height = 521;
}

/*****************************************************************
//
//  Function name: ~Lugia
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

Lugia::~Lugia()
{
    cout << "Lugia Destructor\n";
}

/*****************************************************************
//
//  Function name: printData
//
//  DESCRIPTION:   A printing function
//                 This function will be print the Lugia
//                 pokemon data when called.
//
//  Parameters:    N/A
//
//  Return values: N/A
//
****************************************************************/

void Lugia::printData()
{
    cout << "Name of child class: Lugia\n";
    cout << "Type: " << this->type << "\n";
    cout << "Height: " << this->height << " cm\n";
}
