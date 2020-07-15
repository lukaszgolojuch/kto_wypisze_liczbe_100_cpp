//
//  level2_computer.hpp
//  
//
//  Created by Łukasz Gołojuch on 22/03/2020.
//

#ifndef level2_computer_hpp
#define level2_computer_hpp

#include <stdio.h>

/* Funkcja level2_normal_move

    Działanie funkcji:
        Funkcja wykonuje ruch jako komputer, gdy poziom gry ustwiony jest na 2, a liczba punktow jest mniejsza niz 90.
        Schemat działania funkcji:
            - pozyskanie informacji o maksymalnym mozliwym ruchu (funkcja zwawsze zwroci wartość 10, lecz uzycie funkcji ułatwia zrozumienie działania programu osobom trzecim, a złozoność obliczeniowa jest na tyle mała, ze nie wpływa na predkość działania)
            - "wylosowanie" liczby z zakresu 1 - maksymalny mozliwy ruch (10)
            - uruchomienie funkcji zliczajacych punkty i ruchy graczy

    Parametry:
        int *allpoints - wskaźnik na zmienną przechowującą sumę punktow podczas aktualnej gry
        int *moves_number - wskaźnik na zmienną przechowującą ilość ruchow podczas aktualnej gry

    Return:
        Nic (jest to funkcja void)

*/

void level2_normal_move(int *allpoints,int *moves_number);


/* Funkcja level2_finish_move

    Działanie funkcji:
        Funkcja wykonuje ruch jako komputer, gdy poziom gry ustwiony jest na 2, a liczba punktow jest wieksza niz 90.
        Schemat działania funkcji:
            - pozyskanie informacji o maksymalnym mozliwym ruchu i przypisanie go do zmiennej actual_points
            - uruchomienie funkcji zliczajacych punkty i ruchy graczy

    Parametry:
        int *allpoints - wskaźnik na zmienną przechowującą sumę punktow podczas aktualnej gry
        int *moves_number - wskaźnik na zmienną przechowującą ilość ruchow podczas aktualnej gry

    Return:
        Nic (jest to funkcja void)

*/

void level2_finish_move(int *allpoints,int *moves_number);



#endif /* level2_computer_hpp */
