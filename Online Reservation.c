#include<stdio.h>
#include<stdlib.h>
int main()
{
int class1;
int economy_seat;
int firstclass_seat;
int input;
char ch;

printf("\n\t\t\t————–Welcome to the Ranchi Railway station————-\n");
printf("\nPress 1 for First Class Seat Reservation!");
printf("\n\nPress 2 for Economy Class Seat Reservation!\n ");
scanf("%d", &class1);

switch(class1)
{
case 1:
{
printf("\n Enter your seat Number in First class:-");
scanf("%d",&fistclass_seat);
if (firstclass_seat < 100)
{
printf("\n\t\t\t\t\t\t\t\t————–Your Ticketing Details—————-\n");
printf("Your Class: First Class",class1);
printf("\nYour Seat Number:- %d \n\n", firstclass_seat);
}
else
{
printf("\n seats full do you wanna resreved in Economy?:-");
scanf("%c",&ch);
if(ch =='y'||ch == 'Y')

{
printf("\nYour ticket has been booked in Economy Class");
printf("\nYour Seat Number:- %d \n\n",firstclass_seat);
}
break;
}
case 2:
{
printf("\n Enter your seat Number in Economy class:");
scanf("%d",&economy_seat);
if (economy_seat >= 101 || economy_seat < 200)
{
printf("\n\t\t\t\t\t\t\t\t————–Your Ticketing Details—————-\n");
printf("Your Class: economy Class",class1);
printf("\nYour Seat Number:- %d", economy_seat);
}
else
{
printf("\n Sorry seats full do you wanna resreved in First class(Y or N) ?:-");
scanf(" %c",&ch);
if(ch =='y'||ch=='y')

{
printf("\nYour ticket has been booked in Economy Class");
printf("\nYour Seat Number:- %d",firstclass_seat);
}
break;

default:
printf("\n Sorry There is an Error ! Please choose given Option \n\n\t\t\t Thank You ");
break;

}
}

return 0;
}
}
}
