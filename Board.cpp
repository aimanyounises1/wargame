#include<iostream>
#include<Board.hpp>
using namespace WarGame;
 
 Board:: Board(uint numRows, uint numCols):board(numRows,std::vector<Soldier*>(numCols, nullptr)){}
   
void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){

}
bool Board::has_soldiers(uint player_number) const{

}
 Soldier* Board::operator[](std::pair<int,int> location)const{

}
bool Board::has_soldiers (uint player_number) const{

}
Soldier*&  Board:: operator[](std::pair<int,int> location){

}
