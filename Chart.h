#ifndef CHART
#define CHART
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;


class Chart
{
public:

	// Adds an item to the chart.
	// @param item to add
	void add(int item);
	virtual void draw() const;
		 
	class Iterator {};
	Iterator begin() const;
	Iterator end() const;


	protected:

	vector <int > data;

	};



	//Adds an item to the chart.
	//@param item to add
	void add(int item);


	virtual void draw() const;


protected:
	vector <int> data;
};


void Chart::draw() const
{
	cout << " cannot draw base chart ";
}



#endif // !CHART
