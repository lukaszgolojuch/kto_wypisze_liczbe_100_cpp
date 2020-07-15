//
//  number_generator.cpp
//  
//
//  Created by Łukasz Gołojuch on 21/03/2020.
//

#include <iostream>
#include <time.h>
#include "number_generator.hpp"
#include "saving_progress.hpp"

using namespace std;

int generate(int max_number)
{
    srand(time(NULL));
    
    int random;
    random = rand()%max_number+1;
    return random;
}

void level_choose(int parametr, int *level, int *allpoints, int *moves_number)
{
    switch (parametr)
    {
        case 1:
            //parametr '1' - ustawienie poziomu: 1
            *level = 1;
            break;
            
        case 2:
            //parametr '2' - ustawienie poziomu: 2
            *level = 2;
            break;
            
        case 3:
            //parametr '3' - ustawienie poziomu: 3
            *level = 3;
            break;
            
        case 4:
            //parametr '4' - wybor poziomu za pomocą generatora liczb losowych
            *level = generate(3);
            break;
            
        case 5:
            //parametr '5' - załadowanie gier z ostatniego zapisu 
            load( &(*allpoints), &(*moves_number), &(*level));
            break;
            
        default:
            //błąd - parametr z poza zakresu 1 - 5
            cout<<"The program could not be started with a difficulty level parameter other than 1,2,3,4 or 5"<<endl;
            exit(0);
    }
}
