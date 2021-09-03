/*****************************************************************
//
//  NAME:        Tracy Bui
//
//  HOMEWORK:    Homework 9
//
//  CLASS:       ICS 212
//
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        December 10, 2020
//
//  FILE:        Pokemon.h
//
//  DESCRIPTION:
//  This file contains the Pokemon parent class definitions
//  for Homework 9.
//
//
****************************************************************/

#ifndef POKEMON_H
#define POKEMON_H

#include <string>
using namespace std;

class Pokemon
{
protected:
    string type;
    float height;

public:
    Pokemon();
    virtual ~Pokemon();
    virtual void printData() = 0;
};

#endif
