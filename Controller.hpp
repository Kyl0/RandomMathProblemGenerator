//
//  Controller.hpp
//  MathProblemGenerator
//
//  Created by Kyle Jordan on 3/28/18.
//  Copyright © 2018 Kyle Jordan. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include "tools.hpp"
#include "NumberGenerator.hpp"
#include "Problem.hpp"

class Controller{
private:
    NumberGenerator* ng[2];
    Problem* p;
    int digNum = 0;
    
public:
    Controller( int n ) : digNum(n){
        srand( ( unsigned int )time(NULL) );
        for( int x = 0; x < 2; ++x ){
            ng[x] = new NumberGenerator( rand() % digNum + 1 );
        }
    };
    Controller(){
        srand( ( unsigned int )time(NULL) );
        cout << "How many digits in the number?" << endl;
        cin >> digNum;
        for( int x = 0; x < 2; ++x ){
            ng[x] = new NumberGenerator( rand() % digNum + 1 );
        }
    };
    void constructProblem();
    void oneQuestion( ostream& out );
    void run( ostream& out );
    bool oneAnswer( istream& in );
};

#endif /* Controller_hpp */
