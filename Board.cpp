#include "Board.hpp"
#include <iostream>
#include "Soldier.hpp"

namespace WarGame {
    Soldier*& Board:: operator[](std::pair<int,int> location){
        changePlace(location);
        return this->board[location.first][location.second];
    }
    Soldier* Board:: operator[](std::pair<int,int> location) const{
        int r = location.first, c = location.second;
        if (r >= board.size() || r < 0 || c >= board[0].size() || c < 0 )
        {
            throw std::invalid_argument("out of bound");
        }
        
        return this->board[location.first][location.second];
    }
    void Board::attack(std::pair<int,int> source, Soldier* soldier){
        soldier->attack(board,source);

    }
    void Board :: changePlace(std::pair<int,int> source){
        int r = source.first;
        int c = source.second;
        if(r >= board.size() || c >= board[0].size() ||r<0 || c<0){
          throw std::invalid_argument("out Of Bound");
        }
        Soldier* temp = this->board[r][c];
        if (temp==nullptr)
        {
            return;
        }
        throw std::invalid_argument("place is taken");
    }

    void Board:: move(uint player_number, std::pair<int,int> source, MoveDIR direction){
        int r = source.first;
        int c = source.second;
        if (r >= board.size() || r < 0 || c >= board[r].size() || c < 0)
        {
            throw std::invalid_argument("out of bound");
        }
        
        Soldier* temp = this->board[r][c];

        if (temp==nullptr)
        {
            throw std::invalid_argument("place is empty");
        }
        
        std::cout <<"type: " << temp->type << " team: "<< temp->team <<" commander: " << temp->commander << std::endl;
        

        if(temp != nullptr && temp->team == player_number){
            //std::cout << temp << std::endl;

            switch (direction)
            {
            case Up:
                this->changePlace({r+1,c});
                board[r][c] = nullptr;
                attack({r+1,c}, temp);
                board[r+1][c] = temp;
                break;
            case Down:
                this->changePlace({r-1,c});
                board[r][c] = nullptr;
                attack({r-1,c}, temp);
                board[r-1][c] = temp;
                break;
            case Right:
                this->changePlace({r,c+1});
                board[r][c] = nullptr;
                attack({r,c+1}, temp);
                board[r][c+1] = temp;
                break;
            case Left:
                this->changePlace({r,c-1});
                board[r][c] = nullptr;
                attack({r,c-1}, temp);
                board[r][c-1] = temp;
                break;
            
            default:
                break;
            }
        }
        else
        {
            throw std::invalid_argument("WRONG PLACE");
        }
        
    }
    bool Board:: has_soldiers(uint player_number) const{
        for(std::vector<Soldier*> v:board){
            for(Soldier* s:v){
                if ((s != nullptr) && s->team == player_number)
                {
                    return true;
                }
                
            }
        }
        return false;
    }



};