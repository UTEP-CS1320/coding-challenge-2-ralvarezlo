/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*/

#include <stdio.h>

int main(void) {
  int systolic, diastolic;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &systolic, &diastolic);
  
  /* The following if statements will classify the blood pressure
   * readings into the AHA categories.
   * Due to the gaps in the chart, I'm assuming that the ranges
   * expressed in the chart as "systolic > x" are inclusive */
  if (systolic >= 180 || diastolic >= 120) printf("Hypertensive Crysis\n");
  else if (systolic >= 140 || diastolic >= 90) printf("Stage 2 Hypertension\n");
  else if (systolic >= 130 || diastolic >= 80) printf("Stage 1 Hypertension\n");
  else if (systolic >= 120) printf("Elevated\n");
  else printf("Normal\n");

  return 0;
}
