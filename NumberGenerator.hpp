//
//  NumberGenerator.hpp
//  MathProblemGenerator
//
//  Created by Kyle Jordan on 3/6/18.
//  Copyright © 2018 Kyle Jordan. All rights reserved.
//

#ifndef NumberGenerator_hpp
#define NumberGenerator_hpp

#include "tools.hpp"
#include <time.h>
#include <math.h>

class NumberGenerator{
private:
    int nDigits;    // should not be greater than 5
    int* digits;
    double number = 0.0;    //number when digits are combined
    
public:
    NumberGenerator( int n = 1 );
    ~NumberGenerator() { delete [] digits; };
    ostream& print( ostream& out ) const;
    void rng();
    void combineDigits();
    double getNumber() { return number; };
};

inline ostream& operator << ( ostream& out, NumberGenerator& ng ) {
    return ng.print( out );
};


#endif /* NumberGenerator_hpp */
