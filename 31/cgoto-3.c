#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int size = 10;
int prog[size + 1];

void gen_prog() {
    for (int c = 0; c != size; c++) {
        prog[c] = rand() % 3;
    }
}

void exec_prog() {
    prog[size] = 3;
    
    void* ops[] = {&&op0, &&op1, &&op2, &&eop};

    int c = 0;
    goto *ops[prog[c++]];
    op0:
        printf("0\n");
        goto *ops[prog[c++]];
    op1:
        printf("1\n");
        goto *ops[prog[c++]];
    op2:
        printf("2\n");
        goto *ops[prog[c++]];
    eop:
        NULL;
}

int main() {
    srand(time(NULL));

    gen_prog();
    exec_prog();
}
