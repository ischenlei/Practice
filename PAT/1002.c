#include<stdio.h>

int main()
{
   char str[100];
   int b[100];
   int i, j, sum = 0;

   printf("����������");
   scanf("%s", str);

   for (i = 0, j = 0; str[i] != '\0' ; i++, j++) {      //ɨ����������֣���������b, �����λ�ʹ���sum
            b[j] = (int)str[i] - 48;
            sum = sum + b[j];
   }

   int dig = 0; //sum��λ��
   int sum2[10];
   for (i = 0; sum > 0 ; i++) {                          //��sum��ֵ��������sum2��������sum��λ��
        sum2[i] = sum % 10;
        sum = sum / 10;
        dig++;
   }

   printf("��λ��֮���ǣ�");
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
