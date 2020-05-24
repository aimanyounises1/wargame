#pragma once
#include <vector>
#include <utility>
#include<iostream>

class Soldier{
public:
    int HP;
    int DAMAGE;
    int team;
    int type;
    bool commander;
    Soldier(int h, int d,int t, int ty, bool c){
        this->HP = h;
        this->DAMAGE = d;
        this->team = t;
        this->type = ty;
        this->commander=c;
    }
    virtual void attack(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> source)= 0;
    virtual void resetlife() = 0;
    void print(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source){
    for(int i=0; i<board.size();i++){
        for(int j=0; j< board[0].size();j++){
            if( i == source.first && j == source.second){
                    std::cout << "||" << "FireZone";
            }
            else if (board[i][j]==0)
            {
                std::cout << "||" << "0000000";
            }
            else
            {
                if(board[i][j]->commander){
                std::cout << "||" << "Commander";

                }else{
                std::cout << "||" << "Soldier";

                }
            }
            
            
        }
        std::cout << "||" << std::endl;
    }
    std::cout << "" << std::endl; 
}
    
};
;
