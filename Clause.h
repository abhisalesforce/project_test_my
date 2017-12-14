#ifndef _CLAUSE_H
#define _CLAUSE_H

#include <iostream>
#include <vector>


using namespace std;

class Clause {
public:
    Clause(int len, vector<int> &hgs, int base, int neck, vector<int> &xs);
    int len;
    vector<int> hgs;
    int base;
    int neck;
    vector<int> xs;
};

#endif