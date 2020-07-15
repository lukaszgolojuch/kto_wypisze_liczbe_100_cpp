//
//  saving_progress.hpp
//  
//
//  Created by Łukasz Gołojuch on 22/03/2020.
//

#ifndef saving_progress_hpp
#define saving_progress_hpp

#include <stdio.h>

/* Funkcja save

    Działanie funkcji:
        Funkcja zapisuje do pliku save.txt aktualny stan gry, czyli aktualną sumę punktow, aktualną ilość wykonanych przez graczy ruchow oraz poziom na ktorym jest prowadzona rozgrywka. 
        Dane zostają zapisane do pliku w następujący sposob:
        1. linijka: ilość punktow
        2. linijka: liczba ruchow 
        3. linijka: poziom rozgrywki

    Parametry:
        int level - zmienna przechowującą poziom na jakim przeprowadzana jest rozgrywka
        int allpoints - zmienna przechowującą sumę punktow podczas aktualnej gry
        int moves_number - zmienna przechowującą ilość ruchow podczas aktualnej gry

    Return:
        Brak (jest to funkcja void)

*/

void save(int allpoints,int moves_number,int level);

/* Funkcja load

    Działanie funkcji:
        Funkcja odczytuje dane z pliku save.txt posiadający wcześniej zapisany stan gry, czyli aktualną sumę punktow, aktualną ilość wykonanych przez graczy ruchow oraz poziom na ktorym jest prowadzona rozgrywka. 
        Dane w pliku są zapisane w następujący sposob:
        1. linijka: ilość punktow - przekazana do zmiennej allpoints
        2. linijka: liczba ruchow  - przekazana do zmiennej moves_number
        3. linijka: poziom rozgrywki - przekazana do zmiennej level

    Parametry:
        int *level - wskaznik na zmienną przechowującą poziom na jakim przeprowadzana jest rozgrywka
        int *allpoints - wskaznik na zmienną przechowującą sumę punktow podczas aktualnej gry
        int *moves_number - wskaznik na zmienną przechowującą ilość ruchow podczas aktualnej gry

    Return:
        Brak (jest to funkcja void)

*/

void load(int *allpoints,int *moves_number,int *level);

#endif /* saving_progress_hpp */
