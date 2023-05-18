#include <iostream>
using namespace std;

#include "Fraction.hpp"

int main () {

	Fraction fract1, fract2(3,4);
	
	cout << "Fraction 1 " << fract1.getNum()
	     << "/" << fract1.getDen() << " = " << fract1.calcRealValue() << endl;
    
    fract1.setNum(2);
    fract1.setDen(5);
	
    cout << "Fraction 1 " << fract1.getNum()
         << "/" << fract1.getDen() << " = " << fract1.calcRealValue() << endl;
    
	cout << "Fraction 2 " << fract2.getNum()
	<< "/" << fract2.getDen() << " = " << fract2.calcRealValue() << endl;
    

	
    return 0;
}
