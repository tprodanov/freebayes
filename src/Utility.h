// utility functions
//
#ifndef _UTILITY_H
#define _UTILITY_H

#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <string>

using namespace std;

long double factorial(int);
short qualityChar2ShortInt(char c);
//long double phred2float(int qual);
long double phred2ln(int qual);
int ln2phred(long double prob);
long double phred2float(int qual);
int float2phred(long double prob);
// here 'joint' means 'probability that we have a vector entirely composed of true bases'
short jointQuality(const std::vector<short>& quals);
short jointQuality(const std::string& qualstr);
// 
short averageQuality(const std::string& qualstr);
//unsigned int factorial(int n);
bool stringInVector(string item, vector<string> items);

#endif
