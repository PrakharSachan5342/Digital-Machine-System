#include<stdio.h>
#include<time.h>
int main()
{
int p1,p2;
float i,c1,g,d1;
char c;
time_t t;
time (&t);
printf("                          -------------------------------\n");
printf("                              DIGITAL ATM MACHINE\n");
printf("                          -------------------------------\n");
printf("Enter your four digit password:-\n");
scanf("%d",&p1);
if(p1>=1000 && p1<=9999) //(p1=password 1)
{
printf("Re-enter your password:-\n");
scanf("%d",&p2);                         //(p2=password 2)
if(p1==p2)
{
printf("Enter your initial amount:-\n");
scanf("%f",&i);                            //(i=initial amount)
printf("Select your choice\n");
printf("a)Credit b)Debit\n");
scanf("\n%c",&c);
switch(c)                                    //(switch - c)
{
case 'a':
case 'A':
printf("Enter the amount to be credited:-\n");
scanf("%f",&c1);                             //(c1=amount to be credited)
g=i+c1;
printf("                    INVOICE               \n ");
printf("     -------------------------------------               \n");
printf("Initial  amount: %0.2f\n",i);
printf("Transaction type:CREDIT\n");
printf("Credited amount: %0.2f\n",c1);
printf("Balance  amount: %0.2f\n",g);
printf("ATM operator fee:0.00\n");
printf("\n%s", ctime(&t));
break;
case 'b':
case 'B':
printf("Enter the amount to be debited:\n");
scanf("%f",&d1);                                //(d1=amount to be debited)
if(i>=d1)
{
g=i-d1;                                              //(g=initial amount -debit amount)
printf("                    INVOICE                 \n");
printf("     ---------------------------------------               \n");
printf("Initial amount:  %0.2f\n",i);
printf("Transaction type:DEBIT\n");
printf("Debited amount:  %0.2f\n",d1);
printf("Balance amount:  %0.2f\n",g);
printf("ATM operator fee:0.00\n");
printf("\n%s", ctime(&t));
}
else
{
printf("*Amount not sufficient*\n");
printf("*Note- Debit amount should be less than initial amount*\n");
}
break;
default: printf("*Invalid choice*\n");
printf("*Please select a valid choice*\n");
}
}
else
{
printf("*Password is invalid*\n");
}
}
else
{
    printf("*Password must contain 4 digits*\n");
}
printf("--------------------------------\n");
printf("THANK YOU\n");
printf("VISIT AGAIN\n");
printf("For customer service call");
printf("\n2-001-321-9000");
return 0;
}
