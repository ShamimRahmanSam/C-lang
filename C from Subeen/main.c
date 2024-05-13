/*


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
    a = 100020004000503;    // output will not be proper cause of int number range
    printf("Value of a is %d\n", a);
    a = -4325987632;            //  output will not be proper cause of int number range
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
    if(n >= 0)
    {
        printf("The number is positive\n");
    }
    else
    {
        printf("The number is negative\n");
    }
    return 0;
}












#include <stdio.h>
int main()
{
    int n = 10;
    if(n < 0)
    {
        printf("The number is negative\n");
    }
    else if (n > 0)
    {
        printf("The number is positive\n");
    }
    else
    {
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
    if(remainder == 0)
    {
        printf("The number is even\n");
    }
    else
    {
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
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case\n", ch);
    }
    return 0;
}











#include<stdio.h>
int main()
{
    int n=1;
    while(n<=50)
    {
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

        //return 0;     // if we use return 0 here then the output will be 1. then break won't work also like n++... but if we use this return 0; after the while loop and in int main function then we will get the actual output;
    }
    return 0; //output will be 1-21
}













#include <stdio.h>
int main()
{
    int n = 0;
    while (n < 10)
        {
        n = n + 1;          // we can't use n++ here cause of the n%2==0 condition
        if (n % 2 == 0)    // % means modulus and this condition means if any number divided by 2 will be 0 then this program won't give that output on the main output. so the output will be 1 3 5 7 9
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
    for (a = 1; a <= 3; a++)
    {
        for (b = 1; b <= 3; b++)
        {
            for (c = 1; c <= 3; c++)
            {
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
    for (a = 1; a <= 3; a++)
    {
        for (b = 1; b <= 3 && b != a; b++)
        {
            for (c = 1; c <= 3 && c != a && c != b; c++)
            {
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
    for (a=1;a<=3;a++)
    {
        for (b=1;b<=3;b++)
        {
            if(b!=a)
            {
                for(c=1;c<=3;c++)
                {
                    if(c!=b && c!=a)
                    {
                        printf("%d, %d, %d\n",a,b,c);
                    }
                }
            } // return 0;   // if we use return here or upper then we won't get any output
        }   //return 0;   // if we use return here then we won't get the actual output. this will give us 1, 2, 3, 1, 3, 2
    }
    return 0;                   // got the actual output of permutation which we wanted as output
}               // 4.13 code from subeen's book











#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=3;b++)
        {
            for(c=1;c<=3;c++)
            {
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
}               #problem solving 4...... done by me.













#include<stdio.h>

int main()
{
    int num, sum;

    printf("last number : ");
    scanf("%d", &num);

    sum = (num*(num+1))/2;

    printf("Total Sum = %d\n", sum);
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
}                   // prob solve: (Farenheit to celsius by ownself )




















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
    int a,b,t,gcd;

    scanf("%d\n%d",&a,&b);

    if(a==0)
    {
        gcd=a;
    }
    else if(b==0)
    {
        gcd=b;
    }
    else
    {
        while(b!=0)
        {
            t=b;        // t=temp
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
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    printf("GCD: %d\n", gcd);
    return 0;
}                   // more efficient format for 5.9 code












#include<stdio.h>
int main()
{
    int a,b,temp,gcd;
    scanf("%d %d",&a,&b);

    if(a==0 || b==0 )
    {
        gcd=0;
    }
    else if(a==1 || b==1)
    {
        gcd=1;
    }
    else
    {
        while(b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
        gcd=a;
    }
    printf("GCD is %d\n", gcd);
    return 0;
}                   // done by me quite differently by using new conditions ..










#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a%b);     //recursive call.. recursion example and an easy way to get gcd by creating function and with euclidean algorithm
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}













#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
















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
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int ara2[10];
    int i, j;

    for(i=0, j=9; i<10; i++, j--)
    {
        ara2[j] = ara[i];
    }

    for(i=0; i<10; i++)
    {
        ara[i] = ara2[i];
        printf("%dth element is : %d\n",i, ara[i]);
    }
    return 0;
}                           // code 6.5














#include <stdio.h>
int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for(i=0, j=9; i<10; i++, j--)
    {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }
    for(i=0; i<10; i++)
    {
        printf("%d\n", ara[i]);
    }
    return 0;
}               // code 6.6   (6.5 but without using 2nd array











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
    double total;

    for(i=0;i<40;i++)
    {
        total =  ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
        printf("Roll No : %d\tTotal Marks : %0.0lf\n", i + 1, total);
    }
    return 0;               // code 6.7 in one loop and in a better way
}













#include <stdio.h>
int main()
    {
    int marks, i, count;
    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
    65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
    62, 66, 76, 70, 67, 65, 77, 63};
    for(marks = 50; marks <= 100; marks++)
    {
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














//understanding of temp and count

#include <stdio.h>

int main() {
    int temp; // Declare a variable named temp
    int count; // Declare a variable named count

    // Initialize count to 0
    count = 0;

    // Use a loop to perform some operations
    for (int i = 0; i < 10; i++) {
        // Generate a temporary value based on the loop counter
        temp = i * 2;

        // Increment the count
        count++;

        // Print the temporary value and count
        printf("Temporary Value: %d, Count: %d\n", temp, count);
    }

    return 0;
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

double add(double n1, double n2);   // we have to declare the created function if we gonna write it after int main function.

int main()
{
    double a=2.8, b=2.7, c;
    c=add(a,b);
    printf("%lf\n",c);
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
}               // code 7.6   outpput 10 20 200













#include <stdio.h>

int x = 10, y = 20, z = 30;
int test_function(int x)
{
    x = 20, y = 40, z = 30;
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
}               // code 7.6 did differently .. output 10 20 800













#include <stdio.h>

double pi = 3.14;     // global variable

void my_fnc()
{
 pi = 3.1416; // it's a local variable .. changed the value of pi
 return;  // we used return there but we don't need this return cause void doesn't return anything so it's our wish to use this return
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
}                               // code 7.7
















#include <stdio.h>

// Function to find the minimum value in an array
int findMin(int arr[], int size) {
    int min = arr[0]; // Assume the first element as the minimum

    // Iterate through the array
    for (int i = 1; i < size; i++) {
        // Update min if current element is smaller
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min; // Return the minimum value
}

int main() {
    int arr[] = {4, 7, 2, 9, 1, 5, 8}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to find the minimum value
    int min = findMin(arr, size);

    // Print the minimum value
    printf("Minimum value in the array: %d\n", min);

    return 0;
}













#include <stdio.h>

// Function to find the sum of elements in an array
int findSum(int arr[], int size) {
    int sum = 0; // Initialize sum to zero

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        // Add each element to the sum
        sum += arr[i];
    }

    return sum; // Return the sum
}

int main() {
    int arr[] = {4, 7, 2, 9, 1, 5, 8}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to find the sum of elements
    int sum = findSum(arr, size);

    // Print the sum of elements
    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}















#include <stdio.h>

// Function to find the sum of elements in an array
int findSum(int arr[], int size) {
    int sum = 0; // Initialize sum to zero

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        // Add each element to the sum
        sum += arr[i];
    }

    return sum; // Return the sum
}

// Function to find the average of elements in an array
double findAverage(int arr[], int size) {
    // Calculate the sum of elements using the findSum function
    int sum = findSum(arr, size);

    // Calculate the average
    double average = (double)sum / size;

    return average; // Return the average
}

int main() {
    int arr[] = {4, 7, 2, 9, 1, 5, 8}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to find the average of elements
    double average = findAverage(arr, size);

    // Print the average of elements
    printf("Average of elements in the array: %.2lf\n", average);

    return 0;
}














// Array facts practice all in one type without function

#include <stdio.h>

int main()
{
 	int myNumbers[] = {7, 100, 23, 50, 6, 21, 100, 3, 50, 1000};

	int length, firstElement, sixthElement, lastElement;

    int maxNumber, minNumber = myNumbers[0];

	length = sizeof(myNumbers)/sizeof(myNumbers[0]);

    firstElement = myNumbers[0];
    sixthElement = myNumbers[5];

    lastElement = myNumbers[length - 1];


    for (int i = 0; i < length; i++)
        {
            if (myNumbers[i] > maxNumber)
                {
                    maxNumber = myNumbers[i];
                }
            else if (myNumbers[i] < minNumber)
                {
                    minNumber = myNumbers[i];
                }
        }


    printf("Array Length : %d\n\n", length);

    printf("First Element is : %d\n", firstElement);
    printf("Sixth Element is : %d\n", sixthElement);
    printf("Last Element is : %d\n\n\n", lastElement);

    printf("The maximum integer number in the array is: %d\n", maxNumber);
    printf("The minimum integer number in the array is: %d\n\n", minNumber);

    return 0;
}














// all in one max min sum average from an array

#include <stdio.h>

int arr[] = {3, 4, 6, 7, 14, 16, 21, 23, 99, 298};   // global array declaration

// Function to find the maximum value in an array
int findMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element as the maximum

    // Iterate through the array
    for (int i = 1; i < size; i++) {
        // Update max if current element is greater
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max; // Return the maximum value
}

// Function to find the minimum value in an array
int findMin(int arr[], int size) {
    int min = arr[0]; // Assume the first element as the minimum

    // Iterate through the array
    for (int i = 1; i < size; i++) {
        // Update min if current element is smaller
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min; // Return the minimum value
}

// Function to find the sum of elements in an array
int findSum(int arr[], int size) {
    int sum = 0; // Initialize sum to zero

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        // Add each element to the sum
        sum += arr[i];
    }

    return sum; // Return the sum
}

// Function to find the average of elements in an array
double findAverage(int arr[], int size) {
    // Calculate the sum of elements using the findSum function
    int sum = findSum(arr, size);

    // Calculate the average
    double average = (double)sum / size;

    return average; // Return the average
}

int main() {
    //int arr[] = {4, 7, 2, 9, 1, 5, 8}; // Sample array .. I can declare the array elements in here(local) and global way as I did in this code

    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the functions to find max, min, sum, and average
    int max = findMax(arr, size);
    int min = findMin(arr, size);
    int sum = findSum(arr, size);
    double average = findAverage(arr, size);

    // Print the results
    printf("Maximum value in the array: %d\n", max);
    printf("Minimum value in the array: %d\n", min);
    printf("Sum of elements in the array: %d\n", sum);
    printf("Average of elements in the array: %.2lf\n", average);

    return 0;
}














#include <stdio.h>

int globalArray[5] = {1, 2, 3, 4, 5}; // Global array

void function() {
    int localArray[3] = {6, 7, 8}; // Local array
    printf("Global array inside function: %d\n", globalArray[0]); // Accessing global array inside function
    printf("Local array inside function: %d\n", localArray[0]); // Accessing local array inside function
}

int main() {
    int localArray[2] = {9, 10}; // Local array
    printf("Global array in main: %d\n", globalArray[0]); // Accessing global array in main
    printf("Local array in main: %d\n", localArray[0]); // Accessing local array in main
    function();
    return 0;
}
















#include <stdio.h>

int Array[5] = {1, 2, 3, 4, 5}; // Global array

void function()
{
    int Array[3] = {6, 7, 8}; // Local array
    printf("Global array inside function not working for local array: %d\n\n", Array[0]); // output will be 6
    printf("If I don't print this inside function array elements then the output will come from Global Array Elements.\n\n");
}

int main()
{
    int Array[2] = {9, 10}; // Local array
    printf("Global and inside function's array is not working for local variable in main cause of main() array[] and the output : %d\n\n", Array[0]); // output 9
    function();
    return 0;
}















#include <stdio.h>

// Function to calculate the area of a circle
double calculateArea(double radius) {
    const double PI = 3.14159; // Define PI constant
    double area = PI * radius * radius; // Calculate area using formula A = πr^2
    return area; // Return the calculated area
}

int main()
{
    double radius, area;

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Call the function to calculate the area
    area = calculateArea(radius);

    // Print the result
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);

    return 0;
}
















#include<stdio.h>
void test_function(int ara[])
{
    ara[0] = 100;
    return;
}
int main()
{
    int ara [] = {1, 2, 3, 4, 5};
    printf("%d\n", ara[0]);    //output 1

    test_function(ara);
    printf("%d\n", ara[0]);  // output 100

    return 0;
}     //code 7.8















#include <stdio.h>

int main() {
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;   // if we don't know the size of array then  int right = size - 1;
    int mid_indx;
    int num;
    scanf("%d", &num);

    while (low_indx <= high_indx)
        {
            mid_indx = (low_indx + high_indx) / 2;

            if (num == ara[mid_indx])
            {
                break;
            }

            if (num < ara[mid_indx])
            {
                high_indx = mid_indx - 1;
            }
            else
            {
                low_indx = mid_indx + 1;
            }
        }

        if (low_indx > high_indx)
        {
            printf("%d is not in the array\n", num);
        }
        else
        {
            printf("%d is found in the array. It is the %dth element of the array.\n", ara[mid_indx], mid_indx);
        }
    return 0;               // code 8.1 by while loop
}













#include <stdio.h>

int main() {
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;   // if we don't know the size of array then  int right = size - 1;
    int mid_indx;
    int num;
    scanf("%d", &num);

    for (; low_indx <= high_indx; )
        {
            mid_indx = (low_indx + high_indx) / 2;

            if (num == ara[mid_indx])
            {
                break;
            }
            if (num < ara[mid_indx])
            {
                high_indx = mid_indx - 1;
            }
            else
            {
                low_indx = mid_indx + 1;
            }
        }

        if (low_indx > high_indx)
        {
            printf("%d is not in the array\n", num);
        }
        else
        {
            printf("%d is found in the array. It is the %dth element of the array.\n", ara[mid_indx], mid_indx);
        }

    return 0;
}                       // code 8.1 (using for loop instead of while loop






















#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the key is present at the middle
        if (arr[mid] == key) {
            return mid;
        }

        // If the key is smaller, ignore the right half
        else if (arr[mid] > key) {
            right = mid - 1;
        }

        // If the key is larger, ignore the left half
        else {
            left = mid + 1;
        }
    }

    // If the key is not found, return -1
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index;

    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Call binarySearch function to search for the key
    index = binarySearch(arr, size, key);

    if (index != -1) {
        printf("Key found at index %d\n", index);
    } else {
        printf("Key not found\n");
    }

    return 0;
}                   // 8.1 binary search with a function








// withot function binary search
#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int left = 0;
    int right = size - 1;
    int index = -1; // Initialize index to -1, indicating not found

    // Perform binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If target is found at mid
        if (arr[mid] == target) {
            index = mid;
            break;
        }

        // If target is smaller, ignore right half
        else if (arr[mid] > target) {
            right = mid - 1;
        }

        // If target is larger, ignore left half
        else {
            left = mid + 1;
        }
    }

    // Print result
    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}











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














#include <stdio.h>
int main()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y', '.'};
    printf("%s\n", country);
    return 0;   // in string if we use like that{...} then we don't ned to ue return as compiler pick } it as string ended. an if we use '\0' in between then the string will be end there.
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
int string_length(char country[])
{
    int i, length = 0;
    for(i = 0; country[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char country[100];
    int length;
    while(1 == scanf("%s", &country))
    {
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
}               //code 9.6












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
 }                      // suddent instant task by shibbir bhai















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















#include<stdio.h>
int main()
{
   int marks[4][10] = {{80, 70, 92, 78, 58, 83, 85, 66, 99, 81}, {75, 67,
55, 100, 91, 84, 79, 61, 90, 97}, {98, 67, 75, 89, 81, 83, 80, 90, 88, 77},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    int col;

    for(col=0;col<10;col++)
    {
        marks[3][col] = marks[0][col] / 4.0 + marks[1][col] / 4.0 + marks[2][col] / 2.0;
        printf("Roll NO: %d Total Marks: %d\n", col+1, marks[3][col]);
    }
    return 0;
}               //code 11.1
















#include <stdio.h>
int main()
{
    int namta[10][10];
    int row, col;
    for (row = 0; row < 10; row++)
        {
            for(col = 0; col < 10; col++)
            {
                namta[row][col] = (row + 1) * (col + 1);
            }
        }

    for (row = 0; row < 10; row++)
    {
        for(col = 0; col < 10; col++)
        {
            printf("%d x %d = %d\n", (row + 1), (col + 1), namta[row][col]);
        }
        printf("\n");
    }
    return 0;
}                       //code 11.2














#include <stdio.h>
int main()
{
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int row;
    for (row = 0; row < 7; row++)
        {
            printf("%s\n", saarc[row]);
        }
    return 0;               // code 11.3
}












#include <stdio.h>
#include <string.h>
int main()
{
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int row, col, name_length;
    for (row = 0; row < 7; row++)
        {
            name_length = strlen(saarc[row]);
            for(col = 0; col < name_length; col++)
            {
                printf("%c ", saarc[row][col]);
            }
    printf("\n");
    }
    return 0;
                        // code 11.4















#include <stdio.h>
#include <string.h>
int main()
{
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int row, col, name_length;
    for (row = 0; row < 7; row++)
        {
            name_length = strlen(saarc[row]);
            for(col = 0; col < name_length; col++)
            {
                printf("(%d, %d) = %c, ", row, col, saarc[row][col]);
            }
        printf("\n");
    }
    return 0;
}                               // code 11.5

















#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter the number of rows and column\n");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nElements in the matrix are \n");
    for(int i=0;i<m;i++)
   {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nRow Sum....\n");
    for(int i=0;i<m;i++)
    {
        int rsum=0;
        for(int j=0;j<n;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("\nSum of all the elements in row %d is %d\n",i,rsum);
    }
    printf("\nColumn Sum....\n");
    for(int i=0;i<m;i++)
    {
        int csum=0;
        for(int j=0;j<n;j++)
        {
            csum=csum+arr[j][i];
        }
        printf("\nSum of all the elements in column %d is %d\n",i,csum);
    }
    return 0;
}                       // 11.6.0 by ownself















#include <stdio.h>
#include <string.h>
int main()
{
    int ara1[5][5] = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}, {100, 200, 300, 400, 500}, {1000, 2000, 3000, 4000, 5000}, {10000, 20000, 30000, 40000, 50000}};
    int ara2[5][5];
    int r, c;
    printf("Content of first array (ara1): \n");
    for (r = 0; r < 5; r++)
        {
            for(c = 0; c < 5; c++)
            {
                printf("%d ", ara1[r][c]);
                ara2[c][r] = ara1[r][c];
            }
        printf("\n");
        }
    printf("\n");

    printf("Content of second array (ara2): \n");
    for (r = 0; r < 5; r++)
        {
            for(c = 0; c < 5; c++)
                {
                    printf("%d ", ara2[r][c]);
                }
            printf("\n");
        }

    return 0;
}                   // code 11.6















*/





