#include <stdio.h>
#include<conio.h>
struct Distance {
    int feet;
    int inches;
};
void main()
 {
    struct Distance distance1, distance2, totalDistance;
    clrscr();

    printf("Enter the first distance in feet: ");
    scanf("%d", &distance1.feet);
    printf("Enter the first distance in inches: ");
    scanf("%d", &distance1.inches);

      printf("Enter the second distance in feet: ");
    scanf("%d", &distance2.feet);
    printf("Enter the second distance in inches: ");
    scanf("%d", &distance2.inches);


    totalDistance.feet = distance1.feet + distance2.feet;
    totalDistance.inches = distance1.inches + distance2.inches;

     if (totalDistance.inches >= 12) {
       totalDistance.feet += totalDistance.inches / 12;
	totalDistance.inches %= 12;
    }


    printf("Total distance: %d feet %d inches\n", totalDistance.feet, totalDistance.inches);

   getch();
   }
