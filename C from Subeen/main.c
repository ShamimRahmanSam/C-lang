/*



#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}











#include <stdio.h>
int main()
{
    printf("Hello World!");
    return 0;
}









#include <stdio.h>
 int main()
 {
     int a=14, b=7, s=a+b;
     printf("total is = %d", s);
     return 0;
 }









#include <stdio.h>
int main()
{
    int a = 50, b = 60, sum;
    sum = a + b;
    printf("%d + %d = %d", a, b, sum);
    return 0;
}










#include <stdio.h>
int main()
{
 int a = 1000;
    printf("Value of a is %d\n", a);
    a = -21000;
    printf("Value of a is %d\n", a);
    a = 10000000;
    printf("Value of a is %d\n", a);
    a = -10000000;
    printf("Value of a is %d\n", a);
    a = 100020004000503;
    printf("Value of a is %d\n", a);
    a = -4325987632;
    printf("Value of a is %d\n", a);
    return 0;
}















 #include<stdio.h>
 int main()
 {
     double a=10.001, b=11.7666, s=a+b;
     printf("total sum = %lf\n", s);
     printf("total sum = %.2lf\n", s);
     return 0;
 }













  #include <stdio.h>

  int main()
  {
      int a,b,s;

      scanf("%d", &a);
      scanf("%d", &b);

      s = a+b;
      printf("s is %d\n", s);
      return 0;
  }














  #include<stdio.h>
  int main()
  {
      char ch;
      printf("Write the First Letter : ");
      scanf("%c", &ch);
      printf("The First Letter of Your Name is : %c\n", ch);
      return 0;
  }





  #include <stdio.h>
int main()
{
 char ch;
 printf("Enter the first letter of your name: ");
 ch = getchar();
 printf("The first letter of your name is: %c\n", ch);
 return 0;
}














#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Please enter a number: ");
    scanf("%d", &num1);
    printf("Please enter another number: ");
    scanf("%d", &num2);
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);
    return 0;
}









#include <stdio.h>
int main()
{
    int n;
    n = 10;
    if(n >= 0) {
        printf("The number is positive\n");
 }
    else {
        printf("The number is negative\n");
 }
 return 0;
}












#include <stdio.h>
int main()
{
    int n = 10;
    if(n < 0) {
        printf("The number is negative\n");
 }
    else if (n > 0) {
        printf("The number is positive\n");
 }
    else {
        printf("The number is zero!\n");
 }
 return 0;
}












#include <stdio.h>
int main()
{
    int number, remainder;
    number = 5;
    remainder = number % 2;
    if(remainder == 0) {
        printf("The number is even\n");
 }
    else {
        printf("The number is odd\n");
 }
    return 0;
}











#include<stdio.h>

int main()
{
    int n=21;
    if(n%2==0)
    {
        printf("even");
    }
    else
        {
        printf("odd");
        }
    return 0;
}








#include <stdio.h>
int main()
{
    char ch = 'W';
    if(ch >= 'a' && ch <= 'z') {
        printf("%c is lower case\n", ch);
}
    else if(ch >= 'A' && ch <= 'Z') {
        printf("%c is upper case\n", ch);
    }
    return 0;
}












#include<stdio.h>
int main()
{
    int n=1;
    while(n<=50){
        printf("%d\n", n);
        n++;   // the output will be 1 to 50
    }
    // n++;  if we use this here instead of while loop then the output will be only 1 which will be on loop and never gonna end... it will be kinda infinite loop.
    return 0;
}












#include<stdio.h>
int main()
{
    int n=1;
    n++;
    printf("%d", n);    // the output will be 2
    return 0;
}







#include<stdio.h>
int main()
{
    int n=1;
    printf("%d", n);    // the output will be 1
    n++;                   // this n++ will not work here cause already we used printf to get the output. but if printf in while loop like the last program then n++ will work and the output will 1 which will never break as it will become a infinite loop.
    return 0;
}











#include<stdio.h>
int main()
{
    int n=1;
    while(n<=100)
    {
        printf("%d\n", n);
        n++;      // we can also use n= n+1 here

        if(n>=22)           // if we use n>22 then the output will be 1-22 but if we use n>=22 then the output will be 1-21.
            {
            break;     // we use break to break the loop after getting what we need..
            }

        //return 0;     // if we use return 0 here then the output will be 1. een break won't work also like n++... but if we use this return 0; after the while loop and in int main function then we will get the actual output;
    }
    return 0;
}













#include <stdio.h>
int main()
{
    int n = 0;
    while (n < 10)
        {
        n = n + 1;          // we can't use n++ here cause of the n%2==0 condition
        if (n % 2 == 0)    // % means modulus and this condition means if any number devided by 2 will be 0 then this program won't give that output on the main output. so the output will be 1 3 5 7 9
        {
        continue;
        }
        printf("%d\n", n);
    }
    return 0;
}









#include<stdio.h>
int main()
{
    int n=7, i=1, ans=n*i;
    while(i<=10)
    {
        printf("%d X %d = %d\n", n, i, ans); //n*i);    // without n*i the output will be 0 for everyone and we can use ans=n*i in the integer and then we can use just ans variable here to get the output. and that's how e don't need to write code like this n*i here
        i++;            // we can use i=i+1 here instead of i++
        // return 0;       // if we use return 0 here then the output will be 7x1=7 cause i++ will not be used in the loop if we use return 0 here so it should be after whie oop and in main() loop
    }
    return 0;
}










#include<stdio.h>
int main()
{
    int n=7, i;
    for(i=1; i<=10; i++)  // for(; i<=10; i++)     // if we use i=1 in integer then in for loop we have to use ; like this to get the actual output.
    {
        printf("%d X %d = %d\n", n, i, n*i);    // we can't use ans=n*i this kinda variable in the integer. e have to mention n*i here .. otherwise we can't get actual output cause in for loop condition we already give a condition about i and that's why the value of i will be changed so we have to mention n*i here to get the output.
        // return 0;   // if we use return 0 here then the output will be 7 X 1 = 112 which is illogical but followed the condition.. so we have to focus that where we should use return 0 function.. in for/ while loop or in int main() function. obvously in int main() function.
    }
    return 0;
}







#include <stdio.h>
int main()
    {
    int m, n = 5;
    int i;
    m = 0;
    for(i = 1; i <= 10; i = i + 1)
        {
         m = m + n;    // it's better to addition than multiply in coding cause addition take less time than multiplication...
         printf("%d X %d = %d\n", n, i, m);
        }
         return 0;
}










#include<stdio.h>
int main()
{
    int n,i;
    for(n=1;n<=20;n++)
    {
        for(i=1;i<=10;i++)
        {
            printf("%d X %d = %d\n", n, i, n*i);     // the output will be 1*1-1*10 to 20*10=200 .. accurate output multiplication of 1 to 20.. printf must be declared here
        }
        // printf("%d X %d = %d\n", n, i, n*i);     // the output will be 1*11 to 20*11 ... not correct.. so this printf shuld be in upper line like it is now
    }
    return 0;
}





#include <stdio.h>
int main()
{
    int a, b, c;
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <= 3; c++) {
                printf ("%d, %d, %d\n", a, b, c);
            }
        }
    }
 return 0;
}    // 4.11 from subeen's book









#include <stdio.h>
int main()
{
    int a, b, c;
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3 && b != a; b++) {
            for (c = 1; c <= 3 && c != a && c != b; c++) {
                printf ("%d, %d, %d\n", a, b, c);
            }
        }
    }
 return 0;
}               // 4.12 code from subeen's book.













#include<stdio.h>
int main()
{
    int a,b,c;
    for (a=1;a<=3;a++){
        for (b=1;b<=3;b++){
            if(b!=a){
                for(c=1;c<=3;c++){
                    if(c!=b && c!=a){
                        printf("%d, %d, %d\n",a,b,c);
                    }
                }
            } // return 0;   // if we use return here or uppper then we won't get any output
        }   //return 0;   // if we use return here then we won't get the actual output. this will give us 1, 2, 31,    3, 2
    }
    return 0;                   // got the actual output of permutation which we wanted as output
}               // 4.13 code from subeen's book











#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            for(c=1;c<=3;c++){
                if(b!=a && c!=a && c!=b)   // better condition than 4.13 code (upper one)  ... but the problem is this code will get more runtime than the upper one... but it's an easy way to get the actual output
                    {
                    printf("%d, %d, %d\n", a, b, c);
                    }
                }
        }
    }
    return 0;           // better solution of 4.13 code from subeen's book. same permutation output in a better conditional way.. btw this 4.14 code from subeen's book
}










#include<stdio.h>
int main()
{
    double x,y, x_plus_y, x_minus_y;

    printf("Enter the value of x+y: ");
    scanf("%lf", &x_plus_y);

    printf("Enter the value of x-y: ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y)/2;
    y = (x_plus_y - x_minus_y)/2;

    printf("x = %.2lf, y = %.2lf\n", x, y);
    return 0;
}                   // code 5.1    // prob solve : 1











#include<stdio.h>
int main()
{
    double x, y , p, m;

    printf("Enter the value of x+y = ");
    scanf("%lf", &p);

    printf("Enter the value of x-y = ");
    scanf("%lf", &m);

    x = (p+m)/2;
    y = (p-m)/2;

    printf("x = %.2lf,\ny = %.2lf\n", x, y);
    return 0;
}                   // practiced again 5.1 (prob solve:1)










#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,d,x,y;

    printf("a1 = ");
    scanf("%lf", &a1);

    printf("a2 = ");
    scanf("%lf", &a2);

    printf("b1 = ");
    scanf("%lf", &b1);

    printf("b2 = ");
    scanf("%lf", &b2);

    printf("c1 = ");
    scanf("%lf", &c1);

    printf("c2 = ");
    scanf("%lf", &c2);

    d = a1*b2-a2*b1;    // if we declared the value of d in the starting integer then the output won't be correct and everytime we will get this result = x&y is not determined so we should declare the value like this before the conditional loop
    if((int)d==0)
    {
        printf("x & y is not determined\n");
    }
    else
        {
            x = (b2*c1 - b1*c2)/d;
            y = (a1*c2 - a2*c1)/d;

            printf("x = %.2lf, y = %.2lf", x, y);
            //return 0;  // in this code if we use return here instead of lower line , still we could get the proper result cause of the conditional loop process
        }
        return 0;
}












#include<stdio.h>
int main()
{
    double x, y, plus=15, minus=5;
    x=(plus + minus)/2, y=(plus - minus)/2;
    printf("x is %.2lf and y is %.2lf", x, y);
    return 0;
}                   //problem solving 5.1 (if value declared in question but the better way to do this with scanf)
















#include<stdio.h>

int main()
{
    double x, y, plus, minus;

    printf("x + y = ");
    scanf("%lf", &plus);

    printf("x - y = ");
    scanf("%lf", &minus);

    x = (plus + minus)/2;
    y = (plus - minus)/2;

    printf("x = %0.2lf, y = %0.2lf\n", x, y);
    return 0;
}                       //problem solving 5.1
















#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,d,x,y;

    printf("a1 = ");
    scanf("%lf", &a1);

    printf("a2 = ");
    scanf("%lf", &a2);

    printf("b1 = ");
    scanf("%lf", &b1);

    printf("b2 = ");
    scanf("%lf", &b2);

    printf("c1 = ");
    scanf("%lf", &c1);

    printf("c2 = ");
    scanf("%lf", &c2);

    d = a1*b2-a2*b1;

    if((int)d==0)
    {
        printf("x & y can not be determined.\n");
    }
    else
    {
        x = (b2*c1-b1*c2)/d;
        y = (a1*c2-a2*c1)/d;

        printf("x = %.2lf, y = %.2lf", x, y);
    }
    return 0;

}                       // problem solving 2..  code 5.3


















#include<stdio.h>
int main()
{
    double loan_amount, interest_rate, years, total_amount, monthly_amount;

    printf("loan amount : ");
    scanf("%lf", &loan_amount);

    printf("interest rate : ");
    scanf("%lf", &interest_rate);

    printf("years : ");
    scanf("%lf", &years);

    total_amount = loan_amount+loan_amount*interest_rate/100.00;
    monthly_amount = total_amount/(years*12);

    printf("Total Amount is %.2lf\nMonthly Amount is %.2lf", total_amount, monthly_amount);
    return 0;
}                           // problem solving 3.  code 5.4


















#include<stdio.h>

int main()
{
    double loan, inrate, years, total, monthly;

    printf("loan amount : ");
    scanf("%lf", &loan);

    printf("interest rate : ");
    scanf("%lf", &inrate);

    printf("years : ");
    scanf("%lf", &years);

    total = loan + loan * inrate * years /100;         // after correction. this is the actual formulae
    monthly = total / (years*12);

    printf("Total Amount = %.2lf Taka.\nMonthly Amount = %.2lf Taka.\n", total, monthly);
    return 0;
}                           // problem solving 3. after correction..  code 5.4 (after correction)
















#include<stdio.h>

int main()
{
    double u, a , v, t, ans;

    printf("u = ");
    scanf("%lf", &u);

    printf("a = ");
    scanf("%lf", &a);

    printf("t = ");
    scanf("%lf", &t);

    v = u + a * t;
    ans = 2 * t * v;

    printf("2t = %.2lf\n", ans);
    return 0;
}               #problem solving 4...... done by me..Alhamdulillah!













#include<stdio.h>

int main()
{
    double num, sum;

    printf("last number : ");
    scanf("%lf", &num);

    sum = (num*(num+1))/2;

    printf("Total Sum = %.2lf\n", sum);
    return 0;
}                       // problem solve 5..... code 5.5









#include <stdio.h>
int main()
{
 int i, n, sum;
 scanf("%d", &n);
 for(i = 1, sum = 0; i <= n; i++)
    {
    sum = sum + i;
    }
 printf("Summation is %d\n", sum);
 return 0;
}                   // problem solve 5 in a loop way.  code 5.6












#include<stdio.h>
int main()
{
    double C,F;

    printf("Celsius : ");
    scanf("%lf", &C);

    F = (C * 1.8) + 32;

    printf("Farenheit : %.2lf\n", F);
    return 0;
}               // problem solving 6.... code 5.7 (celsius to farenheit)












#include<stdio.h>
int main()
{
    double C,F;

    printf("Farenheit : ");
    scanf("%lf", &F);

    C = (F - 32) * 5 / 9;

    printf("Celsius : %.2lf\n", C);
    return 0;
}                           // prob solve 6.1 (Farenheit to celsius by ownself )











#include<stdio.h>
int main()
{
    int a,b,x,gcd;

    scanf("%d\n%d", &a, &b);

    if(a<b)
    {
        x = a;
    }
    else
    {
        x = b;
    }

    for(;x>=1;x--)
    {
        if(a % x == 0 && b % x == 0)
           {
               gcd = x;
               break;   //without using break the output will be always 1.....
           }
    }
    printf("GCD : %d\n", gcd);
    return 0;
}                            #prob solve 7...... code 5.8















#include<stdio.h>
int main()
{
    int a,b,t,x,gcd;

    scanf("%d\n%d",&a,&b);

    if(a==0) gcd=a;
    else if(b==0) gcd=b;
    else
    {
        while(b!=0)
        {
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    printf("gcd : %d\n", gcd);
    return 0;
}                   //prob solve 7..... code 5.9 (more efficient)










#include<stdio.h>

int main() {
   int a, b, max, step, lcm;

   printf("a : ");
   scanf("%d", &a);

   printf("b : ");
   scanf("%d", &b);

   if(a > b)
      max = step = a;
   else
      max = step = b;

   while(1) {
      if(max%a == 0 && max%b == 0) {
         lcm = max;
         break;
      }

      max += step;
   }

   printf("LCM is %d", lcm);
   return 0;
}           //prob solve 7.1 ...... finding LCM ....












#include<stdio.h>
int main()
{
    int i = 0;

    for(i=0;i<10;i++)
    {
        printf("%d\n", i);          // output 0-9
        //break;       // by using break the utput will be only 0
        //return 0;    // by using return 0 here then it will give us the output of this condition only. it will not give the last printf result which is outside of this loop.
    }
    printf("%d\n", i);  //output 10
    return 0;               // by using break the output ill be 0 for this and for both printf the output will be 0 0
    // by both print the output will be 0-10
}                               // interview ques . basic by shakib bhai









#include<stdio.h>
int main()
{
    int first, second, final;
    double total;

    printf("First Term Marks : ");
    scanf("%d", &first);

    printf("Second Term Marks : ");
    scanf("%d", &second);

    printf("Final Term Marks : ");
    scanf("%d", &final);

    total = first/4.0 + second/4.0 + final/2.0;

    printf("Result : %.2lf\n", total);
    return 0;                    // code 6.1
}










#include<stdio.h>
int main()
{
    int array[5]={16,20,14,21,07};

    printf("First Element : %d\n", array[0]);
    printf("Fourth Element: %d\n", array[3]);
    printf("Last Element : %d", array[4]);

    return 0;
}                   //code 6.2














#include<stdio.h>
int main()
{
    int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    for(i=0;i<10;i++)
    {
        printf("%dth element : %d\n", i+1, array[i]);
    }
    return 0;
}                       // code 6.4







#include <stdio.h>
int main()
{
    int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;
    for(i = 9; i >= 0; i--)
        {
        printf("%d th element is: %d\n", i, ara[i]);
        }
    return 0;
}                   // opposite version of code 6.4











#include <stdio.h>
int main()
{
    int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int ara2[10];
    int i, j;

    for(i = 0, j = 9; i < 10; i++, j--)
        {
        ara2[j] = ara[i];
        }

        for(i = 0; i < 10; i++)
        {
        ara[i] = ara2[i];
        }

        for(i = 0; i < 10; i++)
        {
        printf("%dth element is : %d\n",i, ara[i]);
        }
    return 0;
}                           // code 6.5









#include <stdio.h>
int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for(i = 0, j = 9; i < 10; i++, j--)
        {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
        }
        for(i = 0; i < 10; i++)
        {
        printf("%dth element is : %d\n", i, ara[i]);
        }
    return 0;
}               //code 6.6 .. need correction












#include <stdio.h>

void reverseArrayExtraArray(int arr[], int size) {
    int reversedArr[size];
    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - i - 1];
    }

    // Print reversed array
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", reversedArr[i]);
    }
}

int main() {
    int originalArr[] = {1, 2, 3, 4, 5};
    int size = sizeof(originalArr) / sizeof(originalArr[0]);

    reverseArrayExtraArray(originalArr, size);

    return 0;
}                        // reversed array code taken from geekfromgeek








#include <stdio.h>
int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for(i = 0, j = 9; i < 10; i++, j--)
        {
        temp = ara[j];
        //ara[j] = ara[i];
        ara[i] = temp;
        }
        for(i = 0; i < 10; i++)
        {
        printf("%dth element is : %d\n", i, ara[i]);
        }
    return 0;
}               //code 6.6 .. need correction.. half proble solved . 0th-4th element solved by me. other still having issues;









#include <stdio.h>
int main()
{
    int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82,
82, 58, 69, 67, 53, 56, 71, 62},
    st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58,
69, 67, 53, 56, 71, 62, 49},
    final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64,
55, 69, 85, 81, 80, 67, 88, 71};

    int i;
    double total[40];

    for(i=0;i<40;i++)
    {
        total[i] =  ft_marks[i] / 4.0 + st_marks[i] / 4.0 +
        final_marks[i] / 2.0;
    }

    for (i=1; i<=40; i++)
    {
        printf("Roll No : %d\tTotal Marks : %0.0lf\n", i, total[i-1]);
    }
    return 0;               // code 6.7
}









#include <stdio.h>
int main()
    {
    int marks, i, count;
    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
    65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
    62, 66, 76, 70, 67, 65, 77, 63};
    for(marks = 50; marks <= 100; marks++) {
    count = 0;
    for(i = 0; i < 40; i++)
        {
        if(total_marks[i] == marks)
            {
            count++;
            }
        }
    printf("Marks: %d Count: %d\n", marks, count);
    }
    return 0;
}                   //code 6.8










#include <stdio.h>
int main()
{
    int i;
    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
    65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
    62, 66, 76, 70, 67, 65, 77, 63};

    int marks_count[101];
    for(i = 0; i < 101; i++)
        {
        marks_count[i] = 0;
        }
        for(i = 0; i < 40; i++)
        {
        marks_count[total_marks[i]]++;
        }
        for(i = 50; i <= 100; i++)
        {
        printf("Marks: %d Count: %d\n", i, marks_count[i]);
        }
        return 0;
}               //code 6.9











#include <stdio.h>
int main()
    {
    int i, j;
    int total_marks[] = {6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};
    int marks_count[11];
    for(i = 0; i < 11; i++)
        {
        marks_count[i] = 0;
        }
        for(i = 0; i < 12; i++)
        {
        marks_count[total_marks[i]]++;
        for(j = 0; j <= 10; j++)
        {
        printf("%d ", marks_count[j]);
        }
        printf("\n");
        }
    return 0;           //code 6.10
}












#include<stdio.h>

int add(double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}


int main()
{
    double a,b,c;
    a=b=2.5;
    c=add(a,b);
    printf("%.2lf\n", c);
    return 0;
}                       // code 7.2











#include<stdio.h>

double add(double n1, double n2, double n3)
{
    double sum = n1 + n2 + n3;
    return sum;
}


int main()
{
    double a,b,c,d;
    a = 2.9;
    b = 2.6;
    c = 2.1;
    d = add(a,b,c);
    printf("Sum is : %.2lf\n", d);
    return 0;
}               // code 7.3













#include<stdio.h>

double add(double x, double y);   // we have to declare the created function if we gonna write it after int main function.

int main()
{
    double a=2.8, b=2.7, c;
    c=add(a,b);
    printf("%lf/n",c);
    return 0;
}

double add(double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}                               // code 7.5











#include <stdio.h>
int test_function(int x)
{
    int y = x;
    x = 2 * y;
    return (x * y);
}

int main()
{
    int x = 10, y = 20, z = 30;
    z = test_function(x);

    printf("%d %d %d\n", x, y, z);
    return 0;
}               // code 7.6












#include <stdio.h>

double pi = 3.14;     // global variable

void my_fnc()
{
 pi = 3.1416; // it's a local variable .. changed the value of pi
 return;  // we used return there but we don't need this return cause oid doesn't return anything so it's our wish to use this return
}

int main()
{
    printf("%.2lf\n", pi);  // output will be 3.14
    my_fnc();
    printf("%.4lf\n", pi);   // output will be 3.1416
    return 0;
}












#include<stdio.h>

int fmax(int ara[], int n);

int main()
{
    int ara[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int n = 11;
    int max = fmax(ara,n);

    printf("%d\n", max);
    return 0;
}


int fmax(int ara[], int n)
{
    int max = ara[0];

    int i;

    for(i=1; i<n; i++)
    {
        if(ara[i]>max)
        {
            max = ara[i];
        }
    }
    return max;
}                               /// code 7.7













#include<stdio.h>

int fmin(int ara[], int n);

int main()
{
    int ara[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int n = 11;
    int min = fmin(ara,n);

    printf("%d\n", min);
    return 0;
}


int fmin(int ara[], int n)
{
    int min = ara[0];

    int i;

    for(i=0; i>n; i--)
    {
        if(ara[i]<min)
        {
            min = ara[i];
        }
    }
    return min;
}                               // code 7.7  min version but maybe needed some correcton. cause the out[put is -100 but it should be -132.. there's a problem in condition
                                //  need to do code for find sum, find average in free time












#include<stdio.h>
void test_function(int ara[])
{
    ara[0] = 100;
    //return;       //this return not needed to declare if we use void function
}

int main()
{
    int ara [] = {1, 2, 3, 4, 5};
    printf("%d\n", ara[0]);
    test_function(ara);
    printf("%d\n", ara[0]);
    return 0;
}











#include<stdio.h>

double area(double n1, double n2)
{
    double a = n1*n2;
    return a;
}

int main()
{
    double r,a;
    double pi = 3.14;

    printf("Pi = %.2lf\n", pi);

    printf("r = ");
    scanf("%lf", &r);

    a = area(pi,r);

    printf("circle's area : %.2lf\n", a);

    return 0;
}
                        // code 7.9 problem solving by ownself circle's area prcaticed this code by using function










#include <stdio.h>
int main()
{
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;
    int mid_indx;
    int num = 97;
    while (low_indx <= high_indx) {
        mid_indx = (low_indx + high_indx) / 2;
        if (num == ara[mid_indx]) {
            break;
        }
        if (num < ara[mid_indx]) {
            high_indx = mid_indx - 1;
            }
            else {
                low_indx = mid_indx + 1;
            }
        }
        if (low_indx > high_indx) {
            printf("%d is not in the array\n", num);
        }
        else {
            printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_indx], mid_indx);
        }
        return 0;
}                   // code 8.1 fom binary search... this is copied from the book. there's some issue cause it's showing error










#include <stdio.h>
int main()
{
 char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ', 'i', 's', ' ', 'm', 'y',
' ', 'c', 'o', 'u', 'n', 't', 'r', 'y', '.'};
 printf("%s\n", country);
 return 0;   // in string if we use like that{...} then we don't ned to ue return as compiler pick } it as string ended. an if we use '\0' in between then the string will be en there.
}











#include <stdio.h>
int main()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};
    int i, length;
    printf("%s\n", country);
    length = 10;
    for(i = 0; i < length; i++) {
    if(country[i] >= 97 && country[i] <= 122) {
        country[i] = 'A' + (country[i] - 'a');
        }
    }
    printf("%s\n", country);
    return 0;
}                   //code 9.4










#include <stdio.h>
int string_length(char str[])
{
    int i, length = 0;
    for(i = 0; str[i] != '\0'; i++) {
        length++;
        }
    return length;
    }

int main()
{
    char country[100];
    int length;
    while(1 == scanf("%s", country)) {
        length = string_length(country);
        printf("length: %d\n", length);
    }
    return 0;
}                   //code 9.5










#include <stdio.h>
int main()
{
    char ara[100];
    while(NULL != gets(ara)) {
        printf("%s\n", ara);
    }
    return 0;
}












#include<stdio.h>

int func()
{
    int x;
    for(x=0; x<50; x++)
    {
        printf("%d\n",x);
    }
    return x;
}

int main()
 {
     int x, y;

     // for(i=0;i<=20;i++)
     // {
        // if(i%2==0)
            // {
            //    continue;
          //  }
        // printf("%d\n",i);
     // }
     y = func();
     printf("%d\n", y);
     return 0;
 }                      // suddent task by shibbir bhai







 #include <stdio.h>
int main()
{
    char str1[] = "bangla", str2[] = "desh", str3[12];
    int i, j, length1 = 6, length2 = 4;
    for(i = 0, j = 0; i < length1; i++, j++) {
        str3[j] = str1[i];
        }
        for(i = 0; i < length2; i++, j++) {
            str3[j] = str2[i];
        }
    str3[j] = '\0';
    printf("%s\n", str3);
    return 0;
}









#include <stdio.h>
#include <string.h>
int main()
{
    char s[1002], word[100];
    int i, j, length, is_word_started;
    gets(s);
    length = strlen(s);
    is_word_started = 0;
    for (i = 0, j = 0; i < length; i++) { if (s[i] >= 'a' && s[i] <= 'z') {
    if (is_word_started == 0) {
    is_word_started = 1;
    word[j] = 'A' + s[i] - 'a'; // first character is capital
    j++;
    }
    else {
    word[j] = s[i];
    j++;
    }
    }
    else if (s[i] >= 'A' && s[i] <= 'Z') {
    if (is_word_started == 0) {
    is_word_started = 1;
    }
    word[j] = s[i];
    j++;
    }
    else if (s[i] >= '0' && s[i] <= '9') {
    if (is_word_started == 0) {
    is_word_started = 1;
    }
    word[j] = s[i];
    j++;
    }
    else {
        if (is_word_started == 1) {
            is_word_started = 0;
            word[j] = '\0';
            printf("%s\n", word);
            j = 0;
            }
        }
    }
    return 0;
}                   //code 9.8











#include <stdio.h>
#include <string.h>
int main()
{
    char s[1002], ch;
    int i, length, is_word_started;
    gets(s);
    length = strlen(s);
    is_word_started = 0;
    for (i = 0; i < length; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (is_word_started == 0) {
                is_word_started = 1;
                ch = 'A' + s[i] - 'a';
                printf("%c", ch);
                }
                else {
                    printf("%c", s[i]);
                    }
                }
                else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
                    if (is_word_started == 0) {
                        is_word_started = 1;
                        }
                        printf("%c", s[i]);
                        }
                        else {
                        if (is_word_started == 1) {
                        is_word_started = 0;
                        printf("\n");
                    }
                }
            }
    printf("\n");
    return 0;
}
        //code 9.9











#include<stdio.h>

int prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    while(1)
    {
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d", &n);
        if(n==0)
        {
        break;
        }
        if(1==prime(n))
        {
        printf("%d is a prime number.\n", n);
        }
        else
        {
        printf("%d is not a prime number.\n", n);
        }
    }
    return 0;
}                   // code 10.1 .. it's not efficient way












#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
    int i, root;
    if(n == 2) {
        return 1;
        }
    if(n % 2 == 0) {
        return 0;
        }
    root = sqrt(n);
    for(i = 3; i <= root; i = i + 2) {
    if(n % i == 0) {
        return 0;
        }
    }
    return 1;
}

int main()
{
    int n, m;
    while(1) {
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d", &n);
        if(n == 0) {
            break;
            }
        if(1 == is_prime(n)) {
            printf("%d is a prime number.\n", n);
            }
            else {
                printf("%d is not a prime number.\n", n);
            }
        }
    return 0;
}                   //code 10.1  efficient way










*/
















