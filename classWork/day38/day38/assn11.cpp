#include<string>
#include<list>

#include<iostream>
using namespace std;


class TextLineNavigator
{
	list<string> textLines;
	int cursorPos;
	auto navigateToLine();
public:
	TextLineNavigator();
	void insertLine(string);
	void navigateUp();
	void navigateDown();
	void printLines();
};

TextLineNavigator::TextLineNavigator()
{
	this->cursorPos = 0;
}

auto TextLineNavigator::navigateToLine()
{
	auto pos = textLines.begin();
	pos = next(pos, cursorPos);
	return pos;
}
void TextLineNavigator::insertLine(string line)
{
	auto pos = navigateToLine();
	textLines.insert(pos, line);
	cursorPos++;
}
void TextLineNavigator::navigateUp()
{
	cursorPos--;
}
void TextLineNavigator::navigateDown()
{
	cursorPos++;
}
void TextLineNavigator::printLines()
{
	for (string line : textLines)
		cout << line << endl;
}

int main()
{
	TextLineNavigator note;
	string s = "";
	while (s != "exit")
	{
		getline(cin, s);
		if (s.find("INSERT ") != string::npos)
			note.insertLine(s.substr(7));
		else if (s == "UP")
			note.navigateUp();
		else if (s == "DOWN")
			note.navigateDown();
		else if (s == "PRINT")
			note.printLines();
		else if (s == "exit")
			break;
	}
	return 0;
}