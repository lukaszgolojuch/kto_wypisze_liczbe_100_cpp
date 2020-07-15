//
//  counting.hpp
//  
//
//  Created by Łukasz Gołojuch on 21/03/2020.
//

#ifndef counting_hpp
#define counting_hpp

#include <stdio.h>

/* Funkcja count_moves

    Działanie funkcji:
        Działanie funkcji polega na inkrementacji ilości ruchow graczy podczas aktualnej gry.

    Parametry:
        int *moves_number - wskaźnik na zmienną przechowującą ilość ruchow podczas aktualnej gry

    Return:
        Brak (jest to funkcja void)

*/

void count_moves(int *moves_number);

/* Funkcja count_points

    Działanie funkcji:
        Działanie funkcji polega na dodawaniu do sumy punktow punktow podanych w aktualnym ruchu.

    Parametry:
        int *allpoints - wskaźnik na zmienną przechowującą sumę punktow podczas aktualnej gry
        int actual_points - zmienna przechowująca ilość punktow podana przez gracza w aktualnym ruchu

    Return:
        Brak (jest to funkcja void)

*/

void count_points(int *allpoints, int actual_points);

/* Funkcja max_move

    Działanie funkcji:
        Funkcja oblicza jaka ilość punktow moze być podana w następnym ruchu. Działanie funkcji polega na odejmowaniu od liczby 100 (suma kończąca grę), aktualnej sumy punktow. Jeśli roznica jest większa niz 10 zwracana jest maxymalna wartość ruchu rowna 10.

    Parametry:
        int allpoints - zmienna przechowującą sumę punktow podczas aktualnej gry

    Return:
        Wartość zmiennej max_points określająca maksymalny mozliwy ruch. Zakres 0-10.
*/

int max_move(int allpoints);

#endif /* counting_hpp */

