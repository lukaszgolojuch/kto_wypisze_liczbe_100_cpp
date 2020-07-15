//
//  move.hpp
//  
//
//  Created by Łukasz Gołojuch on 22/03/2020.
//

#ifndef move_hpp
#define move_hpp

#include <stdio.h>

void player_move(int *allpoints,int *moves_number, bool *win_player, int level);
void computer_move(int *allpoints,int *moves_number, bool *win_computer, int level);


#endif /* move_hpp */
