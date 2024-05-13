/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}









#include <stdio.h>
int main() {
  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade = 'B';

  printf("Student id: %d\n", studentID);
  printf("Student age: %d\n", studentAge);
  printf("Student fee: %f\n", studentFee);
  printf("Student grade: %c", studentGrade);

  return 0;
}









#include <stdio.h>
int main() {
  int length = 4;
  int width = 6;
  int area = length * width;;

  printf("Length is: %d\n", length);
  printf("Width is: %d\n", width);
  printf("Area of the rectangle is: %d", area);

  return 0;
}







#include <stdio.h>
int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;

  printf("%d\n", minutesPerHour);
  printf("%f\n", PI);
  return 0;
}









int main()
{
    int time = 20;
    (time>18)? printf("Good Day") : printf("Good evening");
    return 0;
}








#include <stdio.h>
int main() {
  int i, j;

  for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);

    for (j = 1; j <= 3; ++j) {
      printf(" Inner: %d\n", j);
    }
  }

  return 0;
}








#include <stdio.h>

int main() {
  int number = 2;
  int i;
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", number, i, number * i);
  }

  return 0;
}









#include <stdio.h>
int main() {
  int maxScore = 500;

  int userScore = 420;

  float percentage = (float) userScore / maxScore * 100.0;

  printf("User's percentage is %.2f", percentage);

  return 0;
}







#include <stdio.h>
int main() {
  int maxScore = 500;

  int userScore = 420;

  float percentage = (float) userScore / maxScore * 100.0;

  printf("User's percentage is %.2f", percentage);

  return 0;
}










#include <stdio.h>

int main() {
  int myAge = 15;
  int votingAge = 18;

  if (myAge >= votingAge) {
    printf("Old enough to vote!");
  } else {
    printf("Not old enough to vote.");
  }

  return 0;
}









int main() {
  int doorCode = 1337;

  if (doorCode == 1337) {
    printf("Correct code.\nThe door is now open.");
  } else {
    printf("Wrong code.\nThe door remains closed.");
  }

  return 0;
}









#include <stdio.h>
int main() {
  int myNum = 10;

  if (myNum > 0) {
    printf("The value is a positive number.");
  } else if (myNum < 0) {
    printf("The value is a negative number.");
  } else {
    printf("The value is 0.");
  }

  return 0;
}










#include <stdio.h>
int main() {
  int dice = 1;

  while (dice <= 6) {
    if (dice < 6) {
      printf("No Yatzy\n");
    } else {
      printf("Yatzy!\n");
    }
    dice = dice + 1;     //OR,    dice = ++dice;   //OR,   ++dice;      SAME ANSWER.  BUT IF WE USE   dice++;   then output will be different like a continuous loop...
  }

  return 0;
}










#include <stdio.h>
int main() {
  int numbers = 12345;

  int revNumbers = 0;

  while (numbers) {
    revNumbers = revNumbers * 10 + numbers % 10;
    numbers /= 10;
  }

  printf("%d", revNumbers);

  return 0;
}













#include <stdio.h>
int main() {
  int numbers = 12345;

  int revNumbers = 0;

  while (numbers) {
    revNumbers = revNumbers * 10 + numbers % 10;
    numbers /= 10;
  }

  printf("%d", revNumbers);

  return 0;
}

















#include <stdio.h>

int main() {
  int countdown = 3;

  while (countdown > 0) {
    printf("%d\n", countdown);
    countdown--;
  }

  printf("Happy New Year!!\n");

  return 0;
}








int main() {
  int day = 4;

  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
  }

  return 0;
}












#include <stdio.h>
int main() {
  int i;

  for (i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
  }

  return 0;
}











#include <stdio.h>
int main() {
  int i = 0;

  while (i < 10) {
    if (i == 4) {
      i++;
      continue;
    }
    printf("%d\n", i);
    i++;
  }

  return 0;
}











#include <stdio.h>
int main() {
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

  int length = sizeof(ages) / sizeof(ages[0]);

  int lowestAge = ages[0];

  for (int i = 0; i < length; i++) {

  if (lowestAge > ages[i]) {

      lowestAge = ages[i];
    }
  }

  printf("The lowest age in the array is: %d", lowestAge);

  return 0;
}












#include <stdio.h>
int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\n", matrix[i][j]);
    }
  }

  return 0;
}













#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "Hello ";
  char str2[] = "World!";

  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);

  // Print str1
  printf("%s", str1);

  return 0;
}













#include <stdio.h>
int myFunction(int x) {
  return 5 + x;
}

int main() {
  printf("Result is: %d", myFunction(3));
  return 0;
}













#include <stdio.h>
void myFunction(char name[], int age)
{
    printf("Hello %s. Your age is now %d.\n\n", name, age);
}

int main()
{
    myFunction("Sam", 29);
    myFunction("M", 24);
    myFunction ("Shuvo", 19);
    return 0;
}












#include <stdio.h>
void myFunction(int mNum[5])
{
    for(int i=0; i<5; i++){
        printf("%d\n", mNum[i]);
    }
}
int main()
{
    int mNum[5] = {20, 40, 60, 80, 100};
    myFunction(mNum);
    return 0;
}











#include <stdio.h>

float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
  float f_value = 98.8;

  float result = toCelsius(f_value);

  printf("Fahrenheit: %.2f\n", f_value);

  printf("Convert Fahrenheit to Celsius: %.2f\n", result);

  return 0;
}











#include <stdio.h>
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}











#include <stdio.h>
#include <math.h>

int main() {
  printf("%f\n", sqrt(16));
  printf("%f\n", ceil(1.4));
  printf("%f\n", floor(1.4));
  printf("%f", pow(4, 3));
  return 0;
}










#include <stdio.h>

int main() {
  FILE *fptr;

  fptr = fopen("filename.txt", "w");

  fclose(fptr);

  return 0;
}










#include <stdio.h>
int main() {
  FILE *fptr;

  fptr = fopen("filename.txt", "w");

  fprintf(fptr, "First writing on created file of mine.");

  fclose(fptr);

  return 0;
}











#include <stdio.h>

int main() {
  FILE *fptr;

  fptr = fopen("filename.txt", "a");

  fprintf(fptr, "\nHi bro!");

  fclose(fptr);

  return 0;
}












#include <stdio.h>

int main() {
  FILE *fptr;

  fptr = fopen("filename.txt", "r");

  char myString[100];

  fgets(myString, 100, fptr);

  printf("%s", myString);

  fclose(fptr);

  return 0;
}











#include <stdio.h>

int main() {
  FILE *fptr;

  fptr = fopen("filename.txt", "r");

  char myString[100];

  while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
  }

  fclose(fptr);

  return 0;
}













#include <stdio.h>

int main() {
  FILE *fptr;

  fptr = fopen("filename.txt", "r");

  char myString[100];

  if(fptr != NULL) {
    while(fgets(myString, 100, fptr)) {
      printf("%s", myString);
    }
  } else {
    printf("Not able to open the file.");
  }

  fclose(fptr);

  return 0;
}













#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  struct myStructure s1 = {21, 'A', "hey"};
  struct myStructure s2 = {7, 'B', "Yo"};
  struct myStructure s3 = {14, 'C', "hola"};
  struct myStructure s4 = {16, 'D', "hi"};

  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);
  printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);
  printf("%d %c %s", s3.myNum, s3.myLetter, s3.myString);
  printf("%d %c %s", s4.myNum, s4.myLetter, s4.myString);

  return 0;
}












#include <stdio.h>

struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  struct Car car1  = {"BMW", "X5", 1999};
  struct Car car2  = {"Ford", "Mustang", 1969};
  struct Car car3  = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
}












#include <stdio.h>

enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 1:
      printf("Low Level");
      break;
    case 2:
      printf("Medium level");
      break;
    case 3:
      printf("High level");
      break;
  }

  return 0;
}





// done all.. now practice again








#include <stdio.h>

int main()
{
  int myNumbers[4] = {25, 50, 75, 100};

  printf("%d\n", *(myNumbers + 1));

  printf("%d", *(myNumbers + 3));

  return 0;
}












#include <stdio.h>

int main() {
  int myNumbers[4] = {25, 50, 75, 100};

  // memory address of the myNumbers array
  printf("%p\n", myNumbers);

  // memory address of the first array element
  printf("%p\n", &myNumbers[0]);

  // memory address of the third array element
  printf("%p\n", &myNumbers[2]);


  return 0;
}














#include<stdio.h>
int main()
{
    int numbers[11]={3,4,6,7,11,14,16,21,23,27,29};
    int *ptr = numbers;
    int i;

    printf("%p\n", ptr); // memory address
    printf("%p\n", &numbers);  // memory address

    printf("%d\n", *ptr);  // first element

    printf("%d\n", *(ptr+3)); /// 4th element
    printf("%d\n", *(numbers+3)); /// 4th element

    for(i=0;i<11;i++)
    {
        printf("%d\n", *(ptr+i));
        //printf("%d\n", *(numbers+i));   //to get all element we can also use this way
    }
    return 0;
}














#include<stdio.h>

int myfunc(int x, int y)
{
    return x + y;
}

int main()
{
    printf("The sum is %d\n", myfunc(16,7));
    return 0;
}












#include<stdio.h>

int myFunction(int x, int y)
{
  return x + y;
}

int main()
{
  int result = myFunction(14,7);
  printf("Result is = %d", result);
  return 0;
}












#include <stdio.h>

// Function declaration
int myFunction(int, int);

// The main method
int main()
{
  int result = myFunction(7, 4);  // call the function
  printf("Result is = %d", result);
  return 0;
}

// Function definition
int myFunction(int x, int y)
{
  return x + y;
}
















#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float toCelsius(float f) {
  return (5.0 / 9.0) * (f - 32.0);
}

int main() {
  // Set a fahrenheit value
  float f_value = 98.8;

  // Call the function with the fahrenheit value
  float result = toCelsius(f_value);

  // Print the fahrenheit value
  printf("Fahrenheit: %.2f\n", f_value);

  // Print the result
  printf("Convert Fahrenheit to Celsius: %.2f\n", result);

  return 0;
}

















#include <stdio.h>

int sum(int k);

int main()
{
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}
















#include <stdio.h>

// Create a structure called myStructure
struct myStructure
{
  int myNum;
  char myLetter;
};

int main()
{
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}















#include <stdio.h>

struct myStructure
{
  int myNum;
  char myLetter;
};

int main()
{
  // Create different struct variables
  struct myStructure s1;
  struct myStructure s2;

  // Assign values to different struct variables
  s1.myNum = 13;
  s1.myLetter = 'B';

  s2.myNum = 20;
  s2.myLetter = 'C';

  // Print values
  printf("s1 number: %d\n", s1.myNum);
  printf("s1 letter: %c\n", s1.myLetter);

  printf("s2 number: %d\n", s2.myNum);
  printf("s2 letter: %c\n", s2.myLetter);

  return 0;
}














#include <stdio.h>

// Create a structure
struct myStructure
{
  int myNum;
  char myLetter;
  char myString[30];
};

int main()
{
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}















#include <stdio.h>

struct myStructure
{
  int myNum;
  char myLetter;
  char myString[30];
};

int main()
{
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Create another structure variable
  struct myStructure s2;

  // Copy s1 values to s2
  s2 = s1;

  // Print values
  printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);

  return 0;
}















#include <stdio.h>
#include <string.h>

struct myStructure
{
  int myNum;
  char myLetter;
  char myString[30];
};

int main()
{
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Create another structure variable
  struct myStructure s2;

  // Copy s1 values to s2
  s2 = s1;

  // Change s2 values
  s2.myNum = 30;
  s2.myLetter = 'C';
  strcpy(s2.myString, "Something else");

  // Print values
  printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
  printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
  return 0;
}















#include <stdio.h>

struct Car
{
  char brand[50];
  char model[50];
  int year;
};

int main()
{
  struct Car car1  = {"BMW", "X5", 1999};
  struct Car car2  = {"Ford", "Mustang", 1969};
  struct Car car3  = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
}













#include <stdio.h>

enum Level
{
  LOW = 1,
  MEDIUM,
  HIGH
};

int main()
{
  enum Level myVar = MEDIUM;

  switch (myVar)
  {
    case 1:
      printf("Low Level");
      break;
    case 2:
      printf("Medium level");
      break;
    case 3:
      printf("High level");
      break;
  }

  return 0;
}












#include <stdio.h>

int main()
{
  int myNumbers[] = {10, 25, 50, 75, 100};
  printf("%lu", sizeof(myNumbers));  // out put 20 instead of 5 because int 4bytes so 4*5 = 20 bytes

  return 0;
}











#include <stdio.h>

int main()
{
  int myNumbers[] = {10, 25, 50, 75, 100};
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

  printf("%d", length);
  return 0;
}















#include <stdio.h>

int main()
{
  // An array storing different ages
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

  float avg, sum = 0;
  int i;

  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages[0]);

  // Loop through the elements of the array and accumulate the sum
  for (int i = 0; i < length; i++) {
    sum += ages[i];
  }

  // Calculate the average by dividing the sum by the length
  avg = sum / length;

  // Print the average
  printf("The average age is: %.2f", avg);

  return 0;
}













#include <stdio.h>

int main() {
   // An array storing different ages
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages[0]);

  // Create a 'lowest age' variable and assign the first array element of ages to it
  int lowestAge = ages[0];

  // Loop through the elements of the ages array to find the lowest age
  for (int i = 0; i < length; i++) {

    // Check if the current age is smaller than current the 'lowest age'
    if (lowestAge > ages[i])
    {

      // If the smaller age is found, update 'lowest age' with that element
      lowestAge = ages[i];
    }
  }

  // Output the value of the lowest age
  printf("The lowest age in the array is: %d", lowestAge);

  return 0;
}
















#include <stdio.h>

int main()
{
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
  printf("%d", matrix[0][2]);   //1st row 3rd column value 2

  return 0;
}










#include <stdio.h>

int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
  matrix[0][0] = 9;
  printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1

  return 0;
}












#include <stdio.h>

int main()
{
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }

    return 0;
}












#include <stdio.h>

int main()
{
  char greetings[] = "Hello World!";
  greetings[0] = 'J';
  printf("%s", greetings);

  return 0;
}












#include <stdio.h>

int main()
{
    char carName[] = "Volvo";
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%c\n", carName[i]);
    }

    return 0;
}










#include <stdio.h>

int main()
{
    char carName[] = "Volvo";
    int length = sizeof(carName) / sizeof(carName[0]);
    int i;

    for (i = 0; i < length; ++i)
    {
        printf("%c\n", carName[i]);
    }

    return 0;
}












#include <stdio.h>

int main()
{
    char message[] = "Good to see you,";
    char fname[] = "John";

    printf("%s %s!", message, fname);

    return 0;
}












#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length is: %d\n", strlen(alphabet));  // output 26
    printf("Size is: %d\n", sizeof(alphabet));   // output 27  cause sizeof also includes the \0 character when counting
    return 0;
}










#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length is: %d\n", strlen(alphabet));
    printf("Size is: %d\n", sizeof(alphabet));  // this time output will be 50 cause sizeof will always return the memory size (in bytes), and not the actual string length
    return 0;
}











#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello ";
    char str2[] = "World!";

    // Concatenate str2 to str1 (the result is stored in str1)
    strcat(str1, str2);

    // Print str1
    printf("%s", str1);

    return 0;
}













#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "Hello World!";
  char str2[20];

  // Copy str1 to str2
  strcpy(str2, str1);

  // Print str2
  printf("%s", str2);

  return 0;
}












#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2));   // Returns 0 (the strings are equal)


    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str1, str3));   // Returns -4 (the strings are not equal)

    return 0;
}











#include <stdio.h>

int main()
{
    // Create a string
    char fullName[30];

    // Ask the user to input some text (full name)
    printf("Type your full name and press enter: \n");

    // Get the text
    fgets(fullName, sizeof(fullName), stdin);      //That's why, when working with strings, we often use the fgets() function to read a line of text. Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:
                                                    //Use the scanf() function to get a single word as input, and use fgets() for multiple words.

    // Output the text
    printf("Hello %s", fullName);

    return 0;
}











*/

