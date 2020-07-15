//
//  level3_computer.cpp
//  
//
//  Created by Łukasz Gołojuch on 22/03/2020.
//

#include "level3_computer.hpp"
#include "counting.hpp"

#include <iostream>

using namespace std;

int next_move(int *allpoints)
{
    int actual_points;
    int unity; //część jedności 
    int decimal; //część dziesiętna
    int aftermove;
    
    if (*allpoints==0)
    {
        aftermove=1;
    }
    else if (*allpoints<11)
    {
        aftermove=11;
    }
    else
    {
        decimal = *allpoints / 10;
        unity=(*allpoints)%decimal;
        
        if(decimal<=unity)
        {
            unity=decimal+1;
            aftermove = (decimal*10) + unity;
        }
        else
        {
            decimal++;
            unity=decimal+1;
            aftermove = (decimal*10) + unity;
        }
    }
            actual_points=aftermove-*allpoints;
    
    return actual_points;
}

void level3_normal_move(int *allpoints,int *moves_number)
{
    int actual_points; //ilość punktow w ruchu
    
    actual_points=next_move(&(*allpoints));
    
    count_points(&(*allpoints), actual_points);
    count_moves(&(*moves_number));
    
    cout<<"Computer move: "<<actual_points<<endl;
}

void level3_finish_move(int *allpoints,int *moves_number)
{
    int actual_points; //ilość punktow w ruchu
    
    actual_points = max_move(*allpoints);
    
    count_points(&(*allpoints), actual_points);
    count_moves(&(*moves_number));
    cout<<"Computer move: "<<actual_points<<endl;
}
