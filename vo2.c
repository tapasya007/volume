#include<stdio.h>

struct Distance
{
  int feet;
  int inch;
} fd,sd,sum;

main()
{
  printf("Enter feet and inches for fd= \n");
  scanf("%d %d", &fd.feet, &fd.inch);

  printf("Enter feet and inches for the sd= \n");
  scanf("%d %d", &sd.feet, &sd.inch);

  sum.feet = fd.feet + sd.feet;
  sum.inch = fd.inch + sd.inch;

  while (sum.inch >= 12)
  {
    sum.inch = sum.inch - 12;
    sum.feet++;
  }

  printf("The Sum is %d feet, %d inches\n", sum.feet, sum.inch);
  
}
