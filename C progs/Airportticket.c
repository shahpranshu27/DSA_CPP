#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>


struct muft_airline
{
	char passport[6];
	char name[15];
    char destination[15];
	int seat_num;
	char email[15];
	struct muft_airline *following;
}
*begin, *stream;
struct muft_airline *dummy;


void main()
{
	void reserve(int x), cancel(), display(), savefile(); 
	int choice,n;
	begin = stream = 0; 
	int num = 1;
	do
	{
		
		printf("\n\n\t\t ========================================================================");
		printf("\n\t\t ==                Welcome to Pranshu's Airline System                 ==  ");
		printf("\n\t\t ========================================================================");
		printf("\n\n\n\t\t Please enter your choice from below :");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Cancel Reservation");
		printf("\n\n\t\t 3. Display Records");
		printf("\n\n\t\t 4. Exit");
		printf("\n\n\t\t Feel free to contact 24x7 on 27345647/48/49 ");
		printf("\n\n\t\t Enter your choice :");
		scanf("%d", &choice); 
		fflush(stdin);
		system("cls");
		switch (choice)
		{
		case 1:
			reserve(num);
			num++;
			getch();
			break;
		case 2:
			cancel();
			getch();
			break;
		case 3:
			display();
			getch();
			break;
		case 4:
		{
			//savefile();
			break;
		}
		default:
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-4");
		}
	//	getch();
	} while (choice != 4);
}

void details()
{
	printf("\n\t Enter your passport number:");
	gets(stream->passport); 
	fflush(stdin);  
	printf("\n\t Enter your  name:");
	gets(stream->name); 
	fflush(stdin);
	printf("\n\t Enter your email address:");
	gets(stream->email); 
	fflush(stdin);
    printf("\n\t Enter the Destination : ");
    gets(stream->destination); 
	fflush(stdin);
}

void details();

void reserve(int x)
{
	stream = begin;
	if (begin == NULL)
	{
		begin = stream = (struct muft_airline*)malloc(sizeof(struct muft_airline));
		details();
		stream->following = NULL;
		printf("\n\t Seat booking successful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
	else if (x > 15) // since max seats are 15
	{
		printf("\n\t\t Sorry....Seats Full !!");
		return;
	}
	else
	{
		while (stream->following)
			stream = stream->following;
		stream->following = (struct muft_airline *)malloc(sizeof(struct muft_airline));
		stream = stream->following;
		details();
		stream->following = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
} 

/*void savefile()
{
	int n;
	do{
		printf("enter 4 to exit : ");
		scanf("%d",&n);
		switch (n)
		{
		case 4:
			printf("Thanks for choosing our Airlines.... Visit again!!");
			break;
		default:
			printf("Have a safe journey!!");
		}
	}while(n==4);
}*/

void display()
{
	stream = begin;
	while (stream)
	{
		printf("\n\n Passport Number : %-6s", stream->passport);
		printf("\n        name : %-15s", stream->name);
		printf("\n      email address: %-15s", stream->email);
		printf("\n        Seat number: A-%d", stream->seat_num);
        printf("\n        Destination:%-15s", stream->destination);
		printf("\n\n ========================================================");
		stream = stream->following;
	}

}

void cancel()
{
	stream = begin;
	system("cls");
	char passport[6];
	printf("\n\n Enter passort number to delete record?:");
	gets(passport); 
	fflush(stdin);
	if (strcmp(begin->passport, passport) == 0)
	{
		dummy = begin;
		begin = begin->following;
		free(dummy);
		printf(" Resrvation has been cancelled ");
		Sleep(800);
		return;

	}

	while (stream->following)
	{
		if (strcmp(stream->following->passport, passport) == 0)
		{
			dummy = stream->following;
			stream->following = stream->following->following;
			free(dummy);
			printf(" Record has been deleted !! ");
			getch();
			Sleep(800);
			return;
		}
		stream = stream->following;
	}
	printf("passport number is wrong please check your passport");

}
