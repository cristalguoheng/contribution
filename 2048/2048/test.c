#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//#define ROWS 4
//#define COLS 4
//
//// ANSI 转义序列，用于设置蓝色
//#define BLUE "\033[34m"
//#define RESET "\033[0m"
//
//void print_horizontal_line(int length) {
//    for (int i = 0; i < length; i++) {
//        printf(BLUE "+-----" RESET);  // 使用蓝色打印边界
//    }
//    printf(BLUE "+\n" RESET);  // 使用蓝色打印最后的边界
//}
//
//void print_table() {
//    // 打印表格的每一行
//    for (int row = 0; row < ROWS; row++) {
//        print_horizontal_line(COLS);  // 打印横线
//
//        // 打印每个格子
//        for (int col = 0; col < COLS; col++) {
//            printf(BLUE "|%5s" RESET, " ");  // 使用蓝色打印格子
//        }
//        printf(BLUE "|\n" RESET);  // 使用蓝色打印行的结束符号
//    }
//    print_horizontal_line(COLS);  // 打印最后一条横线
//}
//
//int main() {
//    print_table();  // 打印表格
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>


#define ROWS 4
#define COLS 4
#define CELL_WIDTH 5   // 单元格宽度设置为 5 个空格
#define TOTAL_WIDTH 20 // 整体长度为 20 个空格

int grid[ROWS][COLS] = { 0 };  // 4x4的表格，用于存储数字

// 设置控制台光标位置
void set_cursor_position(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// 设置蓝色的文字颜色
void set_text_color_blue() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}

// 恢复默认颜色
void reset_text_color() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7); // 默认颜色
}

// 打印蓝色的虚线
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

// 打印4x4表格
void print_table() {
    set_cursor_position(0, 0); // 光标移动到左上角开始打印
    for (int row = 0; row < ROWS; row++) {
        print_horizontal_line();  // 打印表格的横线
        for (int col = 0; col < COLS; col++) {
            // 打印蓝色的竖线
            set_text_color_blue();
            printf("|");
            reset_text_color();
            if (grid[row][col] == 0)
                printf("%*s", CELL_WIDTH, "");  // 打印空白单元格
            else
                printf("%*d", CELL_WIDTH, grid[row][col]);  // 居中显示数字
        }
        // 最后一个竖线
        set_text_color_blue();
        printf("|\n");
        reset_text_color();
    }
    print_horizontal_line();  // 打印表格的最后一行横线

    // 在表格下方打印方向说明
    set_text_color_blue();
    printf("\nUP: ↑   DOWN: ↓\n");
    printf("LEFT: ←  RIGHT: →\n");
    reset_text_color();
}

// 在空白位置随机生成一个数字2
void spawn_new_number() {
    int empty_cells[ROWS * COLS][2];  // 用于存储空单元格的位置
    int count = 0;

    // 找到所有空单元格
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            if (grid[row][col] == 0) {
                empty_cells[count][0] = row;
                empty_cells[count][1] = col;
                count++;
            }
        }
    }

    // 随机在一个空单元格生成数字2
    if (count > 0) {
        int r = rand() % count;
        grid[empty_cells[r][0]][empty_cells[r][1]] = 2;
    }
}

// 判断游戏是否结束（即达到2048）
int is_game_over() {
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            if (grid[row][col] == 2048) {
                return 1;  // 如果有数字达到2048，游戏结束
            }
        }
    }
    return 0;
}

// 合并和移动的逻辑函数（保持与之前相同）
void move_up() {
    for (int col = 0; col < COLS; col++) {
        int merged[ROWS] = { 0 };  // 用于标记是否已经合并过
        for (int row = 1; row < ROWS; row++) {
            if (grid[row][col] != 0) {
                int target_row = row - 1;
                while (target_row >= 0 && grid[target_row][col] == 0) {
                    target_row--;
                }
                if (target_row >= 0 && grid[target_row][col] == grid[row][col] && !merged[target_row]) {
                    grid[target_row][col] *= 2;  // 合并数字
                    grid[row][col] = 0;
                    merged[target_row] = 1;  // 标记已合并
                }
                else if (grid[target_row + 1][col] == 0) {
                    grid[target_row + 1][col] = grid[row][col];  // 移动数字
                    grid[row][col] = 0;
                }
            }
        }
    }
}

void move_down() {
    for (int col = 0; col < COLS; col++) {
        int merged[ROWS] = { 0 };  // 标记是否合并
        for (int row = ROWS - 2; row >= 0; row--) {
            if (grid[row][col] != 0) {
                int target_row = row + 1;
                while (target_row < ROWS && grid[target_row][col] == 0) {
                    target_row++;
                }
                if (target_row < ROWS && grid[target_row][col] == grid[row][col] && !merged[target_row]) {
                    grid[target_row][col] *= 2;  // 合并数字
                    grid[row][col] = 0;
                    merged[target_row] = 1;  // 标记已合并
                }
                else if (grid[target_row - 1][col] == 0) {
                    grid[target_row - 1][col] = grid[row][col];  // 移动数字
                    grid[row][col] = 0;
                }
            }
        }
    }
}

void move_left() {
    for (int row = 0; row < ROWS; row++) {
        int merged[COLS] = { 0 };  // 标记是否合并
        for (int col = 1; col < COLS; col++) {
            if (grid[row][col] != 0) {
                int target_col = col - 1;
                while (target_col >= 0 && grid[row][target_col] == 0) {
                    target_col--;
                }
                if (target_col >= 0 && grid[row][target_col] == grid[row][col] && !merged[target_col]) {
                    grid[row][target_col] *= 2;  // 合并数字
                    grid[row][col] = 0;
                    merged[target_col] = 1;  // 标记已合并
                }
                else if (grid[row][target_col + 1] == 0) {
                    grid[row][target_col + 1] = grid[row][col];  // 移动数字
                    grid[row][col] = 0;
                }
            }
        }
    }
}

void move_right() {
    for (int row = 0; row < ROWS; row++) {
        int merged[COLS] = { 0 };  // 标记是否合并
        for (int col = COLS - 2; col >= 0; col--) {
            if (grid[row][col] != 0) {
                int target_col = col + 1;
                while (target_col < COLS && grid[row][target_col] == 0) {
                    target_col++;
                }
                if (target_col < COLS && grid[row][target_col] == grid[row][col] && !merged[target_col]) {
                    grid[row][target_col] *= 2;  // 合并数字
                    grid[row][col] = 0;
                    merged[target_col] = 1;  // 标记已合并
                }
                else if (grid[row][target_col - 1] == 0) {
                    grid[row][target_col - 1] = grid[row][col];  // 移动数字
                    grid[row][col] = 0;
                }
            }
        }
    }
}

// 处理按键输入
void handle_input() {
    int ch = _getch();
    switch (ch) {
    case 72:  // 上键
        move_up();
        break;
    case 80:  // 下键
        move_down();
        break;
    case 75:  // 左键
        move_left();
        break;
    case 77:  // 右键
        move_right();
        break;
    case 27:  // ESC 键，退出
        exit(0);
        break;
    }
    spawn_new_number();  // 每次操作后生成新的数字
}

int main() {
    srand(time(0));  // 初始化随机数种子

    spawn_new_number();  // 随机生成初始的数字
    spawn_new_number();  // 生成第二个数字

    while (!is_game_over()) {
        system("cls");  // 清屏
        print_table();  // 打印当前表格
        handle_input();  // 处理用户输入
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
//#define CELL_WIDTH 5   // 单元格宽度设置为 5 个空格
//#define TOTAL_WIDTH 20 // 整体长度为 20 个空格
//
//int grid[ROWS][COLS] = { 0 };  // 4x4的表格，用于存储数字
//
//// 设置控制台光标位置
//void set_cursor_position(int x, int y) {
//    COORD coord;
//    coord.X = x;
//    coord.Y = y;
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
//}
//
//// 设置蓝色的文字颜色
//void set_text_color_blue() {
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
//}
//
//// 恢复默认颜色
//void reset_text_color() {
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hConsole, 7); // 默认颜色
//}
//
//// 打印蓝色的虚线
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
//// 打印4x4表格
//void print_table() {
//    set_cursor_position(0, 0); // 光标移动到左上角开始打印
//    for (int row = 0; row < ROWS; row++) {
//        print_horizontal_line();  // 打印表格的横线
//        for (int col = 0; col < COLS; col++) {
//            // 打印蓝色的竖线
//            set_text_color_blue();
//            printf("|");
//            reset_text_color();
//            if (grid[row][col] == 0)
//                printf("%*s", CELL_WIDTH, "");  // 打印空白单元格
//            else
//                printf("%*d", CELL_WIDTH, grid[row][col]);  // 居中显示数字
//        }
//        // 最后一个竖线
//        set_text_color_blue();
//        printf("|\n");
//        reset_text_color();
//    }
//    print_horizontal_line();  // 打印表格的最后一行横线
//
//    // 在表格下方打印方向说明
//    set_text_color_blue();
//    printf("\nUP: ↑   DOWN: ↓\n");
//    printf("LEFT: ←  RIGHT: →\n");
//    reset_text_color();
//}
//
//// 在空白位置随机生成一个数字2
//void spawn_new_number() {
//    int empty_cells[ROWS * COLS][2];  // 用于存储空单元格的位置
//    int count = 0;
//
//    // 找到所有空单元格
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
//    // 随机在一个空单元格生成数字2
//    if (count > 0) {
//        int r = rand() % count;
//        grid[empty_cells[r][0]][empty_cells[r][1]] = 2;
//    }
//}
//
//// 判断游戏是否结束（即达到2048）
//int is_game_over() {
//    for (int row = 0; row < ROWS; row++) {
//        for (int col = 0; col < COLS; col++) {
//            if (grid[row][col] == 2048) {
//                return 1;  // 如果有数字达到2048，游戏结束
//            }
//        }
//    }
//    return 0;
//}
//
//// 合并和移动的逻辑函数（保持与之前相同）
//void move_up() {
//    for (int col = 0; col < COLS; col++) {
//        int merged[ROWS] = { 0 };  // 用于标记是否已经合并过
//        for (int row = 1; row < ROWS; row++) {
//            if (grid[row][col] != 0) {
//                int target_row = row - 1;
//                while (target_row >= 0 && grid[target_row][col] == 0) {
//                    target_row--;
//                }
//                if (target_row >= 0 && grid[target_row][col] == grid[row][col] && !merged[target_row]) {
//                    grid[target_row][col] *= 2;  // 合并数字
//                    grid[row][col] = 0;
//                    merged[target_row] = 1;  // 标记已合并
//                }
//                else if (grid[target_row + 1][col] == 0) {
//                    grid[target_row + 1][col] = grid[row][col];  // 移动数字
//                    grid[row][col] = 0;
//                }
//            }
//        }
//    }
//}
//
//void move_down() {
//    for (int col = 0; col < COLS; col++) {
//        int merged[ROWS] = { 0 };  // 标记是否合并
//        for (int row = ROWS - 2; row >= 0; row--) {
//            if (grid[row][col] != 0) {
//                int target_row = row + 1;
//                while (target_row < ROWS && grid[target_row][col] == 0) {
//                    target_row++;
//                }
//                if (target_row < ROWS && grid[target_row][col] == grid[row][col] && !merged[target_row]) {
//                    grid[target_row][col] *= 2;  // 合并数字
//                    grid[row][col] = 0;
//                    merged[target_row] = 1;  // 标记已合并
//                }
//                else if (grid[target_row - 1][col] == 0) {
//                    grid[target_row - 1][col] = grid[row][col];  // 移动数字
//                    grid[row][col] = 0;
//                }
//            }
//        }
//    }
//}
//
//void move_left() {
//    for (int row = 0; row < ROWS; row++) {
//        int merged[COLS] = { 0 };  // 标记是否合并
//        for (int col = 1; col < COLS; col++) {
//            if (grid[row][col] != 0) {
//                int target_col = col - 1;
//                while (target_col >= 0 && grid[row][target_col] == 0) {
//                    target_col--;
//                }
//                if (target_col >= 0 && grid[row][target_col] == grid[row][col] && !merged[target_col]) {
//                    grid[row][target_col] *= 2;  // 合并数字
//                    grid[row][col] = 0;
//                    merged[target_col] = 1;  // 标记已合并
//                }
//                else if (grid[row][target_col + 1] == 0) {
//                    grid[row][target_col + 1] = grid[row][col];  // 移动数字
//                    grid[row][col] = 0;
//                }
//            }
//        }
//    }
//}
//
//void move_right() {
//    for (int row = 0; row < ROWS; row++) {
//        int merged[COLS] = { 0 };  // 标记是否合并
//        for (int col = COLS - 2; col >= 0; col--) {
//            if (grid[row][col] != 0) {
//                int target_col = col + 1;
//                while (target_col < COLS && grid[row][target_col] == 0) {
//                    target_col++;
//                }
//                if (target_col < COLS && grid[row][target_col] == grid[row][col] && !merged[target_col]) {
//                    grid[row][target_col] *= 2;  // 合并数字
//                    grid[row][col] = 0;
//                    merged[target_col] = 1;  // 标记已合并
//                }
//                else if (grid[row][target_col - 1] == 0) {
//                    grid[row][target_col - 1] = grid[row][col];  // 移动数字
//                    grid[row][col] = 0;
//                }
//            }
//        }
//    }
//}
//
//// 处理按键输入
//void handle_input() {
//    int ch = _getch();
//    switch (ch) {
//    case 72:  // 上键
//        move_up();
//        break;
//    case 80:  // 下键
//        move_down();
//        break;
//    case 75:  // 左键
//        move_left();
//        break;
//    case 77:  // 右键
//        move_right();
//        break;
//    case 27:  // ESC 键，退出
//        exit(0);
//        break;
//    }
//    spawn_new_number();  // 每次操作后生成新的数字
//}
//
//int main() {
//    srand(time(0));  // 初始化随机数种子
//
//    spawn_new_number();  // 随机生成初始的数字
//    spawn_new_number();  // 生成第二个数字
//
//    while (!is_game_over()) {
//        system("cls");  // 清屏
//        print_table();  // 打印当前表格
//        handle_input();  // 处理用户输入
//    }
//
//    printf("Congratulations! You've reached 2048!\n");
//    return 0;
//}
//

