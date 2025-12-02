#include <iostream>
#include "somme.h"
using namespace std;

int main() {
int tabInt[] = {1, 2, 3, 4, 5};
int nInt = sizeof(tabInt) / sizeof(tabInt[0]);
cout << "Somme des entiers = " << somme(tabInt, nInt) << endl;

double tabDouble[] = {1.9,53.5,49.3};
int nDouble = sizeof(tabDouble) / sizeof(tabDouble[0]);
cout << "Somme des réels = " << somme(tabDouble, nDouble) << endl;

char tabChar[] = {'A', 'B', 'C'};
int nChar = sizeof(tabChar) / sizeof(tabChar[0]);
cout << "Somme des caractères = " << somme(tabChar, nChar) << endl;

return 0;
}
