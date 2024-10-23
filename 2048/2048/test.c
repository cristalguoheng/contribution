#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//#define ROWS 4
//#define COLS 4
//
//// ANSI ת�����У�����������ɫ
//#define BLUE "\033[34m"
//#define RESET "\033[0m"
//
//void print_horizontal_line(int length) {
//    for (int i = 0; i < length; i++) {
//        printf(BLUE "+-----" RESET);  // ʹ����ɫ��ӡ�߽�
//    }
//    printf(BLUE "+\n" RESET);  // ʹ����ɫ��ӡ���ı߽�
//}
//
//void print_table() {
//    // ��ӡ����ÿһ��
//    for (int row = 0; row < ROWS; row++) {
//        print_horizontal_line(COLS);  // ��ӡ����
//
//        // ��ӡÿ������
//        for (int col = 0; col < COLS; col++) {
//            printf(BLUE "|%5s" RESET, " ");  // ʹ����ɫ��ӡ����
//        }
//        printf(BLUE "|\n" RESET);  // ʹ����ɫ��ӡ�еĽ�������
//    }
//    print_horizontal_line(COLS);  // ��ӡ���һ������
//}
//
//int main() {
//    print_table();  // ��ӡ���
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>


#define ROWS 4
#define COLS 4
#define CELL_WIDTH 5   // ��Ԫ��������Ϊ 5 ���ո�
#define TOTAL_WIDTH 20 // ���峤��Ϊ 20 ���ո�

int grid[ROWS][COLS] = { 0 };  // 4x4�ı�����ڴ洢����

// ���ÿ���̨���λ��
void set_cursor_position(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// ������ɫ��������ɫ
void set_text_color_blue() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}

// �ָ�Ĭ����ɫ
void reset_text_color() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7); // Ĭ����ɫ
}

// ��ӡ��ɫ������
void print_horizontal_line() {
    set_text_color_blue();
    for (int i = 0; i < COLS; i++) {
        printf("+");
        for (int j = 0; j < CELL_WIDTH; j++) {
            printf("-");
        }
    }
    printf("+\n");
    reset_text_color();
}

// ��ӡ4x4���
void print_table() {
    set_cursor_position(0, 0); // ����ƶ������Ͻǿ�ʼ��ӡ
    for (int row = 0; row < ROWS; row++) {
        print_horizontal_line();  // ��ӡ���ĺ���
        for (int col = 0; col < COLS; col++) {
            // ��ӡ��ɫ������
            set_text_color_blue();
            printf("|");
            reset_text_color();
            if (grid[row][col] == 0)
                printf("%*s", CELL_WIDTH, "");  // ��ӡ�հ׵�Ԫ��
            else
                printf("%*d", CELL_WIDTH, grid[row][col]);  // ������ʾ����
        }
        // ���һ������
        set_text_color_blue();
        printf("|\n");
        reset_text_color();
    }
    print_horizontal_line();  // ��ӡ�������һ�к���

    // �ڱ���·���ӡ����˵��
    set_text_color_blue();
    printf("\nUP: ��   DOWN: ��\n");
    printf("LEFT: ��  RIGHT: ��\n");
    reset_text_color();
}

// �ڿհ�λ���������һ������2
void spawn_new_number() {
    int empty_cells[ROWS * COLS][2];  // ���ڴ洢�յ�Ԫ���λ��
    int count = 0;

    // �ҵ����пյ�Ԫ��
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            if (grid[row][col] == 0) {
                empty_cells[count][0] = row;
                empty_cells[count][1] = col;
                count++;
            }
        }
    }

    // �����һ���յ�Ԫ����������2
    if (count > 0) {
        int r = rand() % count;
        grid[empty_cells[r][0]][empty_cells[r][1]] = 2;
    }
}

// �ж���Ϸ�Ƿ���������ﵽ2048��
int is_game_over() {
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            if (grid[row][col] == 2048) {
                return 1;  // ��������ִﵽ2048����Ϸ����
            }
        }
    }
    return 0;
}

// �ϲ����ƶ����߼�������������֮ǰ��ͬ��
void move_up() {
    for (int col = 0; col < COLS; col++) {
        int merged[ROWS] = { 0 };  // ���ڱ���Ƿ��Ѿ��ϲ���
        for (int row = 1; row < ROWS; row++) {
            if (grid[row][col] != 0) {
                int target_row = row - 1;
                while (target_row >= 0 && grid[target_row][col] == 0) {
                    target_row--;
                }
                if (target_row >= 0 && grid[target_row][col] == grid[row][col] && !merged[target_row]) {
                    grid[target_row][col] *= 2;  // �ϲ�����
                    grid[row][col] = 0;
                    merged[target_row] = 1;  // ����Ѻϲ�
                }
                else if (grid[target_row + 1][col] == 0) {
                    grid[target_row + 1][col] = grid[row][col];  // �ƶ�����
                    grid[row][col] = 0;
                }
            }
        }
    }
}

void move_down() {
    for (int col = 0; col < COLS; col++) {
        int merged[ROWS] = { 0 };  // ����Ƿ�ϲ�
        for (int row = ROWS - 2; row >= 0; row--) {
            if (grid[row][col] != 0) {
                int target_row = row + 1;
                while (target_row < ROWS && grid[target_row][col] == 0) {
                    target_row++;
                }
                if (target_row < ROWS && grid[target_row][col] == grid[row][col] && !merged[target_row]) {
                    grid[target_row][col] *= 2;  // �ϲ�����
                    grid[row][col] = 0;
                    merged[target_row] = 1;  // ����Ѻϲ�
                }
                else if (grid[target_row - 1][col] == 0) {
                    grid[target_row - 1][col] = grid[row][col];  // �ƶ�����
                    grid[row][col] = 0;
                }
            }
        }
    }
}

void move_left() {
    for (int row = 0; row < ROWS; row++) {
        int merged[COLS] = { 0 };  // ����Ƿ�ϲ�
        for (int col = 1; col < COLS; col++) {
            if (grid[row][col] != 0) {
                int target_col = col - 1;
                while (target_col >= 0 && grid[row][target_col] == 0) {
                    target_col--;
                }
                if (target_col >= 0 && grid[row][target_col] == grid[row][col] && !merged[target_col]) {
                    grid[row][target_col] *= 2;  // �ϲ�����
                    grid[row][col] = 0;
                    merged[target_col] = 1;  // ����Ѻϲ�
                }
                else if (grid[row][target_col + 1] == 0) {
                    grid[row][target_col + 1] = grid[row][col];  // �ƶ�����
                    grid[row][col] = 0;
                }
            }
        }
    }
}

void move_right() {
    for (int row = 0; row < ROWS; row++) {
        int merged[COLS] = { 0 };  // ����Ƿ�ϲ�
        for (int col = COLS - 2; col >= 0; col--) {
            if (grid[row][col] != 0) {
                int target_col = col + 1;
                while (target_col < COLS && grid[row][target_col] == 0) {
                    target_col++;
                }
                if (target_col < COLS && grid[row][target_col] == grid[row][col] && !merged[target_col]) {
                    grid[row][target_col] *= 2;  // �ϲ�����
                    grid[row][col] = 0;
                    merged[target_col] = 1;  // ����Ѻϲ�
                }
                else if (grid[row][target_col - 1] == 0) {
                    grid[row][target_col - 1] = grid[row][col];  // �ƶ�����
                    grid[row][col] = 0;
                }
            }
        }
    }
}

// ����������
void handle_input() {
    int ch = _getch();
    switch (ch) {
    case 72:  // �ϼ�
        move_up();
        break;
    case 80:  // �¼�
        move_down();
        break;
    case 75:  // ���
        move_left();
        break;
    case 77:  // �Ҽ�
        move_right();
        break;
    case 27:  // ESC �����˳�
        exit(0);
        break;
    }
    spawn_new_number();  // ÿ�β����������µ�����
}

int main() {
    srand(time(0));  // ��ʼ�����������

    spawn_new_number();  // ������ɳ�ʼ������
    spawn_new_number();  // ���ɵڶ�������

    while (!is_game_over()) {
        system("cls");  // ����
        print_table();  // ��ӡ��ǰ���
        handle_input();  // �����û�����
    }

    printf("Congratulations! You've reached 2048!\n");
    return 0;
}





//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <time.h>
//#include <windows.h>
//
//
//#define ROWS 4
//#define COLS 4
//#define CELL_WIDTH 5   // ��Ԫ��������Ϊ 5 ���ո�
//#define TOTAL_WIDTH 20 // ���峤��Ϊ 20 ���ո�
//
//int grid[ROWS][COLS] = { 0 };  // 4x4�ı�����ڴ洢����
//
//// ���ÿ���̨���λ��
//void set_cursor_position(int x, int y) {
//    COORD coord;
//    coord.X = x;
//    coord.Y = y;
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
//}
//
//// ������ɫ��������ɫ
//void set_text_color_blue() {
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
//}
//
//// �ָ�Ĭ����ɫ
//void reset_text_color() {
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hConsole, 7); // Ĭ����ɫ
//}
//
//// ��ӡ��ɫ������
//void print_horizontal_line() {
//    set_text_color_blue();
//    for (int i = 0; i < COLS; i++) {
//        printf("+");
//        for (int j = 0; j < CELL_WIDTH; j++) {
//            printf("-");
//        }
//    }
//    printf("+\n");
//    reset_text_color();
//}
//
//// ��ӡ4x4���
//void print_table() {
//    set_cursor_position(0, 0); // ����ƶ������Ͻǿ�ʼ��ӡ
//    for (int row = 0; row < ROWS; row++) {
//        print_horizontal_line();  // ��ӡ���ĺ���
//        for (int col = 0; col < COLS; col++) {
//            // ��ӡ��ɫ������
//            set_text_color_blue();
//            printf("|");
//            reset_text_color();
//            if (grid[row][col] == 0)
//                printf("%*s", CELL_WIDTH, "");  // ��ӡ�հ׵�Ԫ��
//            else
//                printf("%*d", CELL_WIDTH, grid[row][col]);  // ������ʾ����
//        }
//        // ���һ������
//        set_text_color_blue();
//        printf("|\n");
//        reset_text_color();
//    }
//    print_horizontal_line();  // ��ӡ�������һ�к���
//
//    // �ڱ���·���ӡ����˵��
//    set_text_color_blue();
//    printf("\nUP: ��   DOWN: ��\n");
//    printf("LEFT: ��  RIGHT: ��\n");
//    reset_text_color();
//}
//
//// �ڿհ�λ���������һ������2
//void spawn_new_number() {
//    int empty_cells[ROWS * COLS][2];  // ���ڴ洢�յ�Ԫ���λ��
//    int count = 0;
//
//    // �ҵ����пյ�Ԫ��
//    for (int row = 0; row < ROWS; row++) {
//        for (int col = 0; col < COLS; col++) {
//            if (grid[row][col] == 0) {
//                empty_cells[count][0] = row;
//                empty_cells[count][1] = col;
//                count++;
//            }
//        }
//    }
//
//    // �����һ���յ�Ԫ����������2
//    if (count > 0) {
//        int r = rand() % count;
//        grid[empty_cells[r][0]][empty_cells[r][1]] = 2;
//    }
//}
//
//// �ж���Ϸ�Ƿ���������ﵽ2048��
//int is_game_over() {
//    for (int row = 0; row < ROWS; row++) {
//        for (int col = 0; col < COLS; col++) {
//            if (grid[row][col] == 2048) {
//                return 1;  // ��������ִﵽ2048����Ϸ����
//            }
//        }
//    }
//    return 0;
//}
//
//// �ϲ����ƶ����߼�������������֮ǰ��ͬ��
//void move_up() {
//    for (int col = 0; col < COLS; col++) {
//        int merged[ROWS] = { 0 };  // ���ڱ���Ƿ��Ѿ��ϲ���
//        for (int row = 1; row < ROWS; row++) {
//            if (grid[row][col] != 0) {
//                int target_row = row - 1;
//                while (target_row >= 0 && grid[target_row][col] == 0) {
//                    target_row--;
//                }
//                if (target_row >= 0 && grid[target_row][col] == grid[row][col] && !merged[target_row]) {
//                    grid[target_row][col] *= 2;  // �ϲ�����
//                    grid[row][col] = 0;
//                    merged[target_row] = 1;  // ����Ѻϲ�
//                }
//                else if (grid[target_row + 1][col] == 0) {
//                    grid[target_row + 1][col] = grid[row][col];  // �ƶ�����
//                    grid[row][col] = 0;
//                }
//            }
//        }
//    }
//}
//
//void move_down() {
//    for (int col = 0; col < COLS; col++) {
//        int merged[ROWS] = { 0 };  // ����Ƿ�ϲ�
//        for (int row = ROWS - 2; row >= 0; row--) {
//            if (grid[row][col] != 0) {
//                int target_row = row + 1;
//                while (target_row < ROWS && grid[target_row][col] == 0) {
//                    target_row++;
//                }
//                if (target_row < ROWS && grid[target_row][col] == grid[row][col] && !merged[target_row]) {
//                    grid[target_row][col] *= 2;  // �ϲ�����
//                    grid[row][col] = 0;
//                    merged[target_row] = 1;  // ����Ѻϲ�
//                }
//                else if (grid[target_row - 1][col] == 0) {
//                    grid[target_row - 1][col] = grid[row][col];  // �ƶ�����
//                    grid[row][col] = 0;
//                }
//            }
//        }
//    }
//}
//
//void move_left() {
//    for (int row = 0; row < ROWS; row++) {
//        int merged[COLS] = { 0 };  // ����Ƿ�ϲ�
//        for (int col = 1; col < COLS; col++) {
//            if (grid[row][col] != 0) {
//                int target_col = col - 1;
//                while (target_col >= 0 && grid[row][target_col] == 0) {
//                    target_col--;
//                }
//                if (target_col >= 0 && grid[row][target_col] == grid[row][col] && !merged[target_col]) {
//                    grid[row][target_col] *= 2;  // �ϲ�����
//                    grid[row][col] = 0;
//                    merged[target_col] = 1;  // ����Ѻϲ�
//                }
//                else if (grid[row][target_col + 1] == 0) {
//                    grid[row][target_col + 1] = grid[row][col];  // �ƶ�����
//                    grid[row][col] = 0;
//                }
//            }
//        }
//    }
//}
//
//void move_right() {
//    for (int row = 0; row < ROWS; row++) {
//        int merged[COLS] = { 0 };  // ����Ƿ�ϲ�
//        for (int col = COLS - 2; col >= 0; col--) {
//            if (grid[row][col] != 0) {
//                int target_col = col + 1;
//                while (target_col < COLS && grid[row][target_col] == 0) {
//                    target_col++;
//                }
//                if (target_col < COLS && grid[row][target_col] == grid[row][col] && !merged[target_col]) {
//                    grid[row][target_col] *= 2;  // �ϲ�����
//                    grid[row][col] = 0;
//                    merged[target_col] = 1;  // ����Ѻϲ�
//                }
//                else if (grid[row][target_col - 1] == 0) {
//                    grid[row][target_col - 1] = grid[row][col];  // �ƶ�����
//                    grid[row][col] = 0;
//                }
//            }
//        }
//    }
//}
//
//// ����������
//void handle_input() {
//    int ch = _getch();
//    switch (ch) {
//    case 72:  // �ϼ�
//        move_up();
//        break;
//    case 80:  // �¼�
//        move_down();
//        break;
//    case 75:  // ���
//        move_left();
//        break;
//    case 77:  // �Ҽ�
//        move_right();
//        break;
//    case 27:  // ESC �����˳�
//        exit(0);
//        break;
//    }
//    spawn_new_number();  // ÿ�β����������µ�����
//}
//
//int main() {
//    srand(time(0));  // ��ʼ�����������
//
//    spawn_new_number();  // ������ɳ�ʼ������
//    spawn_new_number();  // ���ɵڶ�������
//
//    while (!is_game_over()) {
//        system("cls");  // ����
//        print_table();  // ��ӡ��ǰ���
//        handle_input();  // �����û�����
//    }
//
//    printf("Congratulations! You've reached 2048!\n");
//    return 0;
//}
//

