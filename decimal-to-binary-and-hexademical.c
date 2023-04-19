#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimalNum) {
    int binaryNum[32];
    int i = 0;
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimalNum) {
    char hexNum[32];
    int i = 0;
    while (decimalNum > 0) {
        int remainder = decimalNum % 16;
        if (remainder < 10) {
            hexNum[i] = remainder + 48;
        } else {
            hexNum[i] = remainder + 55;
        }
        decimalNum /= 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexNum[j]);
    }
    printf("\n");
}

int main() {
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    printf("Binary equivalent: ");
    decimalToBinary(decimalNum);
    printf("Hexadecimal equivalent: ");
    decimalToHexadecimal(decimalNum);
    return 0;
}
