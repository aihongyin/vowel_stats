/*
 * vowel_stats.h
 *
 *  Created on: Sep 24, 2021
 *      Author: aihongyin
 */

#ifndef VOWEL_STATS_H_
#define VOWEL_STATS_H_
#include <string>
#include <vector>
using namespace std;

class VowelStats{

public:

void get_vector_stats(std::vector<std::string> vect);
void get_array_stats(std::string arr[], int arr_length);
void display_stats();

};


#endif /* VOWEL_STATS_H_ */
