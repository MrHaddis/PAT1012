#include <stdio.h>
//MrHaddis

void printResult();

int main() {
    int number = 0;
    int numberSize = 0;
    float averageA4;
    scanf("%d", &numberSize);
    if (numberSize > 1000) {
        return 0;
    }
    int resultA1 = 0;
    int resultA2 = 0;
    int resultA3 = 0;
    int resultA4 = 0;
    int resultA5 = 0;
    int indexA2 = 0;
    int indexA4 = 0;
    for (int i = 0; i < numberSize; i++) {
        scanf("%d", &number);
        if (number % 5 == 0 && number % 2 == 0) {
            resultA1 += number;
        }
        if (number % 5 == 1) {
            if (indexA2) {
                resultA2 -= number;
                indexA2 = 0;
            } else {
                resultA2 += number;
                indexA2 = 1;
            }
        }
        if (number % 5 == 2) {
            resultA3++;
        }
        if (number % 5 == 3) {
            indexA4++;
            resultA4 += number;
        }
        if (number % 5 == 4) {
            if (number > resultA5) {
                resultA5 = number;
            }
        }
    }
    printResult(resultA1);
    printResult(resultA2);
    printResult(resultA3);

    if (resultA4 == 0) {
        printf("N ");
    } else {
        averageA4 = (float) resultA4 / (float) indexA4;
        printf("%.1f ", averageA4);
    }
    if (resultA5 == 0) {
        printf("N");
    } else {
        printf("%d", resultA5);
    }
    return 0;
}

void printResult(int input) {
    if (input == 0) {
        printf("N ");
    } else {
        printf("%d ", input);
    }
}
