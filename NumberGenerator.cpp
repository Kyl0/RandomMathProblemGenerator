//
//  NumberGenerator.cpp
//  MathProblemGenerator
//
//  Created by Kyle Jordan on 3/6/18.
//  Copyright © 2018 Kyle Jordan. All rights reserved.
//

#include "NumberGenerator.hpp"


NumberGenerator::
NumberGenerator( int n ){
    nDigits = n;
    digits = new int[nDigits];
    srand( ( unsigned int ) time( NULL ) );
}
//------------------------------------------------------------------------------
ostream& NumberGenerator::
print( ostream& out ) const{
    out << "Returning integers from the digits array: " << endl;
    for( int x = nDigits - 1; x >= 0; --x ) out << digits[x] << " ";
    out << "\nNumber: " << number;
    
    return out;
}
//------------------------------------------------------------------------------
//gives a random int digit between 0 and 9 for each digit
void NumberGenerator::
rng(){
    for( int x = 0; x < nDigits; ++x ) digits[x] = rand() % 10;
}
//------------------------------------------------------------------------------
void NumberGenerator::
combineDigits(){
    double x = 0;
    const double base = 10;
    for( int a = 0; a < nDigits; ++a ){
        x = digits[a] * pow(base, a);
        number += x;
    }
}
