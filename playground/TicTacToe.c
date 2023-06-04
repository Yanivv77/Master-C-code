#include <stdio.h>

// Function prototypes
void initialize_board();
void display_board();
int is_valid_move(int row, int col);
int is_board_full();
int check_winner();

char board[3][3];  // The Tic-Tac-Toe board

void initialize_board() {
    // Fill the board with empty spaces
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void display_board() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int is_valid_move(int row, int col) {
    // Check if the move is within the boundaries of the board
    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        return 0;
    }
    // Check if the cell is already occupied
    if (board[row][col] != ' ') {
        return 0;
    }
    return 1;
}

int is_board_full() {
    // Check if the board is full
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

int check_winner() {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return 1;
        }
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return 1;
        }
    }
    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return 1;
    }
    return 0;
}

int main() {
    int player = 1;  // Player 1 starts the game
    int row, col;
    int moves = 0;

    initialize_board();

    while (1) {
        display_board();

        // Get the move from the current player
        printf("Player %d, enter your move (row [0-2] and column [0-2]): ", player);
        scanf("%d %d", &row, &col);

        if (!is_valid_move(row, col)) {
            printf("Invalid move. Try again.\n");
            continue;
        }

        // Update the board with the player's move
        if (player == 1) {
            board[row][col] = 'X';
        } else {
            board[row][col] = 'O';
        }

        moves++;

        // Check if the current player wins
        if (check_winner()) {
            display_board();
            printf("Player %d wins!\n", player);
            break;
        }

        // Check if the game is a draw
        if (moves == 9) {
            display_board();
            printf("It's a draw!\n");
            break;
        }

        // Switch to the next player
        player = (player == 1) ? 2 : 1;
    }

    return 0;
}