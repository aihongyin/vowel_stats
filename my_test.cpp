/*
 * my_test.cpp
 *
 *  Created on: Sep 24, 2021
 *      Author: aihongyin
 */

#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <ctime>
#include <thread>
#include "vowel_stats.h"
using namespace std;


//test diver and call each of the three methods
int main() {

	VowelStats myEx;

        //Scenario #1:  declare and define an array variable
	std::string myArr[] = {"Today", "will", "be", "a", "great", "day", "and", "many", "more", "to", "come!"};
	//the length of the array
	int arrsizeF = sizeof(myArr)/sizeof(myArr[0]);

	//call method
	myEx.get_array_stats(myArr,arrsizeF);

       //Scenerio #1: declare and define a vector variable
       std::vector<std::string> myVect = {"Today", "will", "be", "a", "great", "day", "and", "many", "more", "to", "come!"};
       //call method
       myEx.get_vector_stats(myVect);
       //call method
        myEx.display_stats();


        //Scenario #2:  declare and define another array variable
        std::string myArrSec[] = {"I", "love", "weekends!"};
	//the length of the array
        int arrsizeSec = sizeof(myArrSec)/sizeof(myArrSec[0]);
	//call method
        myEx.get_array_stats(myArrSec,arrsizeSec);

       //declare and define another vector variable
       std::vector<std::string> myVectSec = {"I", "love", "weekends!"};
       //call method
       myEx.get_vector_stats(myVectSec);
       //call method
       myEx.display_stats();



	return 0;

}



