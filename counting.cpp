//
//  counting.cpp
//  
//
//  Created by Łukasz Gołojuch on 21/03/2020.
//

#include "counting.hpp"

void count_moves(int *moves_number)
{
    //inkrementacja ilości ruchow
    *moves_number+=1;
}

void count_points(int *allpoints, int actual_points)
{
    //zsumowanie ilości punktow (aktualny stan + aktualny ruch)
    *allpoints+=actual_points;
}

int max_move(int allpoints)
{
    int max_points; //zmienna zawierająca maksymalny mozliwy do wykonania ruch
    
    max_points=100-allpoints;
    
    //jeśli ilość punktow jest mniejsza od 90 - maksymalny ruch jest rowny 10
    if(max_points>10)
    {
        max_points=10;
    }
    
    return max_points;
}
