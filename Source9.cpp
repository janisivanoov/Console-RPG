#include "Header10.h"
#include <string>
using namespace std;
Puzzle::Puzzle(string fileName)
{
	this->correctAnswer = 0;
	ifstream inFile(fileName);
	int nrOfAns = 0;
	string answer = "";
	int correctAns = 0;

	if (inFile.is_open())
	{
		getline(inFile, this->question);
		inFile >> nrOfAns;
		inFile.ignore();
		for (size_t i = 0; i < nrOfAns; i++)
		{
			getline(inFile, answer);
			this->answers.push_back(answer);
		}
		inFile >> correctAns;
		this->correctAnswer = correctAns;
		inFile.ignore();
	}
	else
		throw("Could not open puzzle!");
	inFile.close();
}
Puzzle::~Puzzle()
{

}
string Puzzle::getAsString()
{
	string answers = "";

	for (size_t i = 0; i < this->answers.size(); i++)
	{
		answers += to_string(i) + ": " + this->answers[i] + "\n";
	}
	*return this->question + "\n" + "\n"
		 answers + "\n"
		 to_string(this->correctAnswer) + "\n";*/
	return this->question + "\n" + "\n"
		 answers + "\n";
}