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
//    FILE:        Lapras.cpp
//
//    DESCRIPTION:
//     This file contains the child class Lapras, Lapras.cpp 
//     functions for Homework 9. This will execute all the
//     necessary methods that are called.
//
//
****************************************************************/

#include <iostream>
#include "Pokemon.h"
#include "Lapras.h"
using namespace std;

/*****************************************************************
//
//  Function name: Lapras
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

Lapras::Lapras()
{
    cout << "Lapras Constructor\n";
    this->type = "Ice and Water";
    this->height = 249;
}

/*****************************************************************
//
//  Function name: ~Lapras
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

Lapras::~Lapras()
{
    cout << "Lapras Destructor\n";
}

/*****************************************************************
//
//  Function name: printData
//
//  DESCRIPTION:   A printing function
//                 This function will be print the Lapras
//                 pokemon data when called.
//
//  Parameters:    N/A
//
//  Return values: N/A
//
****************************************************************/

void Lapras::printData()
{
    cout << "\nName of child class: Lapras\n";
    cout << "Type: " << this->type << "\n";
    cout << "Height: " << this->height << " cm\n";
}
