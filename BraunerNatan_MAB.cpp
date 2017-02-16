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

#define NRAND (double) (rand() / RAND_MAX)
#define pi (double) 3.1415926
#define n 5 //number of arms
using namespace std;

	class MAB {
		//normal distribution equation z=sqrt(-2*ln(u1))*sin(2*pi()*u2)
		//sigma multipliesthe std dev by that amount
		//mu shifts the std dev mean.
	public:
		double mu;
		double sigma;
		double alpha;
		void start(); //astarts a new MAB giving it all new values bro
		vector<double> reward;
		vector<double> V;
		void pulltheleverkronk(); //this makes me slightly happier
	}; //TIP: put a fucking colon after a class...(+1hr later)

	//Britny helped me a lot on this section.
	void MAB::start() {
		mu = (NRAND - .5) * 200;
		sigma = NRAND * 5;
		V.push_back(0); //Britny Mors said that initializing this value, V, to 0 means it wont do wierd things 
					//when I run the code multiple times.
		alpha = .1;
	}

	//this is supposed to pull a lever
	void MAB::pulltheleverkronk() {

		double u1 = NRAND;
		double u2 = NRAND;
		int V_size = V.size();
		int r_size = reward.size();
		double z = sqrt(-2 * log(u1))*sin(2 * pi*u2);
		reward.push_back((z * sigma) + mu);
	if (V.size==0)

		for (int i = 0; i < r_size; i++) {
			cout << V[i] << endl;
		}

	}


//this will maybe eventually learn something... like me
//class learner() {

//}


//be able to start a reward and pulltheleverkronk
int main()
{
	//for (int j = 0; j < n; j++) {
	

	//}


	return 0;
}