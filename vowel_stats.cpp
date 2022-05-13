/*
 * vowel_stats.cpp
 *
 *  Created on: Sep 24, 2021
 *      Author: aihongyin
 */
#include "vowel_stats.h"
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <ctime>
#include <thread>
using namespace std;

//declare the int variables to count the number of vowels for both array and vector
int numAarr, numEarr, numIarr, numOarr, numUarr, numAvec, numEvec, numIvec, numOvec, numUvec;

double time_ns_array;
double time_ns_vector;



void VowelStats::get_vector_stats(std::vector<std::string> vect){

        //start time
	std::chrono::time_point<std::chrono::system_clock>start_time = std::chrono::system_clock::now();

	    string str;

	    //use a for loop to transfer the strings in the vector to a single string "str" using the method append()
	    for(int idx=0; idx<vect.size(); idx++){

			str.append(vect[idx]);
		}


	//use a for loop to go through the single string "str" and count the number of vowels
        for(int idx=0; idx<str.length(); idx++){

        if(str[idx] == 'a' || str[idx]=='A')
        {
                numAvec++;
        }
        else if (str[idx] == 'e' || str[idx]=='E')
        {
                numEvec++;
        }
        else if(str[idx] == 'i' || str[idx]=='I'){
                numIvec++;
        }

        else if(str[idx] == 'o' || str[idx]=='O'){
                numOvec++;
        }
        else if(str[idx] == 'u' || str[idx]=='U')
        {
                numUvec++;
        }
        }

	//end time
       	std::chrono::time_point<std::chrono::system_clock>end_time = std::chrono::system_clock::now();

	//calculate the time
	time_ns_vector = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();

}




void VowelStats::get_array_stats(std::string arr[], int arr_length){

	//start time
       std::chrono::time_point<std::chrono::system_clock>start_time = std::chrono::system_clock::now();

	string str;

	//check the length of the array before using it
	if(arr_length>0){

        //use a for loop to transfer the strings in the array to a single string "str" using the method append()
	for(int idx=0; idx<arr_length; idx++){

		str.append(arr[idx]);
	}

	//use a for loop to go through the string "str" and count the number of vowels
	for(int idx=0; idx<str.length(); idx++){

	if(str[idx] == 'a' || str[idx]=='A')
	{
		numAarr++;
	}
	else if (str[idx] == 'e' || str[idx]=='E')
	{
		numEarr++;
	}
	else if(str[idx] == 'i' || str[idx]=='I'){
		numIarr++;
	}

	else if(str[idx] == 'o' || str[idx]=='O'){
		numOarr++;
	}
	else if(str[idx] == 'u' || str[idx]=='U')
	{
		numUarr++;
	}
	}

}
//end time
std::chrono::time_point<std::chrono::system_clock>end_time = std::chrono::system_clock::now();

//calculate time
time_ns_array = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();

	}








//show a list of vowels with the count, and followed by the total time it took to process the vowels
void VowelStats::display_stats(){

	cout << "Vowel Statistics for Array: " << endl;
	cout << "a: " << numAarr << endl;
	cout << "e: " << numEarr << endl;
	cout << "i: " << numIarr << endl;
	cout << "o: " << numOarr << endl;
	cout << "u: " << numUarr << endl;
        cout << "Elapsed time for array => nanoseconds: " << time_ns_array << endl << endl;


        cout << "Vowel Statistics for Vector: "<< endl;
        cout << "a: " << numAvec << endl;
        cout << "e: " << numEvec << endl;
        cout << "i: " << numIvec << endl;
        cout << "o: " << numOvec << endl;
        cout << "u: " << numUvec << endl;
	cout << "Elapsed time for vector => nanoseconds: " << time_ns_vector << endl << endl;

//set the int variables to 0 so that they can be used for Scenario #2
numAarr=0;
numEarr=0;
numIarr=0;
numOarr=0;
numUarr=0;
numAvec=0;
numEvec=0;
numIvec=0;
numOvec=0;
numUvec=0;




}




