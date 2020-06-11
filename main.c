#include <stdio.h>
//MrHaddis
//https://github.com/MrHaddis/PAT1012

int main() {
    //每个输入的值
    int number = 0;
    //获取多少次输入
    int numberSize = 0;
    //A4的平均值
    double averageA4;
    scanf("%d", &numberSize);
    //边界条件
    if (numberSize > 1000) {
        return 0;
    }
    //A1~A5的结果
    int resultA1 = 0;
    int resultA2 = 0;
    int resultA3 = 0;
    double resultA4 = 0.0;
    int resultA5 = 0;
    //记录
    int indexA1 = 0;
    int indexA2 = 0;
    int indexA4 = 0;
    //循环
    for (int i = 0; i < numberSize; i++) {
        scanf("%d", &number);
        //A1
        if (number % 10 == 0) {
            resultA1 += number;
            indexA1++;
        }
        //A2
        if (number % 5 == 1) {
            if (indexA2 == 2) {
                resultA2 -= number;
                indexA2 = 1;
            } else {
                resultA2 += number;
                indexA2 = 2;
            }
        }
        //A3
        if (number % 5 == 2) {
            resultA3++;
        }
        //A4
        if (number % 5 == 3) {
            indexA4++;
            resultA4 += number;
        }
        //A5
        if (number % 5 == 4) {
            if (number > resultA5) {
                resultA5 = number;
            }
        }
    }
    //输出
    if (indexA1 > 0) {
        printf("%d ", resultA1);
    } else {
        printf("N ");
    }
    //这里需要注意的是有可能结果是0的存在，这时不能输出N
    if (indexA2 > 0) {
        printf("%d ", resultA2);
    } else {
        printf("N ");
    }
    if (resultA3 == 0) {
        printf("N ");
    } else {
        printf("%d ", resultA3);
    }
    if (resultA4 == 0) {
        printf("N ");
    } else {
        //求平均值
        averageA4 = resultA4 / indexA4;
        printf("%.1f ", averageA4);
    }
    if (resultA5 == 0) {
        printf("N");
    } else {
        printf("%d", resultA5);
    }
    return 0;
}
