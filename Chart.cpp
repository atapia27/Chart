#include <iostream>
#include <vector>
#include <iterator>
#include "Chart.h"

using namespace std;

//i assume this is wrong becasue she wants us to use our own iterator class but oh well
void Chart::add(int item)
{

	/////////////////////////////////////////////////////////
	//Im not sure which one she would want us to use
	/////////////////////////////////////////////////////////

	//vector<int>::iterator itr = data.begin();
	//
	////this will always add it to the beginning of the vector, since itr points to the start
	////i think
	//data.insert(itr, item);

	////I could also just do a pushback, but im not sure which she prefers

	data.push_back(item);
}







///////////////////////////////////////////////////////////////
//this one lets me add const, but not virtual at the beginning
//
//also this might be the one that im supposed to print for barchart
//but im not really sure
///////////////////////////////////////////////////////////////
void Chart::draw() const
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













////////////////////////////////////////////
//this doesnt let me add a const at the end
///////////////////////////////////////////
Chart::Iterator begin() {


}