#include <iostream>
#include <vector>
#include <iterator>
#include "BarChart.h"

using namespace std;

void BarChart::draw() const
{
	//the plan here is to make an iterator loop, that looks at the item
//int the loop, accesses that value and then uses it to print the
//number of stars 
	vector<int>::iterator itr;

	for (itr == data.begin(); itr != data.end(); itr++)
	{
		//*itr refers to the 'item' in data that the iterator is currently pointing at
		cout << *itr << " ";

		int loopTimes = *itr;

		//this for loop will just keep printing the starts until the appropriate amount of stars are printed
		for (int i = loopTimes; i >= 0; i--)
		{
			cout << "*";
		}

		//print a new line after you print all of the stars
		cout << endl;
	}
}