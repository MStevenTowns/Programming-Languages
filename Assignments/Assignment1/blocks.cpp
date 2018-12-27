/*
Michael S. Towns
CSC330 Assignment 1
C++ Investigations
12/14/16

Task 3: Blocks
*/

//allowing cout
#include <iostream>
using namespace std;

/*
ANSWER TO THE QUESTION RIGHT HERE, CAPITALIZED FOR VISIBILITY
you can specify separate blocks in c++
variable scoping is handled such that a variable exist in levels "below"
(in this case "to the right of") it's origin, so "c" in the example
only exist on level 2, once level 2 is left, "c" no longer exists
even if i establish a new level 2, separate from the first, "c" will 
still not exist
*/
int main()
{
	cout<<"level 1\n";
	int a=1;
	int b=0;
	cout<<"a:"<<a<<" b:"<<b<<" c: \n";
	{
		cout<<"\n\nlevel 2\n";
		int a=94;
		int b=102;	
		int c=5;
		cout<<"a:"<<a<<" b:"<<b<<" c: "<<c<<"\n";
		cout<<"\n\nlevel 3\n";
		for(int a=0;a<=5;a++)
		{
			int b=a+75;
			cout<<"a:"<<a<<" b:"<<b<<" c: "<<c<<"\n";
		}
		cout<<"\n\nlevel 2\n";
		cout<<"a:"<<a<<" b:"<<b<<" c: "<<c<<"\n";		
	}
	cout<<"\n\nlevel 1\n";
	cout<<"a:"<<a<<" b:"<<b<<" c: \n";
	{
		cout<<"\n\nlevel 2\n";
		cout<<"a:"<<a<<" b:"<<b<<" c: \n";
	}
}
