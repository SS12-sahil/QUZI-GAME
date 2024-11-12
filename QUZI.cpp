#include<stdio.h>
#include<string.h>
int main()
{
	int n,ans;
	printf("To Win The Game You have to give Answers of 5 Question :\n");
	st:
	printf("\n PRESS 1 TO START THE GAME : ");
	scanf("%d",&n);
	printf("WLECOM TO OUR QUIZ GAME \n \nEnter Your Name To Proceed :");
	char name[20];
	scanf("%s",&name);
	printf("Welcom %s :\n",name);
	if(n==1){
	A:	// FIRST QUESTION
	printf("\n A.WHO IS THE PRIME MINISTER OF INDIA ?");
	printf("\n 1.RAHUL GANDHI");
	printf("\n 2.ARVIDRA KEJRIWAL");
	printf("\n 3.AMIT SHAH");
	printf("\n 4.NARENDRA MODI");
	scanf("%d",&ans);
	
	switch(ans)
	{
		case 1: printf("\n WRONG ANSWER...\n ");
		printf("\nYou Lose %s  !!!! \n",name);
		goto st;
		break;
		case 2: printf("\n WRONG ANSWER...\n ");
		printf("\nYou Lose %s  !!!! \n",name);
		goto st;
		break;
		case 3: printf("\n WRONG ANSWER...\n ");
		printf("\nYou Lose %s  !!!! \n",name);
		goto st;
		break;
		case 4: printf("\n RIGHT ANSWER...\n ");
		break;
		default : printf("\n INVALID INPUT\n ");
		goto A;
	}
	B: //SECOND ANSWER
	printf("\n B.WHAT IS THE NATIONAL BIRD OF INDIA ?");
	printf("\n 1.PEACOCK");
	printf("\n 2.WOODPEACKER");
	printf("\n 3.PEGION");
	printf("\n 4.HEN");
	scanf("%d",&ans);
	switch(ans)
	{
		case 1: printf("\n RIGHT ANSWER...\n ");
		break;
		case 2: printf("\n WRONG ANSWER...\n ");
		break;
		case 3: printf("\n WRONG ANSWER...\n ");
		break;
		case 4: printf("\n WRONG ANSWER...\n ");
		break;
		default : printf("\n INVALID INPUT\n ");
		goto B;
	}
	C: // THIRD QUESTION
	printf("\n C.WHAT IS THE NATIONAL GAME OF INDIA ?");
	printf("\n 1.CRICKET");
	printf("\n 2.HOCKEY");
	printf("\n 3.TABLE TENNIS");
	printf("\n 4.ICE HOCKEY");
	scanf("%d",&ans);
	switch(ans)
	{
		case 1: printf("\n WRONG ANSWER...\n ");
		break;
		case 2: printf("\n RIGHT ANSWER...\n ");
		break;
		case 3: printf("\n WRONG ANSWER...\n ");
		break;
		case 4: printf("\n WRONG ANSWER...\n ");
		break;
		default : printf("\n INVALID INPUT\n ");
		goto C;
	}
	D: //FOURTH QUESTION
	printf("\n D.WHO IS THE NATIONAL ANIMAL OF INDIA ?");
	printf("\n 1.LION");
	printf("\n 2.BEAR");
	printf("\n 3.TIGER");
	printf("\n 4.HORSE");
	scanf("%d",&ans);
	switch(ans)
	{
		case 1: printf("\n WRONG ANSWER...\n ");
		break;
		case 2: printf("\n WRONG ANSWER...\n ");
		break;
		case 3: printf("\n RIGHT ANSWER...\n ");
		break;
		case 4: printf("\n WRONG ANSWER...\n ");
		break;
		default : printf("\n INVALID INPUT\n");
		goto D;
	}
	E: // FIFTH QUESTION 
	printf("\n E.WHO IS THE CHIEF MINISTER OF MADHYA PRADESH ?");
	printf("\n 1.SHIVRAJ SINGH CHOUHAN");
	printf("\n 2.KAMAL NATH");
	printf("\n 3.ANTAR SINGH DARBAR");
	printf("\n 4.AIMT SHAH");
	scanf("%d",&ans);
	switch(ans)
	{
		case 1: printf("\n RIGHT ANSWER...\n ");
		break;
		case 2: printf("\n WRONG ANSWER...\n ");
		break;
		case 3: printf("\n WRONG ANSWER...\n ");
		break;
		case 4: printf("\n WRONG ANSWER...\n ");
		break;
		default : printf("\n INVALID INPUT");
		goto E;
	}
	}
	else
	{
		printf("WRONG INPUT !!!");
		goto st;
	}
}