/*
Michael S. Towns
CSC330 Assignment 1
C++ Investigations
12/14/16

Task 2: Goto
*/

/* 
A goto statement is part of the core language in C++ requiring no 
external libraries

although it is heavily discouraged the syntax is:


ANSWER TO THE QUESTION RIGHT HERE, CAPITALIZED FOR VISIBILITY
<label>:<statement>
when you want to assign a goto location

and 
goto <label>
when you want to travel to that location


so using a goto instead of a loop looks like:
*/


//allowing cout
#include <iostream>
using namespace std;

int main()
{
	int i=0;
	LOOP:if(i<5)
	{
		i++;
		cout<<"goto number: "<<i<<"\n";
		goto LOOP;
	}
}

