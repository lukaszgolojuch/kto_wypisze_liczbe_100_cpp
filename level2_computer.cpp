//
//  level2_computer.cpp
//  
//
//  Created by Łukasz Gołojuch on 22/03/2020.
//

#include "level2_computer.hpp"
#include "counting.hpp"
#include "number_generator.hpp"

#include <iostream>

using namespace std;

void level2_normal_move(int *allpoints,int *moves_number)
{
    int max_points; //maksymalna ilość punktow w ruchu
    int actual_points; //ilość punktow w ruchu
    
    max_points=max_move(*allpoints);
    actual_points=generate(max_points);
    
    count_points(&(*allpoints), actual_points);
    count_moves(&(*moves_number));

    cout<<"Computer move: "<<actual_points<<endl;
}

void level2_finish_move(int *allpoints,int *moves_number)
{
    int actual_points; //ilość punktow w ruchu
    
    actual_points = max_move(*allpoints);
    
    count_points(&(*allpoints), actual_points);
    count_moves(&(*moves_number));

    cout<<"Computer move: "<<actual_points<<endl;
}
