#include "Header14.h"
#include <string>
using namespace std;
const string gui::menu_title(const string title)
{
	stringstream ss;
	ss << "= " << title << " ="
		<< "\n"
		<< "\n";
	return ss.str();
}
const string gui::menu_divider(const unsigned amount, const char symbol)
{
	stringstream ss;
	ss << string(amount, symbol)
		<< "\n"
		<< "\n";
	return ss.str();
}
const string gui::menu_item(const unsigned index, const string text)
{
	stringstream ss;
	ss << "- " << "(" << index << ") " << text
		<< "\n";
	return ss.str();
}