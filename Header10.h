#pragma once
#include"Header11.h"
#include <iostream>
#include <string>
using namespace std;
class Puzzle
{
private:
	string question;
	vector<string> answers;
	int correctAnswer;
public:
	Puzzle(std::string fileName);
	virtual ~Puzzle();
	string getAsString();
	inline const int& getCorrectAns()const { return this->correctAnswer; }
};
