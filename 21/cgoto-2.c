#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int size = 10;
int prog[size];

void op0() {
    printf("0\n");
}

void op1() {
    printf("1\n");
}

void op2() {
    printf("2\n");
}

void gen_prog() {
    for (int c = 0; c != size; c++) {
        prog[c] = rand() % 3;
    }
}

void exec_prog() {
    void (*ops[])() = {op0, op1, op2};
    
    for (int c = 0; c != 10; c++) {        
        ops[prog[c]]();
    }
}

int main() {
    srand(time(NULL));
    
    gen_prog();
    exec_prog();
}
