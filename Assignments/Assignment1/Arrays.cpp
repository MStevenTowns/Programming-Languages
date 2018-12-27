/*
Michael S. Towns
CSC330 Assignment 1
C++ Investigations
12/14/16

Task 1: Arrays
*/

/*ANSWER TO THE QUESTION RIGHT HERE, CAPITALIZED FOR VISIBILITY
it is possible to pass an array by value, but it requires you wrap it
in a struct and then pass the struct 
 */

//allowing cout
#include <iostream>
using namespace std;


/*
using cout on nums(the array) will give the Reference point
using cout on the elements of nums will give the values
so if i can cout nums, and get a different Reference point with the same values i have sucessfully passed by value
also changing values after pass by reference shouldn't change the original
*/
struct listStruct{
		int holdList[5];
};

void test(listStruct newList)
{
	cout<<"\n\n\nPassed by value:\nReference:\n"<<newList.holdList<<"\n\nValues:\n";
	for(int i=0;i<5;i++)
	{
		cout<<newList.holdList[i]<<"\n";
	}
	for(int i=0;i<5;i++)
	{
		newList.holdList[i]=i+10;
	}
	cout<<"\n\n\nAfter changes:\nReference:\n"<<newList.holdList<<"\n\nValues:\n";
	for(int i=0;i<5;i++)
	{
		cout<<newList.holdList[i]<<"\n";
	}
}

int main()
{
	listStruct myList={0,1,2,3,4};
	
	cout<<"Original list:\nReference:\n"<<myList.holdList<<"\n\nValues:\n";
	for(int i=0;i<5;i++)
	{
		cout<<myList.holdList[i]<<"\n";
	}
	test(myList);
	cout<<"\n\nBack in main(original list):\nReference:\n"<<myList.holdList<<"\n\nValues:\n";
	for(int i=0;i<5;i++)
	{
		cout<<myList.holdList[i]<<"\n";
	}
}




