#include "StatsCalc.h"
#include <cmath> //Added for standard devation 

float meanD = 4.0f;

float StatsCalc::mean(int x1, int x2, int x3, int x4) 
{
	float sum = x1 + x2 + x3 + x4;
	return sum / meanD;
	
}


float StatsCalc::StdDev(int x1, int x2, int x3, int x4)
{
	//chatGPT version 
	float meanValue = mean(x1, x2, x3, x4);
	float variance = (1.0f / meanD) * (

		pow(x1 - meanValue, 2) +
		pow(x2 - meanValue, 2) +
		pow(x3 - meanValue, 2) +
		pow(x4 - meanValue, 2)
		);

	return sqrt(variance); 


	
	
	
	//My version  
	/* return((sqrt((1 / meanD) * (pow(x1 - ((x1 + x2 + x3 + x4) / meanD), 2) + pow((x2 - ((x1 + x2 + x3 + x4) / meanD)), 2) + pow((x3 - ((x1 + x2 + x3 + x4) / meanD)), 2)
		+ pow((x4 - ((x1 + x2 + x3 + x4) / meanD)), 2))))); //Standard deviation claculation. */

}