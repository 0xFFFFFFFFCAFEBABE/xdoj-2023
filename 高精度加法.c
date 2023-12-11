#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <minmax.h>

#define MAX_BITS 1000
char input1[MAX_BITS] = {0};
char input2[MAX_BITS] = {0};

void reverse(char *input, unsigned int size) {
    //reverse
    for (int i = 0; i < size / 2; i++) {
        input[i] ^= input[size - i - 1];
        input[size - i - 1] ^= input[i];
        input[i] ^= input[size - i - 1];
    }
}

void padding(char *input, unsigned int size, unsigned maxSize) {
    if (maxSize <= 10000 && size < maxSize) {
        //padding
        for (int i = size; i < maxSize; i++) {
            input[i] = '0';
        }
    }
}

int calcNum(char num) {
    if (num >= '0' && num <= '9') {
        return num - '0';
    }
    return 0;
}

char calcChar(unsigned int num) {
    if (num <= 9) {
        return '0' + num;
    }
    return '0';
}

int main() {
    memset(input1, 0, MAX_BITS);
    memset(input2, 0, MAX_BITS);
    scanf("%s", &input1);
    scanf("%s", &input2);
    unsigned int length1, length2;

    length1 = strlen(input1);
    length2 = strlen(input2);

    reverse(input1, length1);
    reverse(input2, length2);

    unsigned maxSize = max(length1, length2);
    padding(input1, length1, maxSize);
    padding(input2, length2, maxSize);

    unsigned int carryFlag = 0;
    for (int i = 0; i < maxSize; i++) {
        unsigned int proc = calcNum(input1[i]) + calcNum(input2[i]) + carryFlag;
        carryFlag = proc / 10;
        proc %= 10;
        input1[i] = calcChar(proc);
    }

    if (carryFlag != 0) {
        input1[maxSize] = calcChar(carryFlag);
        maxSize++;
    }

    reverse(input1, maxSize);
    printf("%s", input1);
    return 0;
}
