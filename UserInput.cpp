/*
Chris Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 6
*/

#include "UserInput.h"


using namespace std;

UserInput::UserInput()
{
  fileName = "";
  userInput = "";
  numLines = 0;
}

UserInput::UserInput(string fileName)
{
  UserInput();
  this->fileName = fileName;
  setString();
}

UserInput::~UserInput()
{
  myFile.close();
}
//saves file name
void UserInput::addFile(string fileName)
{
  this->fileName = fileName;
  setString();
}


//opens file and sets userInput to inside file.
void UserInput::setString()
{
  myFile.open(fileName.c_str());
  string line;

  cout << "Reading file: " << fileName << '\n';

  if (myFile.is_open())
  {
    while (getline(myFile,line))
    {
      ++numLines;
      userInput += line + '\n';
    }
  }
  else cout << "Unable to open file\n";
}

string UserInput::getString()
{
  return userInput;
}

int UserInput::getNumLines()
{
  return numLines;
}
