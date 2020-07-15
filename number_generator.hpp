//
//  number_generator.hpp
//  
//
//  Created by Łukasz Gołojuch on 21/03/2020.
//

#ifndef number_generator_hpp
#define number_generator_hpp

#include <stdio.h>

/* Funkcja generate

    Działanie funkcji:
        Funkcja jest generatorem liczb pseudolosowych. Jej zadaniem jest 'wylosowanie' liczby z zakresu 0 - max_number (parametr).

    Parametry:
        int max_number - zmienna przechowująca liczbę, ktora jest maksymalna mozliwa liczba do wygenerowania.

    Return:
        Wartość zmiennej random - liczba wygenerowana 

*/

int generate(int max_number);

/* Funkcja level_choose

    Działanie funkcji:
        Funkcja ktora za pomocą warunku wielokrotnego wyboru switch, wybiera poziom na ktorym będzie przeprowadzona rozgrywka, lub włącza uruchamianie gry z zapisu.
        W przypadku parametru:

        1 - uruchomienie poziomu 1
        2 - uruchomienie poziomu 2
        3 - uruchomienie poziomu 3
        4 - "wylosowanie" za pomocą generatora liczb pseudolosowych poziomu (1-3)
        5 - wczytywanie zapisu gry z pliku "save.txt"

    Parametry:
        int parametr - zmienna przechowująca wartość parametru przekazywanego do programu podczas uruchamiania z linii komend
        int *level - wskaznik na zmienną level przechowującą poziom na jakim przeprowadzana jest rozgrywka
        int *allpoints - wskaźnik na zmienną przechowującą sumę punktow podczas aktualnej gry
        int *moves_number - wskaźnik na zmienną przechowującą ilość ruchow podczas aktualnej gry

    Return:
        Brak (jest to funkcja void)

*/

void level_choose(int parametr, int *level, int *allpoints, int *moves_number);


#endif /* number_generator_hpp */
