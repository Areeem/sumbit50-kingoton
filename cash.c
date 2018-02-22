#include <cs50.h>
#include <stdio.h>

int main(void)
{
   float change = 0;
   float  cost = 0;
   float receive = 0;

   do
   {
    printf ("amount received\n");
    receive = get_float();
    printf ("cost\n");
    cost = get_float();
    change = receive - cost;
   }while(change < 0);

   int quarters = 0;
   int dimes = 0;
   int nickels = 0;
   int pennies = 0;

   if (change == 0){
       printf ("no change needed\n");
   }
   else
   {
       printf ("received %.2f\n",receive);
       printf ("change %.2f\n",change);
       while (change>=.25)
       {
           change = change - .25;

           quarters = quarters + 1;
       }
       while (change>=.10)
       {
           change = change - .10;
           dimes = dimes + 1;
       }
       while (change>=.05)
       {
           change = change - .05;
           nickels = nickels + 1;
       }
       while (change>=.01)
       {
           change = change - .01;
           pennies = pennies + 1;
       }
       printf("quarters%i\n",quarters);
       printf("dimes%i\n",dimes);
       printf("nickels%i\n",nickels);
       printf("pennies%i\n",pennies);
   }
}
