#include<stdio.h>

int main()
{
   char str[100];
   int b[100];
   int i, j, sum = 0;

   printf("输入整数：");
   scanf("%s", str);

   for (i = 0, j = 0; str[i] != '\0' ; i++, j++) {      //扫描输入的数字，存入数组b, 并求各位和存入sum
            b[j] = (int)str[i] - 48;
            sum = sum + b[j];
   }

   int dig = 0; //sum的位数
   int sum2[10];
   for (i = 0; sum > 0 ; i++) {                          //把sum的值存入数组sum2，并计算sum的位数
        sum2[i] = sum % 10;
        sum = sum / 10;
        dig++;
   }

   printf("各位数之和是：");
   int count = dig;
   for (i = dig - 1; i >= 0; i--) {
        switch (sum2[i]) {
                case 0: printf("ling");
                        break;
                case 1: printf("yi");
                        break;
                case 2: printf("er");
                        break;
                case 3: printf("san");
                        break;
                case 4: printf("si");
                        break;
                case 5: printf("wu");
                        break;
                case 6: printf("liu");
                        break;
                case 7: printf("qi");
                        break;
                case 8: printf("ba");
                        break;
                case 9: printf("jiu");
                        break;
        }
        count--;
        if (count > 0)
            printf(" ");
   }

   return 0;
}
