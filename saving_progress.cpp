//
//  saving_progress.cpp
//  
//
//  Created by Łukasz Gołojuch on 22/03/2020.
//

#include <iostream>
#include <fstream>
#include <string>
#include "saving_progress.hpp"

using namespace std;


void save(int allpoints,int moves_number,int level)
{
    fstream file;
    
    file.open("save.txt",ios::out);
    
    file<<allpoints<<endl;
    file<<moves_number<<endl;
    file<<level<<endl;
    
    cout<<"Game has been saved"<<endl;
}

void load(int *allpoints,int *moves_number,int *level)
{
    string line;
    int line_nr=1;
    
    fstream file;
    file.open("save.txt", ios::in);
    
    if(file.good()==false) cout<<"File cannot be opened";
    
    while (getline(file, line))
    {
        switch (line_nr)
        {
            case 1:
                *allpoints=atoi(line.c_str());
            break;
                
            case 2:
                *moves_number=atoi(line.c_str());
            break;
                
            case 3:
                *level=atoi(line.c_str());
            break;
        }
        line_nr++;
    }
    
    cout<<"Game loaded";
    file.close();
}

