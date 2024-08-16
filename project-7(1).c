#include<stdio.h>
void calc()
{
	int a,b,choice;
	do
	{
		printf("\n Enter your choice=");
		scanf("%d",&choice);
		
		if(choice>6)
		{
			printf("Enter valid choice");
		}
		else if(choice==6)
		{
			printf("Exit.....");
		}
		else if(choice<6)
		{
			switch(choice)
			{
				case 1:
					printf("Enter value A=");
					scanf("%d",&a);
					printf("Enter value B=");
					scanf("%d",&b);
					printf("Addition of %d+%d=%d",a,b,a+b);
					break;
				case 2:
					printf("Enter value A=");
					scanf("%d",&a);
					printf("Enter value B=");
					scanf("%d",&b);
					printf("Substaction of %d-%d=%d",a,b,a-b);
					break;
				case 3:
					printf("Enter value A=");
					scanf("%d",&a);
					printf("Enter value B=");
					scanf("%d",&b);
					printf("Multiplication of %d*%d=%d",a,b,a*b);
					break;	
				case 4:
					printf("Enter value A=");
					scanf("%d",&a);
					printf("Enter value B=");
					scanf("%d",&b);
					printf("Division of %d/%d=%d",a,b,a/b);
					break;
				case 5:
					printf("Enter value A=");
					scanf("%d",&a);
					printf("Enter value B=");
					scanf("%d",&b);
					printf("moduls of %d  %% %d=%d",a,b,a%b);
					break;
				default:
				    printf("plz Enter valid choice..."); 				
					
			}
		}
	}while(choice !=6);
}
main()
{
	int choice;
	printf("press 1 for Addition\n");
	printf("press 2 for Substraction\n");
	printf("press 3 for Multiplication\n");
	printf("press 4 for Devision\n");
	printf("press 5 for Moduls\n");
	printf("press 0 for Exit\n");
	
	calc();
}
	
    