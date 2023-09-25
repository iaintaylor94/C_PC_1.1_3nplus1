// Program to calculate the maximum cycle length between two numbers

#include <stdio.h>
#include <stdbool.h>

//Declare functions
int getCycleLength(int number);
int maxCycleLength(int start, int end);

int main(void) {

  //Get start and end numbers
  int start;
  int end;
  printf ("Enter start and end numbers\n");
  scanf ("%d %d", &start, &end);

  //Calculate max cycle length between start and end
  int maxLength = maxCycleLength (start, end);

  //Print maxCycleLngth
  printf ("%d %d %d\n", start, end, maxLength);
  
  return 0;
}

//Define functions
//Calculate the cycle length for number
int getCycleLength(int number) {
  int cycleLength = 1;

  while (number != 1) {

    if (number % 2 == true) {
      number *= 3;
      number++;
    }
    else {
      number /= 2;
    }
    cycleLength++;
  }
  
  return cycleLength;
}

//Find max cycle length between start and end
int maxCycleLength(int start, int end) {
  int maxLength = 0;
  for (int i = start; i <= end; i++){
    if (getCycleLength(i) > maxLength) {
      maxLength = getCycleLength(i);
    } 
  } 
  return (maxLength);
} 