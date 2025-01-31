#include<stdio.h>
#include<string.h>
main()
{
 static int totalCost;
 int i,j,choice,c=1,a[9],cost[9];
 for(i=0;i<9;i++)
 a[i]=0;
 
 char str[100];
 char items[9][100]={"Sony WH-1000XM4",
 "BOAT Bassheads 900",
 "BOULT Audio Bassbuds Q2",
 "Adidas Drogo Running Shoes",
 "Nike Air Max 720",
 "Puma Fettle Mesh idp",
 "Apple Iphone 13 pro max",
 "Google Pixel 3",
 "Samsung S22 Utra"  
 };
 printf("Please Enter Your Name\n");
 gets(str);
 printf("Hello %s, Welcome to our Online Shopping.\n",str);
 do{
  //C is 1 by default
  if(c==1){
  printf("Enter\n1 - Headphones\n2 - Shoes\n3 - Mobiles\nAny other number to exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    int HeadphonesChoice;
    printf("Enter\n1 - Sony WH-1000XM4 - Rs.26000\n2 - BOAT Bassheads 900- Rs.1600\n3 - BOULT Audio Bassbuds Q2- Rs.3500\nAny other number to exit\n");
    scanf("%d",&HeadphonesChoice);
    cost[0]=26000;
    cost[1]=1600;
    cost[2]=3500;
    switch(HeadphonesChoice)
    {
     case 1:
     {
      int num;
      printf("You chose - Sony WH-1000XM4 with Rs.26000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       totalCost+=26000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose BOAT Bassheads 900 with Rs.1600.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[1]++;
       totalCost+=1600;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose BOULT Audio Bassbuds Q2with Rs.3500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[2]++;
       totalCost+=3500;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from Headphones Accesories\n");
      break;
     }
    }
    break;
   }
   case 2:
   {
    int shoesChoice;
    printf("Enter\n1 - Adidas Drogo Running Shoes - Rs.20000\n2 - Nike Air Max 720 - Rs.15000\n3 - Puma Fettle Mesh idp - Rs.10100\nAny other number to exit\n");
    scanf("%d",&shoesChoice);
    cost[3]=20000;
    cost[4]=15000;
    cost[5]=10100;
    switch(shoesChoice)
    {
     case 1:
     {
      int num;
      printf("You chose Adidas Drogo Running Shoes Shoes for Rs.26,0000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalCost+=20000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose Nike Air Max 720 Shoes for Rs.15,000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalCost+=15000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose Puma Fettle Mesh idp Shoes for Rs.10100.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalCost+=10100;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from Shoes Category\n");
      break;
     }
    }
    break;
   }
   case 3:
   {
    int mobileChoice;
    printf("Enter\n1 - Apple Iphone 13 pro max - Rs.111000\n2 - Google Pixel 3 - Rs.75000\n3 - Samsung S22 Utra - Rs.55000\nAny other number to exit\n");
    scanf("%d",&mobileChoice);
    cost[6]=111000;
    cost[7]=75000;
    cost[8]=55000;
    switch(mobileChoice)
    {
     case 1:
     {
      int num;
      printf("You chose to buy Apple Iphone 13 pro max for Rs.1,11,000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[6]++;
       totalCost+=111000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose to buy Google Pixel 3 for Rs.75,000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[7]++;
       totalCost+=75000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose to buy Samsung S22 Utra for Rs.55,000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[8]++;
       totalCost+=55000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from Mobile Category\n");
      break;
     }
    }
    break;
   }
   default:
   {
    printf("Enter Valid Categories Choice\n");
    break;
   }
  }
  printf("%s's cart\n",str);
  printf("Id\tItems\t\t\tQuantity\t\t\tCost\n");
  for(i=0;i<9;i++)
  {
   if(a[i]!=0)
   {
    printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
   }
  }
  printf("Total Cost\t\t\t\t\t%d\n",totalCost);
  printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
  scanf("%d",&c);
 }
  if(c==2)
  {
   int id;
   printf("Enter id to delete item\n");
   scanf("%d",&id);
   if(id<9&&id>0){
   totalCost=totalCost-(cost[id]*a[id]);
   a[id]=0;
   }
   else{
    printf("Enter Valid id\n");
   }
       printf("Revised Items \n");
       printf("Id\tItems\t\t\tQuantity\t\tCost\n");
            for(i=0;i<9;i++)
      {
     if(a[i]!=0)
      {
    printf("%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
      }
     }
        printf("Total Cost\t\t\t\t\t%d\n",totalCost);
        printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
     scanf("%d",&c);
  }
  
 }while(c==1 || c==2);
 printf("Your order is placed and final cost is %d. You can pay this amount at the time of delivery. \n",totalCost);
 printf("\nThanks %s for Choosing Us and Visit us again.\n",str);

}

