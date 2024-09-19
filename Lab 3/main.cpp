/*
Brooks D Cowell
Computer Science Fall 2024
Due: October 1 2024
Lab 3, Lab 3 User and File I/O
This lab is a mean and population standard deviation calculator of four integers
*/

#include <iostream>         //Input output standard template library
#include <string>           //String template libary 
#include "StatsCalc.h"      //Header File 
#include "fstream"	       // Added for file I/O
#include <iomanip>

int main()     //Main function that calls other functions to be evaluated 
{
	

	std::ifstream inFile;				        // Declare an input file stream (simular to cin)
	inFile.open("inMeanStd.dat");			    // Open file for reading called input.dat
	int x1, x2, x3, x4;                         // Naming of variables 
	inFile >> x1 >> x2 >> x3 >> x4;	            // Read from the file
	inFile.close();						        // Close the file

	StatsCalc statsCalc;
	float mean = statsCalc.mean(x1, x2, x3, x4);       //Definition of "mean" 
	float StdDev = statsCalc.StdDev(x1, x2, x3, x4);   //Definition of "StdDev" 

	//Screen output of selected integers:
	std::cout << "The four integers you chose were:" << std::endl;
	std::cout << std::setw(10)<< "x1 = " << x1 << std::endl;
	std::cout << std::setw(10)<< "x2 = " << x2 << std::endl;
	std::cout << std::setw(10)<< "x3 = " << x3 << std::endl;
	std::cout << std::setw(10)<< "x4 = " << x4 << std::endl;
	

	//Screen output of claculations:
	std::cout << " " << std::endl; //Space between integer values and the mean and standard deviation values
	std::cout << "The mean of the numbers is: " << mean << std::endl;
	std::cout << "The population standard deviation of the numbers is: " << StdDev << std::endl;

	// file I/O
	std::ofstream outFile; // Declare an output file stream (simular to cout)
	outFile.open("outMeanStd.dat"); // Open file 
	                                                           
	//File output of selected integers
	outFile << "The four integers you chose were: " << std::endl;
	outFile << std::setw(10)<< "x1 = " << x1 << std::endl;
	outFile << std::setw(10)<< "x2 = " << x2 << std::endl;
	outFile << std::setw(10)<< "x3 = " << x3 << std::endl;
	outFile << std::setw(10)<< "x4 = " << x4 << std::endl;
	

	//File output of calculations
	outFile << " " << std::endl; 
	outFile << "The mean of the numbers is: " << mean << std::endl;//Write to the file
	outFile << "The population standard deviation of the numbers is: " << StdDev << std::endl;	 // Write to the file
	                       
	outFile.close();					                                                   // Close the file

	return 0;
}

