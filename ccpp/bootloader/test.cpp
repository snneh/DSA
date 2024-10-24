#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Game2048 {
private:
    vector<vector<int>> grid;
    int size = 4;

public:
    Game2048() {
        grid = vector<vector<int>>(size, vector<int>(size, 0));
        srand(time(0));
        addRandomTile();
        addRandomTile();
    }

    void printGrid() {
        for (const auto& row : grid) {
            for (int val : row) {
                cout << val << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    void addRandomTile() {
        vector<pair<int, int>> emptyTiles;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (grid[i][j] == 0) {
                    emptyTiles.push_back({i, j});
                }
            }
        }
        if (!emptyTiles.empty()) {
            int randomIndex = rand() % emptyTiles.size();
            grid[emptyTiles[randomIndex].first][emptyTiles[randomIndex].second] = (rand() % 2 + 1) * 2;
        }
    }


    void moveLeft() {
        for (int i = 0; i < size; i++) {
            vector<int> newRow(size, 0);
            int position = 0;
            for (int j = 0; j < size; j++) {
                if (grid[i][j] != 0) {
                    newRow[position++] = grid[i][j];
                }
            }
            for (int j = 0; j < size - 1; j++) {
                if (newRow[j] == newRow[j + 1] && newRow[j] != 0) {
                    newRow[j] *= 2;
                    newRow[j + 1] = 0;
                }
            }
            position = 0;
            for (int j = 0; j < size; j++) {
                if (newRow[j] != 0) {
                    grid[i][position++] = newRow[j];
                } else {
                    grid[i][position++] = 0;
                }
            }
        }
    }

    void moveRight() {
    for (int i = 0; i < size; i++) {
        vector<int> newRow(size, 0);
        int position = size - 1;
        for (int j = size - 1; j >= 0; j--) {
            if (grid[i][j] != 0) {
                newRow[position--] = grid[i][j];
            }
        }
        for (int j = size - 1; j > 0; j--) {
            if (newRow[j] == newRow[j - 1] && newRow[j] != 0) {
                newRow[j] *= 2;
                newRow[j - 1] = 0;
            }
        }
        position = size - 1;
        for (int j = size - 1; j >= 0; j--) {
            if (newRow[j] != 0) {
                grid[i][position--] = newRow[j];
            } else {
                grid[i][position--] = 0;
            }
        }
    }
    }


    void moveUp() {
    for (int j = 0; j < size; j++) {
        vector<int> newRow(size, 0);
        int position = 0;
        for (int i = 0; i < size; i++) {
            if (grid[i][j] != 0) {
                newRow[position++] = grid[i][j];
            }
        }
        for (int i = 0; i < size - 1; i++) {
            if (newRow[i] == newRow[i + 1] && newRow[i] != 0) {
                newRow[i] *= 2;
                newRow[i + 1] = 0;
            }
        }
        position = 0;
        for (int i = 0; i < size; i++) {
            if (newRow[i] != 0) {
                grid[position++][j] = newRow[i];
            } else {
                grid[position++][j] = 0;
            }
        }
    }
}

    void moveDown() {
    for (int j = 0; j < size; j++) {
        vector<int> newRow(size, 0);
        int position = size - 1;
        for (int i = size - 1; i >= 0; i--) {
            if (grid[i][j] != 0) {
                newRow[position--] = grid[i][j];
            }
        }
        for (int i = size - 1; i > 0; i--) {
            if (newRow[i] == newRow[i - 1] && newRow[i] != 0) {
                newRow[i] *= 2;
                newRow[i - 1] = 0;
            }
        }
        position = size - 1;
        for (int i = size - 1; i >= 0; i--) {
            if (newRow[i] != 0) {
                grid[position--][j] = newRow[i];
            } else {
                grid[position--][j] = 0;
            }
        }
    }
}

    void play() {
        char move;
        while (true) {
            printGrid();
            cout << "Enter move (w/a/s/d): ";
            cin >> move;
            switch (move) {
                case 'a': moveLeft(); break;
                case 'd': moveRight(); break;
                case 'w': moveUp(); break;
                case 's': moveDown(); break;
                default: cout << "Invalid move. Try again." << endl;
            }
            addRandomTile();
            if (isGameOver()) {
                printGrid();
                cout << "Game Over!" << endl;
                break;
            }
        }
    }

    bool isGameOver() {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (grid[i][j] == 0) return false;
                if (i > 0 && grid[i][j] == grid[i - 1][j]) return false;
                if (i < size - 1 && grid[i][j] == grid[i + 1][j]) return false;
                if (j > 0 && grid[i][j] == grid[i][j - 1]) return false;
                if (j < size - 1 && grid[i][j] == grid[i][j + 1]) return false;
            }
        }
        return true;
    }
};


int main() {
    Game2048 game;
    game.play();
    return 0;
}
