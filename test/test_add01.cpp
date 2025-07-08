#include <iostream>
#include "util.h"

using namespace std; 


int main()
{
	int count = 0; 
	cout << "Running tests add01.... " << endl;

	/*
	if (true)
	{
		return -1;
	}
	*/

	if (add(2, 3) != 5)
	{
		cerr << "[FAIL] add(2,3) != 5 \n";
		count++;
		//	return 1; 
	}
	else
	cout << "[Passed] add(2,3) != 5 \n";

	if (add(-2, 3) != 1)
	{
		cerr << "[FAIL] add(-2,3) != 1 \n";
		count++;
		//return 1; 
	}
	else
		cout << "[Passed] add(-2,3) != 1 \n";

	if (count == 2)
	{
		return 1;
	}

}