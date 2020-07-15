//
//  level1_computer.cpp
//  
//
//  Created by Łukasz Gołojuch on 22/03/2020.
//

#include "level1_computer.hpp"
#include "counting.hpp"
#include "number_generator.hpp"

#include <iostream>


using namespace std;


void level1_move(int *allpoints,int *moves_number)
{
    int max_points; //maksymalna ilość punktow w ruchu
    int actual_points; //ilość punktow w ruchu
    
    max_points=max_move(*allpoints);
    actual_points=generate(max_points);

    cout<<"Computer move: ";

    count_points(&(*allpoints), actual_points);
    count_moves(&(*moves_number));

    cout<<actual_points<<endl;
}


