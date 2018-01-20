#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int size = 10;
int prog[size];

void gen_prog() {
    for (int c = 0; c != size; c++) {
        prog[c] = rand() % 3;
    }
}

void exec_prog() {
    for (int c = 0; c != size; c++) {
        switch(prog[c]) {
            case 0:
                printf("0\n");
                break;
            case 1:
                printf("1\n");
                break;
            case 2:
                printf("2\n");
                break;
        }
    }
}

int main() {
    srand(time(NULL));
    
    gen_prog();
    exec_prog();
}
