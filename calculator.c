#include<stdio.h>
#include<conio.h>
void main()
{
	int number, firstnumber,secondnumber,ans;
	char option;
	clrscr();
	do
	{
		printf("\n press 1 to calculate the addition ");
		printf("\n press 2 to calculate the substraction ");
		printf("\n press 3 to calculate the multiplication ");
		printf("\n press 4 to calculate the division ");
		printf("Read the above and press the number");
		scanf("%d",&number);
		printf("Enter first number: ");
		scanf("%d",&firstnumber);
		printf("Enter second number: ");
		scanf("%d",&secondnumber);
		switch(number)
		{
			case 1:
			   ans = firstnumber + secondnumber;
			   printf("The addition of two numbers is %d",ans);
			   break;
			case 2:
			   ans = firstnumber - secondnumber;
			   printf("The sub of two numbers is %d",ans);
			   break;
			case 3:
			   ans = firstnumber * secondnumber;
			   printf("The multiplication of two numbers is %d",ans);
			   break;
			case 4:
			   ans = firstnumber / secondnumber;
			   printf("The division of two numbers is %d",ans);
			   break;
			default:
			   printf("unknown operator");
			   break;

		}
		printf("do you want to continue y/n");
		option = getch();
	}
	while(option == 'y');
       getch();
}