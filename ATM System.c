#include<stdio.h>
int main()
{
	int ch1, ch2, num; 
	int PIN;
			//Karina-2276
			//Anusha-1005
			//Vedant-2207
			//Payal-2211
			//Deep-2222
	char v;
	float cash=1000;
	
	printf("\t|===================================================|\n");
	printf("\t|                  WELCOME TO ATM                   |\n");
	printf("\t|===================================================|\n\n");
	printf("Please insert your debit(ATM) card\n");
	printf("\tEnter 'Y' if you have inserted a card: ");
	scanf("%c", &v);
	if(v=='y'|| v=='Y')
	{
		//Insert card
		printf("\t\tCard inserted!\n");
		printf("\t\t\tHi, Please do not Remove your Chip Card.\n\t\t\tLeave your Card Inserted during the entire Transaction.");
		
		//Language selection
		re1:
		printf("\n\t|----------Select Language:----------|");
		printf("\n\t[1] English");
		printf("\n\t[2] Hindi");
		printf("\n\t[3] Marathi\n\t");
		scanf("%d", &ch1);
		//CHOOSE
		switch(ch1)
		{
			case 1:
				printf("\n\tEnglish\n");
				break;
			case 2:
				printf("\n\tHindi\n");
				break;
			case 3:
				printf("\n\tMarathi\n");
				break;
			default:
				printf("\n\tInvalid input!\n");
			goto re1;
		}
		
		//Enter any Number
		again:
		printf("\n\tEnter any number between 10 and 99(for eg. 25):\n\t");
		scanf("%d", &num);
		if(num>10 && num<99)
		{
			//Enter PIN
			password:
			printf("\n\tPlease enter your PIN(Password):\n\t");
			scanf("%d", &PIN);
			if(PIN==2276 || PIN==1005 || PIN==2207 || PIN==2211 || PIN==2222 )
			{
				//Selection
				re2:
					printf("\n\t\t-----------------------------------");
				printf("\n\n\t\tChoose Banking for withdrawal:");
				printf("\n\t\t[1] Banking");
				printf("\n\t\t[2] Check Balance");
				printf("\n\t\t[3] Deposite");
				printf("\n\t\t[4] EXIT!\n\t\t");
				scanf("%d", &ch2);
				//CHOOSE
				switch(ch2)
				{
					//Banking(Withdraw)
					case 1:
						{
							int withdraw;
							//float cash=1000;
							printf("\n\tPlease enter amount to withdraw:\n\t");
							scanf("%d", &withdraw);
							if(cash>withdraw)
							{
								cash-=withdraw;
								printf("\n\tAmount after withdrawal of cash is %.3f:\n", cash);
								printf("\n\n\tGrab your cash");
							}
							else
							{
								printf("\n\tYou don't have enough amount to withdraw, please deposit amount\n");
							}
							break;
						}
					//Check Balance
					case 2:
						{
							printf("\n\tBalance in your Account is %.3f",cash);
							break;
						}
					//Deposite	
					case 3:
						{
							int deposit;
							printf("\tEnter the amount to deposite:");
							scanf("%d", &deposit);
								//current cash is 1000
								cash=cash+deposit;
								printf("\n\tBalance after depositing amount is %.3f\n", cash);
							break;
						}
					//EXIT	
					case 4:
						//printf("\n\t------------------THANK YOU for using our ATM!------------------");
						break;
					//Invalid input
					default:
						printf("\n\t\tInvalid input!\n");
						goto re2;
				}
				
				//END
				//printf("\n\n\tGrab your cash");
				printf("\n\n\t------------------THANK YOU for using our ATM!------------------");
			}
			else
			{
				printf("\tInvalid PIN!\n");
				goto password;
			}
		}
		else
		{
			printf("\tInvalid Input!\n");
			goto again;
		}
	}
	else
	{
		printf("\t\tPlease insert a card again\n");
	}
	return 0;
}
