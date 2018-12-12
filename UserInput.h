/*
Chris Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 6
*/

#ifndef USERINPUT_H
#define USERINPUT_H
#include <iostream>
#include <fstream>

using namespace std;

class UserInput
{
protected:
  string userInput;
  string fileName;
  void setString();
  ifstream myFile;
  int numLines;

public:
  UserInput();
  UserInput(string fileName);
  ~UserInput();

  void addFile(string fileName);
  string getString();
  int getNumLines();

};





#endif
