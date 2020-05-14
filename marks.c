//Program to take marks from user(Byte) and print the greade on the screen
#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("\n Hey Byte \n Not to worry, I will help you :) \n");
	
	printf("\n Byte Please Enter Kid's marks(1-100) : ");
	scanf("%d",&marks);                                      //Take Marks as Input from the User(Byte)
	
     	//Main Logic with use of if , else if
	
		if(marks>=85 && marks<=100)
			printf("\n Kid Got A Grade");
			
		else if(marks>=70 && marks<=84)
			printf("\n Kid Got B Grade");
			
		else if(marks>=55 && marks<=69)
			printf("\n Kid Got C Grade");
			
		else if(marks=40 && marks<=54)
			printf("\n Kid Got D Grade");
			
		else if(marks>40)
			printf("\n Kid Got F Grade");
			
		else
			printf("\n Byte it is Invalid Input!! \n Please Input Valid Marks");
			
}
