//
//  Controller.cpp
//  MathProblemGenerator
//
//  Created by Kyle Jordan on 3/28/18.
//  Copyright © 2018 Kyle Jordan. All rights reserved.
//

#include "Controller.hpp"

void Controller::
constructProblem(){
    for( int x = 0; x < 2; ++x ){
        ng[x]->rng();
        ng[x]->combineDigits();
    }
    p = new Problem( ng[0]->getNumber(), ng[1]->getNumber() );
}

void Controller::
oneQuestion( ostream& out ){
    out << "Solve: " << endl;
    constructProblem();
    p->print( cout );
}

bool Controller::
oneAnswer( istream& in ){
    double urSln = 0.0;
    
    in >> skipws >> urSln;
    if( urSln == p->getSln() ){
        return true;
    }
    else{
        return false;
    }
}

void Controller::
run( ostream& out ){
    for( int x = 0; x < 5; ++x ){
        oneQuestion( out );
        out << endl;
        bool check = oneAnswer( cin );
        if( check == true ) out << "Correct" << endl;
        else out << "Wrong" << endl;
    }
}

//future work: create a function/code that will stop the program
