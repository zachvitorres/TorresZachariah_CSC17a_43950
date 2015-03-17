/**************************************************************************
 * Zachariah Torres 7.6
 * ------------------------------------------------------------------------
 *
 *
 *************************************************************************/

#include "myheader.h"

void HW7_6(){

	ifstream inputFile;
	vector<int> array;
	unsigned short count = 0;

	inputFile.open("testFile.txt");

	while(inputFile >> array[count]){

		array.push_back(inputFile >> array[count]);
		count++;
	}
	inputFile.close();

	for(short count2 = 0; count2 < count; count2++)
		cout << array[count] << "\n";

}
