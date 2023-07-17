#include <iostream>

int main()
{
    bool ships[4][4] = {
        {0, 1, 1, 0}, 
        {0, 0, 0, 0}, 
        {0, 0, 1, 0}, 
        {0, 0, 1, 0}
    };

    int hits = 0;
    int numOfTurns = 0;

    while (hits < 4){
        int row,col;
        std::cout << "SELECT COORDINATES\n\n";
        std::cout << "Choose a row between 0 and 3: \n";
        std::cin >> row;
        std::cout << "Choose a column between 0 and 3: \n";
        std::cin >> col;

        if (ships[row][col]){
            ships[row][col]=0;
            hits++;
            std::cout << "------------------\n";
            std::cout << "| Hit! | " << (4-hits) << " left. |\n";
            std::cout << "------------------\n";
        }else{
            std::cout << "Miss\n\n";
        }

        numOfTurns++;

    }

    std::cout << "Victory!\n";
    std::cout << "You won in " << numOfTurns << " turns";
    return 0;
}