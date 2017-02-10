// BraunerNatan_MultiArmBandit.cpp : Defines the entry point for the console application.
//
//lots of help from Bryant Clause.
//vector.push_back(), adds the lastnumber to the end of the vector
#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <vector>
#include <random>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

#define NRAND (double)rand() / RAND_MAX)
#define pi 3.1415926

using namespace std;

class MAB {
	//normal distribution equation z=sqrt(-2*ln(u1))*sin(2*pi()*u2)
	//sigma multipliesthe std dev by that amount
	//mu shifts the std dev mean.
	public;
	vector<double> mu;
	vector<double> sigma;
	double reward();
	MAB();
};

MAB::MAB() {
	for (int i = 1; i < 4; i++) {
		sigma.push_back(i);
		mu.push_back((((double)rand() / RAND_MAX) - .5) * 200);
	}
	
}



double MAB::reward() {
	double z = sqrt(-2 * log(NRAND))*sin(2 * pi*NRAND);
	double reward_ = (z*sigma) + mu;
}

int main()
{
	srand(time(NULL));
    return 0;
}

