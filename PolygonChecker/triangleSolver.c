#include <stdio.h>
#include <math.h>
#include<string.h> //for strcpy

#define PI 3.14159265358979323846



#include "triangleSolver.h"


//Function to calculate angles of the triangle
void calculateAngles(int a, int b, int c, int* A, int* B, int* C)
{
	double angleA = acos((double)(b * b + c * c - a * a) / (2.0 * b * c)) * (180.0 / PI);
	double angleB = acos((double)(a * a + c * c - b * b) / (2.0 * a * c)) * (180.0 / PI);
	double angleC = 180.0 - (angleA + angleB);

	//Round angles to nearest integer
	*A = (int)(angleA + 0.5);
	*B = (int)(angleB + 0.5);
	*C = (int)(angleC + 0.5);

}

//Classify by angles
const char* classifyByAngles(int A, int B, int C) {
	if (A == 90 || B == 90 || C == 90)
		return "Right-angled triangle";
	else if (A < 90 && B < 90 && C < 90)
		return "Acute triangle";
	else
		return "Obtuse triangle";
}




	

	return result;
