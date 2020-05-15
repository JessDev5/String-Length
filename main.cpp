// Jessica Dever
// 5/12/20
// String Length
/* 
This program displays a string and counts 
* the characters used in a char array.
*/
#include <iostream>
#include <cstring> // must use cstring for strlen function
using namespace std;

int main() 
{
const int SIZE = 80; // string can hold 80 - 1 characters
char sentence[SIZE]; // holds sentence user inputs
int count = 0; //counter variable

cout << "\nEnter a sentence of no more than " << (SIZE - 1) << " characters.\n\n";
// line of input, includes white space characters
cin.getline(sentence, SIZE); 

int length;
length = strlen(sentence); // length of string

cout << "\nYou entered:\n";
// displays user input 1 character at a time
while (sentence[count] != '\0') 
{
  cout << sentence[count];
  count++;
}

cout << "\n\nYour sentence used up " << length;
cout << " characters.\n";

return 0;
}