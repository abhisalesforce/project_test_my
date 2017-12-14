#include "Clause.h"

using namespace std;

Clause::Clause(int len, vector<int> &hgs, int base, int neck, vector<int> &xs) {
    this->hgs = hgs;
    this->base = base;
    this->len = len;
    this->neck = neck;
    this->xs = xs;
}
/* Unit test
int main(){
Clause c(10,{2,3,4},15,20,{5,6,7});
cout <<c.base;
}
*/