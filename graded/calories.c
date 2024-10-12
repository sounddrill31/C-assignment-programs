#include <stdio.h>
int main(void)
{
    int age, gender; 
    double weight,height, activity, calories;
   printf("Enter Age, gender, weight, height, and activity\n");
   scanf("%d", &age);
   scanf("%d", &gender); // 1 is male, 2 is female
   scanf("%lf", &weight);
   scanf("%lf", &height);
   scanf("%lf", &activity);

   //age = 27;
   //gender = 1;
   //weight = 67.50;
   //height = 172.50;
   //activity = 1.20;

   if(gender == 1)
   {
    // male
       calories=(88.362+(13.397 * weight)+(4.799 * height) - (5.677 * age))  * activity;
   }
   else
   {
    // female
        calories=(447.593+(9.247* weight)+(3.098 * height) - (4.330 * age)) * activity;
   }
    
    printf("%.2lf", calories);
    return 0;
}