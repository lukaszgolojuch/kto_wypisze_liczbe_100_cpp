/*=================================================================================================================================================
    Nazwa Programu: „Kto poda liczbę 100?”
    Projekt z przedmiotu: Techniki Programowania
    Język programu: C++

    Data rozpoczęcia tworzenia: 21.03.2020r.
    Autor programu: Łukasz Gołojuch
    Kierunek: Informatyka niestacjonarne
    Uczelnia: Politechinka Gdańska wydział ETI
    Numer indeksu: 175520
===================================================================================================================================================
  Opis programu:

    Program jest grą polegającą na interakcji użytkownika z komputerem. Poniżej zostaną przedstawione zasady tej interakcji oraz przeprowadzania gry.   

    Na początku działania aplikacji do programu z linii komend zostaje wprowadzony w postaci parametru poziom od 1 do 3, przy podaniu parametru 4, komputer losuje poziom, z równymi szansami na wystąpienie jednego z trzech wyżej wymienionych za pomocą modułu do generowania liczb pseudolosowych (Dokładny opis poziomów na stronie nr. 2). Dodatkowo, gdy jako parametr podamy liczbę 5 zostanie wczytany ostatni zapis z pliku tekstowego o nazwie „save.html”.

    Po wybraniu poziomu następuje wylosowanie za pomocą wcześniej wspomnianego generatora liczb pseudolosowych, kto pierwszy wykonuje ruch: komputer czy użytkownik aplikacji. Szanse na rozpoczynanie gry przez gracza lub komputer wynoszą 50/50.

    Gra polega na sumowaniu podanych na zmianę przez gracza i komputer liczb, z których każda z nich musi być większa co najmniej o 1, lecz nie więcej niż o 10. Gra kończy się gdy któryś z graczy, w naszym przypadku użytkownik aplikacji lub komputer, poda taka liczbę, że suma wszystkich wcześniej podanych liczb i tej podanej w ostatnim ruchu da sumę równą 100.

    Zwycięzcą jest gracz, który poda liczbę, której suma razem z wcześniej podanymi wyniesie 100.
=================================================================================================================================================*/

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include "main.hpp"
#include "number_generator.hpp"
#include "move.hpp"


using namespace std;

int main(int argc, char *argv[])
{

    int moves_number=0; //ilość ruchow wykonanych przez graczy
    int allpoints=0; //suma punktow
    bool win_player=0; //zmienna boolowska 0 - brak zwyciestwa 1 - zwyciestwo gracza
    bool win_computer=0; //zmienna boolowska 0 - brak zwyciestwa 1 - zwyciestwo komputera
    int order; //kolejność ruchow (parzyste - gracz, nieparzyste - komputer)
    int level; //poziom na ktorym prowadzona jest rozgrywka zakres 1-3

    //wybieranie poziomu, lub wczytywanie gry z zapisu
    level_choose(int(*argv[argc-1])-48, &level, &allpoints, &moves_number);
    
    //"losowanie" kolejności ruchu 1 - rozpoczyna komputer, 2 - rozpoczyna gracz
    order=generate(2);
    
    while((win_player!=1 || win_computer!=1) && allpoints!=100)
    {
        //Przedstawienie aktualnego stanu gry (ilość ruchow, poziom, liczba punktow)
        cout<<endl<<"All moves in this game: "<<moves_number<<endl;
        cout<<"Level "<<level<<endl;
        cout<<"Number of points: "<<allpoints<<endl<<endl;
        
        //wybor, czy jest ruch gracza, czy komputera + sprawdzenie czy nikt w poprzednim ruchu nie zakończył gry
        if(order%2==0 && win_computer!=1)
        {
            //ruch gracza
            player_move(&allpoints,&moves_number,&win_player,level);
        }
        else if(order%2!=0 && win_player!=1)
        {
            // ruch komputera
            computer_move(&allpoints,&moves_number,&win_computer,level);
        }

        //inkrementacja zmiennej order w celu zmiany gracza: komputer -> gracz / gracz -> komputer
        order++;
    }
    
    // Ogłoszenie zwycięstwa jednego z uczestnikow gry
    if(win_player==1)
    {
        //zwyciestwo gracza
        cout<<endl<<"Player is the WINNER"<<endl;
    }
    else if (win_computer==1)
    {
        //zwyciestwo komputera
        cout<<endl<<"Computer is the WINNER"<<endl;
    }
    
    return 0;
}

