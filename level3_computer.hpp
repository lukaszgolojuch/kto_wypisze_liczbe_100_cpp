//
//  level3_computer.hpp
//  
//
//  Created by Łukasz Gołojuch on 22/03/2020.
//

#ifndef level3_computer_hpp
#define level3_computer_hpp

#include <stdio.h>

 /* Funkcja next_move

    Działanie funkcji:
        Funkcja oblicza jaką liczbę powinien podać w następnym ruchu komputer, aby zmaksymalizować swoje szanse na wygrana w rozgrywanej grze.

        Ruch jaki powinien wykonać komputer jest wyliczany tak, aby suma punktow po wykonaniu ruchu była rowna: 1,12,23,34,...,78,89.

    Parametry:
        int *allpoints - wskaźnik na zmienną przechowującą sumę punktow podczas aktualnej gry
 
    Return:
        actual_points - zmienna w ktorej przechowywana jest wartość następnego ruchu wykonanego przez komputer

*/

int next_move(int *allpoints);

 /* Funkcja level3_normal_move

    Działanie funkcji:
        Funkcja wykonuje ruch jako komputer, gdy poziom gry ustwiony jest na 3, a liczba punktow jest mniejsza niz 90.

        Schemat działania funkcji:
            - uruchomienie funkcji next_move() w celu obliczenia ile wynosi kolejny ruch
            - uruchomienie funkcji zliczajacych punkty i ruchy graczy

    Parametry:
        int *allpoints - wskaźnik na zmienną przechowującą sumę punktow podczas aktualnej gry
        int *moves_number - wskaźnik na zmienną przechowującą ilość ruchow podczas aktualnej gry

    Return:
        Nic (jest to funkcja void)

*/

void level3_normal_move(int *allpoints,int *moves_number);

/* Funkcja level3_finish_move

    Działanie funkcji:
        Funkcja wykonuje ruch jako komputer, gdy poziom gry ustwiony jest na 3, a liczba punktow jest wieksza niz 90.

        Schemat działania funkcji:
            - pozyskanie informacji o maksymalnym mozliwym ruchu i przypisanie go do zmiennej actual_points
            - uruchomienie funkcji zliczajacych punkty i ruchy graczy

    Parametry:
        int *allpoints - wskaźnik na zmienną przechowującą sumę punktow podczas aktualnej gry
        int *moves_number - wskaźnik na zmienną przechowującą ilość ruchow podczas aktualnej gry

    Return:
        Nic (jest to funkcja void)

*/

void level3_finish_move(int *allpoints,int *moves_number);


#endif /* level3_computer_hpp */
