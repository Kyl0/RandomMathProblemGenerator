//
//  Problem.cpp
//  MathProblemGenerator
//
//  Created by Kyle Jordan on 3/22/18.
//  Copyright © 2018 Kyle Jordan. All rights reserved.
//

#include "Problem.hpp"

extern const string symbols[6];

Problem::
Problem( double n1, double n2 ){
    num1 = n1;
    num2 = n2;
    srand( ( unsigned int ) time( NULL ) );
}
//------------------------------------------------------------------------------
void Problem::
calcSln(){
    switch(sym){
        case ADD:
            solution = num1 + num2;
            break;
        case SUB:
            solution = num1 - num2;
            break;
        case MULT:
            solution = num1 * num2;
            break;
        case DIV:
            solution = num1 / num2;
            break;
        case MOD:
            solution = int(num1) % int(num2);
            break;
        default:
            fatal("this is not a symbol\n");
    }
}

ostream& Problem::
print(ostream& out) const{
    out << "Problem: " << num1 << " " << symbols[sym] << " " << num2;
    
    return out;
}
