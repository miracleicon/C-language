#include<stdio.h>
#include<string.h>
int main(void)
{
	
	char ch;
	char name[50],NAME[50];
	
	int x,n,m,s,u,v,y,a,i;
	printf("			*------------------------------------*			\n");
	printf("			||     WELCOME IN MOVIES WORLD      ||\n");
	printf("			*------------------------------------*			\n");
	do
	{
	printf("Do you want to login?(y/n)\n");
	scanf("%c",&ch);	
	}
	while(ch=='y');
	printf("Please Enter your name:");
	gets(name);
	printf("______________________________\n");
	printf("|*Password hint : 1234567890*|\n");
	printf("______________________________\n");
	printf("Password: \n");
	scanf("%d",&x);
	do
 {
 	
	printf("			*------------------------------------*			\n");
	printf("			||       MOVIES WORLD DETAILS       ||\n");
	printf("			*------------------------------------*			\n");
	printf("			|      Press[1] | BRAMASHTRA         |\n");
	printf("			|      Press[2] | KHUDA AUR MOHABAT  |\n");
	printf("			|      Press[3] | HACKER             |\n");
	printf("			|      Press[4] | PREMAM             |\n");
	printf("			|      Press[5] | KGF CHAPTER 2      |\n");
	printf("			|      Press[6] | EXIT               |\n");
	printf("			*------------------------------------*			\n");
	printf("Enter your choice\n");
	scanf("%d",&a);	
	switch(a)	
	{
		
		int price;
		case 1:
			printf("Movie name: BRAMASHTRA\n");
			printf("Enter price: ");
			scanf("%d",&price);
			printf("Duration=2:28:15\n");
			break;
			case 2:
			printf("Movie name: KHUDA AUR MOHABAT\n");
			printf("Enter price: ");
			scanf("%d",&price);
			printf("Duration=2:28:15\n");
			break;
			case 3:
			printf("Movie name: HACKER\n");
			printf("Enter price: ");
			scanf("%d",&price);
			printf("Duration=2:28:15\n");
			break;
			case 4:
			printf("Movie name: PREMAM\n");
			printf("Enter price: ");
			scanf("%d",&price);
			printf("Duration=2:28:15\n");
			break;
			case 5:
			printf("Movie name: KGF CHAPTER 2\n");
			printf("Enter price: ");
			scanf("%d",&price);
			printf("Duration=2:28:15\n");
			break;
			case 6:
                printf("\n*** Thank You! Visit Again!!! ***\n\n");
			default:
				printf("\nWrong choice!!!\nTry Again!!!");
                break;
	}
 }
  while(ch=='6');
  printf("Enter your mobile number: ");
  scanf("%d",&i);
  printf("Enter Hall number: ");
  scanf("%d",&y);
  printf("How many seats you want to booked: \n");
  scanf("%d",&m);
  for(u=1;u<=10;u++)
  {
  	for(v=1;v<=10;v++)
  	{
  	printf("%d\t",u*v);	
	}
	printf("\n");
  }
  printf("Which seat you want to book: \n");
  scanf("%d",&s);
  printf("			*------------------------------------*			\n");
  printf("			||   WELCOME IN FOOD PLAZA UNIVERSE ||\n");
  printf("			*------------------------------------*			\n");
	do
 {
 	int b;
	printf("			*------------------------------------*			\n");
	printf("			||       FOOD PLAZA UNIVERSE        ||\n");
	printf("			*------------------------------------*			\n");
	printf("			*------------------------------------*			\n");
	printf("            |     food code | food list          |          \n");
	printf("			*------------------------------------*			\n");
	printf("			|   Enter[101]  | BURGER             |\n");
	printf("			|   Enter[102]  | POPCORN            |\n");
	printf("			|   Enter[103]  | ICE-CREAM          |\n");
	printf("			|   Enter[104]  | MOMOS              |\n");
	printf("			|   Enter[105]  | PIZZA              |\n");
	printf("			|   Enter[106]  | EXIT               |\n");
	printf("			*------------------------------------*			\n");
	printf("Enter food code: \n");
	scanf("%d",&b);	
	switch(b)
	{
	case 101:
			printf("FOOD: BURGER\n");
			printf("Enter price: 350");	
			break;
	case 102:
			printf("FOOD: POPCORN\n");
			printf("Enter price: 450");	
			break;		
	case 103:
			printf("FOOD: ICE-CREAM\n");
			printf("Enter price: 50");	
			break;
	case 104:
			printf("FOOD: MOMOS\n");
			printf("Enter price: 150");	
			break;
	case 105:
			printf("FOOD: PIZZA\n");
			printf("Enter price: 550");	
			break;
	case 106:
                printf("\n*** Thank You! Visit Again!!! ***\n\n");
			default:
				printf("\nWrong choice!!!\nTry Again!!!");
                break;
	}
 }
while(ch=='6');
printf("PAYMENT\n");
printf("Enter your debit/credit card no.: \n");
scanf("%d",&n);
printf("Payment sucessfull \n");
printf("			*____________________________________*			\n");
printf("			||           BILL RECEIPT           ||\n");
printf("			*____________________________________*			\n");
printf("                        |");printf("DATE: %s\n",__DATE__);
printf("                        |");printf("TIME: %s\n",__TIME__);
strcpy(NAME,name);
printf("                        |");printf("NAME: %s\n",NAME);
printf("                        |");printf("You have booked:  %d seats\n",m);
printf("                        |");printf("Your seat number: %d\n",s);
printf("                        |");printf("Mobile number:    \n",i);
printf("                        |");printf("Hall number:      %d\n",y);
printf("                        |");printf("Movie name:       %s\n",a);

	return 0;
}

