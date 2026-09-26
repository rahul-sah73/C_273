// 2.Write a program to accept a decimal number and convert it to binary,
// octal and hexadecimal. Write separate functions.

#include <stdio.h>
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }
    int binary[32], index = 0;
    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

void decimalToOctal(int decimal) {
    if (decimal == 0) {
        printf("Octal: 0\n");
        return;
    }
    int octal[32], index = 0;
    while (decimal > 0) {
        octal[index++] = decimal % 8;
        decimal /= 8;
    }
    printf("Octal: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
}

void decimalToHexadecimal(int decimal) {
    if (decimal == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }
    char hexadecimal[32];
    int index = 0;
    while (decimal > 0) {
        int remainder = decimal % 16;   
        if (remainder < 10) {
            hexadecimal[index++] = remainder + '0';
        } else {
            hexadecimal[index++] = remainder - 10 + 'A';
        }
        decimal /= 16; 
    }
    printf("Hexadecimal: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    decimalToBinary(decimal);
    decimalToOctal(decimal);
    decimalToHexadecimal(decimal);
    
    return 0;
}