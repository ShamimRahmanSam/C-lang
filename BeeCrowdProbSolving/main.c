/*

// problem solving from BeeCrowd





#include <stdio.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}                   // prob Bee 1000 	Hello World!











#include<stdio.h>
int main()
{
    int A,B,X;
    scanf("%d %d", &A, &B);
    X = A + B;
    printf("X = %d\n", X);
    return 0;
}     // prob Bee 1001   Extremely Basic











#include<stdio.h>
int main()
{
    double R, A;
    scanf("%lf", &R);
    A = 3.14159 * R * R;
    printf("A=%.4lf\n", A);
    return 0;
}               // prob Bee 1002  Area of a Circle










#include<stdio.h>
int main()
{
    int A,B,SOMA;
    scanf("%d %d", &A, &B);

    SOMA = A+B;
    printf("SOMA = %d\n", SOMA);
    return 0;
}               // prob bee  1003  Simple Sum











#include<stdio.h>
int main()
{
    int i,j,PROD;
    scanf("%d %d", &i, &j);

    PROD = i*j;
    printf("PROD = %d\n", PROD);
    return 0;
                //  prob bee  1004  Simple Product
}










#include<stdio.h>
int main()
{
    double A,B,M;
    scanf("%lf %lf", &A, &B);

    M = ((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("MEDIA = %.5lf\n", M);
    return 0;
}                   //  prob bee 1005  Average 1












#include<stdio.h>
int main()
{
    double A,B,C,M;
    scanf("%lf %lf %lf",&A,&B,&C);
    M = ((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1lf\n", M);
    return 0;
}            //  prob bee  1006  Average 2










#include<stdio.h>
int main()
{
    int A,B,C,D,E;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    E = (A*B-C*D);
    printf("DIFERENCA = %d\n", E);
    return 0;
}               //  prob bee 1007 Difference














#include<stdio.h>
int main()
{
    int number, hours;
    float amount, salary;
    scanf("%d %d", &number, &hours);
    scanf("%f", &amount);
    salary = hours*amount;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}                //  prob bee 1008 Salary















#include<stdio.h>
int main()
{
    char name[100];
    double salary, proMoney, bonus, total;
    scanf("%s",&name);
    scanf("%lf %lf", &salary, &proMoney);
    bonus = proMoney * 0.15;
    total = salary + bonus;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;     //  prob bee 1009 Salary with bonus
}











#include<stdio.h>
int main()
{
    int p1,p2,unit1,unit2;
    double price1,price2,p1multi,p2multi,fvalue;

    scanf("%d %d %lf",&p1,&unit1,&price1);
    scanf("%d %d %lf",&p2,&unit2,&price2);

    p1multi = unit1 * price1;
    p2multi = unit2 * price2;

    fvalue = (p1multi + p2multi);

    printf("VALOR A PAGAR: R$ %.2lf\n", fvalue);
    return 0;
}                   //  prob bee 1010 Simple Calculate















#include<stdio.h>
int main()
{
    double pi, r, volume;
    pi=3.14159;
    scanf("%lf", &r);
    volume = ((4/3.0)*pi*(r*r*r));
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}               // prob bee 1011  sphere
















#include <stdio.h>
int main()
{
    double A,B,C,triang,circ,trap,quadr,rectan;
    scanf("%lf %lf %lf",&A,&B,&C);

    triang = A*C/2;
    circ = 3.14159*C*C;
    trap = C*(A+B)/2;
    quadr = B*B;
    rectan = A*B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triang,circ,trap,quadr,rectan);
    return 0;
}                       // prob bee 1012  Area












#include<stdio.h>
int main()
{
    int a,b,c,ab,abc;
    scanf("%d %d %d",&a,&b,&c);
    ab = (a+b+abs(a-b))/2;
    abc = (ab+c+abs(ab-c))/2;
    printf("%d eh o maior\n",abc);
    return 0;
}            // prob bee 1013  The greatest













#include<stdio.h>
int main()
{
    int x;
    double y, con;
    scanf("%d %lf",&x,&y);

    con = x/y;

    printf("%.3lf km/l\n", con);
    return 0;
}               // prob bee 1014  consumption
















#include<math.h>
#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,distance;
    scanf("%f %f\n %f %f",&x1,&y1,&x2,&y2);

    distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("%.4f\n",distance);
    return 0;
}                   //prob bee 1015  Distance Between Two Points















#include<stdio.h>
int main()
{
    int x,t;
    scanf("%d",&x);
    t = x*2;
    printf("%d minutos\n",t);
    return 0;
}                   //prob bee 1016   Distance














#include<stdio.h>
int main()
{
    int time, speed;
    double liters, fuel=12;
    scanf("%d %d",&time,&speed);
    liters = (time*speed)/fuel;
    printf("%.3lf\n", liters);
    return 0;
}               // prob bee 1017  Fuel Spent
















#include<stdio.h>
int main()
{
    int n, div, remain, i;
    int ara[7] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &n);

    if(n>0 && n<1000000)
        {
            printf("%d\n", n);

    for(i = 0; i < 7; i++)
        {
            div = n/ara[i];
            remain = n%ara[i];
            n = remain;
            printf("%d nota(s) de R$ %d,00\n", div, ara[i]);
        }
    }
    return 0;
}                   // prob bee  1018	Banknotes















#include <stdio.h>

int main()
{
    int seconds, hours, minutes;

    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds-(hours * 3600))/ 60;
    seconds = seconds - (minutes * 60);

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}               // prob bee 1019 Time Conversion















#include<stdio.h>

int main()
{
    int years, months, days;

    scanf("%d", &days);

    years = days / 365;

    months = days % 365 / 30;

    days = days % 365 % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}                       // prob bee 1020 - Age in Days

















#include<stdio.h>
int main()
{
    float a,b;
    int n,m;

    scanf("%f",&a);
    n=(int)a;
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n",n/100);

    n=n%100;

    printf("%d nota(s) de R$ 50.00\n",n/50);

    n=n%50;

    printf("%d nota(s) de R$ 20.00\n",n/20);

    n=n%20;

    printf("%d nota(s) de R$ 10.00\n",n/10);

    n=n%10;

    printf("%d nota(s) de R$ 5.00\n",n/5);

    n=n%5;

    printf("%d nota(s) de R$ 2.00\n",n/2);

    n=n%2;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n",n);

    b=a-n;
    m=round(b*100);

    printf("%d moeda(s) de R$ 0.50\n",m/50);

    m=m%50;

    printf("%d moeda(s) de R$ 0.25\n",m/25);

    m=m%25;

    printf("%d moeda(s) de R$ 0.10\n",m/10);

    m=m%10;

    printf("%d moeda(s) de R$ 0.05\n",m/5);

    m=m%5;

    printf("%d moeda(s) de R$ 0.01\n",m/1);

    return 0;
}                           // prob bee 1021 Banknotes and coins















#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((b > c) && (d > a) && (c + d > a + b) && c > 0 && d > 0 && (a % 2 == 0))
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}                      // prob bee 1035 selection test
















#include<stdio.h>
#include <math.h>

int main()
{
    double a, b, c, t;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(((b * b) - 4 * a * c) < 0 || a == 0)
        {
            printf("Impossivel calcular\n");
        }

    else
        {
            t = sqrt((b * b) - 4 * a * c);
            printf("R1 = %.5lf\nR2 = %.5lf\n", ((-b + t) / (2 * a)), ((-b - t) / (2 * a)));
        }

    return 0;
}                   // prob bee 1036	Bhaskara's Formula


















#include<stdio.h>

int main()
{
    float n;
    scanf("%f", &n);

    if(n < 0 || n > 100)
    {
        printf("Fora de intervalo\n");
    }
    else
    {
        if(n >= 0 && n <= 25)
        {
            printf("Intervalo [0,25]\n");
        }
        else if(n > 25 && n <= 50)
        {
            printf("Intervalo (25,50]\n");
        }
        else if(n > 50 && n <= 75)
        {
            printf("Intervalo (50,75]\n");
        }
        else
        {
            printf("Intervalo (75,100]\n");
        }
    }

    return 0;
}                  // prob bee  1037	Interval















#include<stdio.h>
int main()
{
    int X, Y;
    float price = 0;

    scanf("%d %d", &X, &Y);

    if (X == 1)
    {
        price  = (float) (4.00 * Y);
    }

    else if (X == 2)
    {
        price  = (float) (4.50 * Y);
    }

    else if (X == 3)
    {
        price  = (float) (5.00 * Y);
    }

    else if (X == 4)
    {
        price  = (float) (2.00 * Y);
    }

    else if (X == 5)
    {
        price  = (float) (1.50 * Y);
    }

    printf("Total: R$ %.2f\n",price);

    return 0;
}               // prob bee 1038 Snack











#include <stdio.h>
int main()
{
    double first, second, third, fourth, last, sum;
    scanf("%lf %lf %lf %lf", &first, &second, &third, &fourth);

    sum = (first * 2 + second * 3 + third * 4 + fourth) / (2+3+4+1);
    printf("Media: %.1f\n", sum);

    if (sum >= 7.0)
        {
            printf("Aluno aprovado.\n");
        }

        else if (sum >= 5.0)
        {
            printf("Aluno em exame.\n");
            scanf("%lf", &last);
            printf("Nota do exame: %.1f\n", last);

            if (last + sum / 2.0 > 5.0)
            {
                printf("Aluno aprovado.\n");
            }

            else
            {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n", (last + sum ) / 2.0);
        }

    else
    {
        printf("Aluno reprovado.\n");
    }
    return 0;
}             // prob bee 1040	Average 3

















#include <stdio.h>
int main()
{
    double X,Y;
    scanf ("%lf%lf", &X, &Y);

    if (X + Y == 0)
        {
            printf("Origem\n");
        }
    else if (X == 0)
        {
            printf("Eixo Y\n");
        }
    else if (Y == 0)
        {
            printf("Eixo X\n");
        }
    else if (X>0 && Y>0)
        {
            printf("Q1\n");
        }
    else if (X<0 && Y>0)
        {
            printf("Q2\n");
        }
    else if (X<0 && Y<0)
        {
            printf("Q3\n");
        }
    else if (X>0 && Y<0)
        {
            printf("Q4\n");
        }

    return 0;
}          // prob bee 1041 Coordinates of a Point













#include<stdio.h>

int main(){
    int a,b,c,x;
    int v[3];

    scanf("%d %d %d", &a, &b, &c);
    v[0] = a;
    v[1] = b;
    v[2] = c;

    for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(v[i] < v[j])
                {
                    x = v[j];
                    v[j] = v[i];
                    v[i] = x;
                }
            }
        }

    printf("%d\n%d\n%d\n", v[0], v[1], v[2]);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}               // prob bee 1042 simple sort














#include<stdio.h>
int main()
{
    float a,b,c,perimeter,area;
    scanf("%f%f%f",&a,&b,&c);

    if((a+b)>c&&(b+c)>a&&(c+a)>b){
        perimeter=a+b+c;
        printf("Perimetro = %.1f\n",perimeter);
    }
    else{
        area=.5*(a+b)*c;
        printf("Area = %.1f\n",area);
    }
    return 0;
}             // prob bee 1043	Triangle















#include<stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (B % A == 0 || A % B == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}              // prob bee 1044 Multiples
















#include <stdio.h>

int main(){
    double a,b,c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a >= (b+c) || b >= (a+c) || c >= (a+b))
    {
         printf("NAO FORMA TRIANGULO\n");
    }
    else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    else if(a == b && a == c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}                   // prob bee 1045 Triangle Types














#include <stdio.h>
int main()
{
    int a,b;
    scanf ("%d%d", &a, &b);
    if(a==b)
    {
        printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
    }
    else if(a<=b)
    {
        printf ("O JOGO DUROU %d HORA(S)\n",b-a);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
    }
    return 0;
}               // prob bee 1046 game time













#include <stdio.h>
int main()
{
    int a, b, c, d;
    int dif;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    dif = ((b*60)+d) - ((a*60)+c);
    if(dif<=0)
        {
            dif += 24*60;
        }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
    return 0;
}               // prob bee 1047 Game Time with Minutes

















#include<stdio.h>

int main()
{
    float s;

    scanf("%f",&s);

    if(s>0 && s<=400.0)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",(s+(s*.15)),(s*.15));
    }
    else if(s<=800.0)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",(s+(s*.12)),(s*.12));
    }
    else if(s<=1200.0)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",(s+(s*.10)),(s*.10));
    }
    else if(s<=2000.0)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",(s+(s*.07)),(s*.07));
    }
    else
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",(s+(s*.04)),(s*.04));
    }
    return 0;
}             // prob bee 1048 Salary increase


















#include <stdio.h>

int main()
{
    char a[15];
    char b[15];
    char c[15];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'c')
    {
        printf("aguia\n");
    }
    else if (a[0] == 'v' && b[0] == 'a' && c[0] == 'o')
    {
        printf("pomba\n");
    }
    else if (a[0] == 'v' && b[0] == 'm' && c[0] == 'o')
    {
        printf("homem\n");
    }
    else if (a[0] == 'v' && b[0] == 'm' && c[0] == 'h')
    {
        printf("vaca\n");
    }
    else if (a[0] == 'i' && b[0] == 'i' && c[2] == 'm')
    {
        printf("pulga\n");
    }
    else if (a[0] == 'i' && b[0] == 'i' && c[2] == 'r')
    {
        printf("lagarta\n");
    }
    else if (a[0] == 'i' && b[0] == 'a' && c[0] == 'h')
    {
        printf("sanguessuga\n");
    }
    else if (a[0] == 'i' && b[0] == 'a' && c[0] == 'o')
    {
        printf("minhoca\n");
    }
    return 0;
}                       // prob bee 1049 Animal


















#include <stdio.h>
int main()
{
   int N;
    scanf("%d",&N);

    if(N==61)
    {
        printf("Brasilia\n");
    }
    else if(N==71)
    {
        printf("Salvador\n");
    }
    else if(N==11)
    {
        printf("Sao Paulo\n");
    }
    else if(N==21)
    {
        printf("Rio de Janeiro\n");
    }
    else if(N==32)
    {
        printf("Juiz de Fora\n");
    }
    else if(N==19)
    {
        printf("Campinas\n");
    }
    else if(N==27)
    {
        printf("Vitoria\n");
    }
    else if(N==31)
    {
        printf("Bela Horizonte\n");
    }
    else
    {
        printf("DDD nao cadastrado\n");
    }
    return 0;
}               // prob bee 1050 DDD













#include<stdio.h>
int main()
{
    double sal;
    scanf("%lf", &sal);

    if(sal <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (sal >= 2000.01 && sal <= 3000.00)
    {
         printf("R$ %.2f\n", (sal - 2000.00)*0.08);
    }
    else if (sal >= 3000.01 && sal <= 4500.00)
    {
        printf("R$ %.2f\n", ((sal - 3000.00)*0.18 + 1000.00*0.08));
    }
    else if (sal >= 4500.01)
    {
         printf("R$ %.2f\n", ((sal - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
    }

    return 0;
}                   // prob bee 1051 taxes


















#include<stdio.h>
int main()
{
    int month;
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("January\n");
            break;

        case 2:
            printf("February\n");
            break;

        case 3:
            printf("March\n");
            break;

        case 4:
            printf("April\n");
            break;

        case 5:
            printf("May\n");
            break;

        case 6:
            printf("June\n");
            break;

        case 7:
            printf("July\n");
            break;

        case 8:
            printf("August\n");
            break;

        case 9:
            printf("September\n");
            break;

        case 10:
            printf("October\n");
            break;

        case 11:
            printf("November\n");
            break;

        case 12:
            printf("December\n");
            break;
        }

    return 0;
}               // prob bee  1052  month















#include<stdio.h>
int main()
{
    int i;

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}                   // prob bee 1059 even numbers
















#include<stdio.h>

int main()
{
    float x;
    int i,s=0;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&x);

        if(x>0)
        {
            s++;
        }
    }
    printf("%d valores positivos\n",s);
    return 0;
}               // prob bee 1060 positive numbers
















#include <stdio.h>
int main()
{
    int h, hh, hr,m,mm,d,dm,s,ss;

    scanf("Dia %d",&d);
    scanf("%d : %d : %d\n",&h,&m,&s);
    scanf("Dia %d",&dm);
    scanf("%d : %d : %d",&hh,&mm,&ss);

    s = ss - s;
    m = mm - m;
    h = hh - h;
    d = dm - d;

    if(s<0)
    {
        s+=60;
        m--;
    }

    if(m<0)
    {
        m+=60;
        h--;
    }

    if(h<0)
    {
        h+=24;
        d--;
    }

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

    return 0;
}                   // prob bee 1061 event time
















#include <stdio.h>

int main()
{
    float num,sum=0;
    int i,count=0;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&num);
        if(num>0)
        {
            sum = sum + num;
            count++;
        }
    }
    float average = sum/count;

    printf("%d valores positivos\n",count);
    printf("%.1f\n",average);

    return 0;
}               // prob bee 1064 positives & average



















#include<stdio.h>
int main()
{
    int n,i,s=0;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&n);

        if(n%2==0)
        {
            s++;
        }
    }
    printf("%d valores pares\n",s);
    return 0;
}               /prob bee 1065	Even Between five Numbers
















#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0,pos=0,neg=0;

    for(i=1; i<=5; i++)
    {
        scanf("%d", &n);

        if(n%2==0)
        {
            even++;
        }

        if(n%2!=0)
        {
            odd++;
        }

        if(n>0)
        {
            pos++;
        }

        if(n<0)
        {
            neg++;
        }
    }

    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}               // prob bee   1066    Even, Odd, Positive and Negative
















#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}                   // prob bee  1067  Odd Numbers















#include <stdio.h>

int main()
{
    int n, i=0;
    scanf("%d", &n);

    while(i < 6){
        if(n%2!=0){
            printf("%d\n", n);
            i++;
        }
        n++;
     }
    return 0;
}                   // prob bee 1070  six odd numbers














#include <stdio.h>

int main()
{
    int x, y, i, min, max, sum=0;

    scanf("%d %d", &x, &y);

    if(x < y)
    {
        min = x;
        max = y;
    }
    else
    {
        max = x;
        min = y;
    }

    for(i = (min + 1); i < max; ++i)
    {
        if(i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}               // prob  bee  1071    Sum of Consecutive Odd Numbers















#include<stdio.h>
int main()
{
    int x,n,i,in=0,out=0;

    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        scanf("%d", &n);

        if(n>=10 && n<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}                     // prob bee 1072  interval 2


















#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
	    printf("%d^2 = %d\n",i,i*i);
	}
	return 0;
}               // prob bee 1073  Even Square















#include <stdio.h>
int main()
{
    int N,X,i;
    scanf ("%d", &N);
    for(i=1;i<=N;i++)
    {
        scanf ("%d",&X);
        if(X==0)
        {
            printf("NULL\n");
        }
        else if(X<0 && X%2==0)
        {
            printf ("EVEN NEGATIVE\n");
        }
        else if(X<0 && X%2!=0)
        {
            printf ("ODD NEGATIVE\n");
        }
        else if(X>0 && X%2==0)
        {
            printf ("EVEN POSITIVE\n");
        }
        else if(X>0 && X%2!=0)
        {
            printf ("ODD POSITIVE\n");
        }
    }
    return 0;
}                   // prob bee 1074 Even or odd


















#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);

    for(i=1; i<=10000; i++)
    {
        if(i%n==2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}               // prob bee 1075   Remaining 2

















#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",i,n,i*n);
    }
    return 0;
}       // prob bee 1078 multiplication table

















#include<stdio.h>

int main()
{
    int n,i;
    float a,b,c,av;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        av = (a*2+b*3+c*5)/(2+3+5);
        printf("%.1f\n",av);
    }

    return 0;
}               // prob bee 1079 weighted averages
















*/


#include<stdio.h>

int main()
{
    int i,j=0, p, arr[100];
    for (i=0;i<100;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<100;i++)
    {
        if(arr[i] > j)
        {
            j = arr[i];
            p = i+1;
        }
    }

    printf("%d\n", j);
    printf("%d\n", p);

    return 0;
}               // prob bee 1080  Highest and Position
