#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
	int input1, input2, input3, input4; // adds the inputs as variables in int main()
	ifstream infile; // opens and reads the inMeanStd.dat file
	infile.open("inMeanStd.dat"); // uses the data in inMeanStd.dat

	ofstream outfile; // creates a file outMeanStd.dat and opens it
	outfile.open("outMeanStd.dat"); // adds the data from inMeanStd

	infile >> input1 >> input2 >> input3 >> input4; // adds te inputs to main file

	float mean = (input1 + input2 + input3 + input4) / 4; // calculates the mean of 4 numbers

	float psd = sqrt((pow(input1 - mean, 2) + pow(input2 - mean, 2) + pow(input3 - mean, 2) + pow(input4 - mean, 2)) / 4); // calculates the population standar deviation of 4 numbers

	cout << "The Mean is: " << mean << "\n" << "The Population Standard Deviation is: " << psd; // outputs the mean and population standard deviation

	outfile << input1 << " " << input2 << " " << input3 << " " << input4 << "\n"; // adds the inputs the the outMeanStd.dat file

	infile.close(); // closes infile
	outfile.close(); // closes outfile

	return 0;
}