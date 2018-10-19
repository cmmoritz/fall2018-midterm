/**

Description: This program will use a function to
	prompt user for a string and will return 
	the string. It will use a function to 
	find the number of a given character in
	the string.
Filename: main.cpp
Author: Christina Moritz
Date: 10-18-18

*/
#include<iostream>
#include<string>

using namespace std;

string get_string(string question);
int char_count(string s, char c);

int main()
{
   string s = get_string("Please enter a string: ");

   char c;
   cout << "Please enter a character: " << endl;
   cin >> c;

   cout << "The number of the given character is: " << char_count(s, c) << endl;

   return 0;
}

string get_string(string question)
{
	string s;
	cout << question;
	cin >> s;
	return s; 
}

int char_count(string s, char c)
{
	int count = 0;

	for(int i = 0; i < s.length(); i++)
	{
		if(s.at(i) == c)
			count++;
	}
	return count;	
}
