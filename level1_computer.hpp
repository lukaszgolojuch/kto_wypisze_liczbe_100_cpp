//
//  level1_computer.hpp
//  
//
//  Created by Łukasz Gołojuch on 22/03/2020.
//

#ifndef level1_computer_hpp
#define level1_computer_hpp

#include <stdio.h>

/* Funkcja level1_move

    Działanie funkcji:
        Funkcja wykonuje ruch jako komputer, gdy poziom gry ustwiony jest na 1. 

        Schemat działania funkcji:
            - pozyskanie informacji o maksymalnym mozliwym ruchu 
            - "wylosowanie" liczby z zakresu 1 - maksymalny mozliwy ruch
            - uruchomienie funkcji zliczajacych punkty i ruchy graczy

    Parametry:
        int *allpoints - wskaźnik na zmienną przechowującą sumę punktow podczas aktualnej gry
        int *moves_number - wskaźnik na zmienną przechowującą ilość ruchow podczas aktualnej gry

    Return:
        Nic (jest to funkcja void)

*/

void level1_move(int *allpoints,int *moves_number);


#endif /* level1_computer_hpp */
