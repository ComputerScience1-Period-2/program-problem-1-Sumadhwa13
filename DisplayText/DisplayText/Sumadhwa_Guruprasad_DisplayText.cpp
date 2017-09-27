/* 
Sumadhwa Guruprasad - 9/21/2017 - Period 2

Assignment Name : Display Text

Introduction into C++ IDE visual Studios 2015
Create new project and display text to console
*/

#include <iostream> //gives access to cin, cout, endl, CC, >>, boolalpha, noboolalpha
#include <conio.h> //enables access to _khbit() for pause()
#include <string> //gives access to string


using namespace std;
using std::string;

string period;


void pause() {
	cout << "We're done here";
	while (!_kbhit());
	cout << '/n';
}

void main() {
	period = "Period 2";
	cout << "Sumadhwa Guruprasad, " << period << ", Hello World!" << endl;
	pause();

	return;
}