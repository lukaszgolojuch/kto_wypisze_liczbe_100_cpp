//
//  move.cpp
//  
//
//  Created by Łukasz Gołojuch on 22/03/2020.
//
#include <iostream>
#include <stdlib.h>
#include "move.hpp"
#include "counting.hpp"
#include "level1_computer.hpp"
#include "level2_computer.hpp"
#include "level3_computer.hpp"
#include "saving_progress.hpp"

using namespace std;

void player_move(int *allpoints,int *moves_number, bool *win_player, int level)
{
    string acutal_points_str; //zmienna string słuząca do zapisu ruchu gracza
    int actual_points; //ilość punktow w aktualnym ruchu
    
    //podanie przez gracza wartości ruchu
    cout<<"Player's move: ";
    cin>>acutal_points_str;
    
    if(acutal_points_str=="save"||acutal_points_str=="SAVE") 
    {
        //zapis gry do pliku
        save(*allpoints,*moves_number,level);
        cout<<"Game has been saved"<<endl;
        
    }else if(acutal_points_str=="new"||acutal_points_str=="NEW")
        {
            //reset i wczytanie nowej gry

            
        }else if(atoi(acutal_points_str.c_str())>=1 && atoi(acutal_points_str.c_str())<=max_move(*allpoints))
            {
                //po sprawdzeniu czy mozliwa jest podana wartość ruchu, wykonanie go
                actual_points=atoi(acutal_points_str.c_str()); //konwersja string acutal_points_str na int
                count_points(&(*allpoints), actual_points);
                count_moves(&(*moves_number));
            }else
            {
                //błąd, gracz podał błędną wartość do zmiennej 'acutal_points_str'
                cout<<"Too many numbers were given. Please enter the number again."<<endl;
            }

    // sprawdzenie czy suma punktow jest rowna 100, jesli tak - wygrana gracza
    if(*allpoints==100)
    {
        *win_player=1;
    }
    
}

void computer_move(int *allpoints,int *moves_number, bool *win_computer, int level)
{
    if(level==1) //poziom 1
    {
        //ruch dla poziomu pierwszego
        level1_move(&(*allpoints),&(*moves_number));
    }
    if(level==2) //poziom 2
    {
        if(*allpoints<90)
        {
            //ruch dla poziomu 2
            level2_normal_move(&(*allpoints),&(*moves_number));
        }else
            {
                //ruch kończący grę 
                level2_finish_move(&(*allpoints),&(*moves_number));
            }
    }
    if(level==3) //poziom 3
    {
        if(*allpoints<90)
        {
            //ruch dla poziomu 3
            level3_normal_move(&(*allpoints),&(*moves_number));
        }else
        {
            //ruch kończący grę
            level3_finish_move(&(*allpoints),&(*moves_number));
        }
    }

    // sprawdzenie czy suma punktow jest rowna 100, jesli tak - wygrana komputera
    if(*allpoints==100)
    {
        *win_computer=1;
    }
}
