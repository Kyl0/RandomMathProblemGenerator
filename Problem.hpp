//
//  Problem.hpp
//  MathProblemGenerator
//
//  Created by Kyle Jordan on 3/22/18.
//  Copyright © 2018 Kyle Jordan. All rights reserved.
//

#ifndef Problem_hpp
#define Problem_hpp

#include "tools.hpp"
#include "enum.hpp"
#include <time.h>
#include <math.h>

class Problem{
private:
    double num1;
    double num2;
    double solution = 0.0;
    symbolEnum sym;
    
public:
    Problem( double n1 = 0.0, double n2 = 0.0 );
    ~Problem() = default;
    void rngSymbol() { sym = symbolEnum( rand() % 6 ); };
    symbolEnum getSym() { return sym; };
    void calcSln();
    double getSln() { return solution; };
    ostream& print( ostream& out ) const;
};

inline ostream& operator << ( ostream& out, Problem& p ) {
    return p.print( out );
};

#endif /* Problem_hpp */
