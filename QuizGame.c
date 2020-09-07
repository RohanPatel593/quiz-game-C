#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define max 5
int *top,anss,annss,point=0,chhh,i,m,n,d[2],temp2,chh;   char str;
time_t t;
FILE *hs;
int ans,ans1,ans2,ch,cha;
int money;
char playername[50];
char stack[max][80];
void mainhome();
void play();
void previous_scores();
void test_start();
int push();
int push()
{
time(&t);
printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name :-");
gets(playername);
clrscr();
if(*top == max -1)
return(-1);
      else
      {	 *top = *top + 1;
	    strcpy(stack[*top], playername);
	    return(1);	}	}
void help()
{	clrscr();
printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 5 questions to test your \n general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 4");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");
    printf("\n    right option");
    printf("\n >> No negative marking for wrong answers");
	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n*****C PROGRAM QUIZ GAME is developed by ROHAN PATEL AT MUMBAI UNIVERSITY*******");
printf("\n\n\t Press 1 to return to main menu");
printf("\n\t Press 2 to exit\n\t ");
scanf("%d",&chhh);
if(chhh==1)
{	mainhome();	}
else
{	exit(0);	}
getch();	}
void main()
{	     clrscr();
	push();
	printf("\t\t\t  << QUIZ GAME >>\n");
     printf("\n\t\t****************************************");
	printf("\n\t\t\t      WELCOME\n \n\t\t\t        to\n ");
     printf("\n\t\t\t    THE QUIZ GAME ");printf("\n\t\t");
     printf("\n\t\t****************************************");
     printf("\n\t\t   BECOME RICH EARN UPTO 1 MILLION $ ;-) ");
     printf("\n\t\t****************************************");
     printf("\n\t\t > Press 1 to start the game");
     printf("\n\t\t > Press 2 to view the previous scores  ");
     printf("\n\t\t > press 3 for help            ");
     printf("\n\t\t > press 4 to quit             ");
     printf("\n\t\t________________________________________\n\n\t\t ");
     scanf("%d",&ch);
     clrscr();
     switch(ch)
     {		case 1:
	printf("\n *********** Welcome %s to C Program Quiz Game *****************",playername);
	printf("\n\n Here are some tips you might wanna know before playing:");
	printf("\n ********************************************************************************");
	printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
	printf("\n >> In warmup round you will be asked a total of 5 questions to test your");
	printf("\n    general knowledge. You are eligible to play the game if you give atleast 4");
	printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
	printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
	printf("\n    total of 10 questions. Each right answer will be awarded with 10 points!");
	printf("\n    By this way you can score upto 100 :-) :-):-):-):-):-):-)!!!!!..........");
	printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
	printf("\n    right option.");
	printf("\n >> No negative marking for wrong answers!");
	printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
	printf("\n\n\n Press 1  to start the game!\n");
	printf("\n Press any other key to return to the main menu!\n ");
	scanf("%d",&ans2);
	if(ans2==1)
	{	test_start();	}
	else
	{	mainhome();	}
	break;
	case 2:
		previous_scores();
		break;
	case 3:
		help();
		break;
	case 4:
		exit(0);
     }	}
void test_start()
{
int a[5];int i,j,temp;int a1,a2,a3,a4,d1,ab,a5,ch2,score=0,i1,i2,j1,j2,tempx,tempy,a11[5],a22[5];
clrscr();
printf("\n\t TIME OF PLAY :- %s",ctime(&t));
srand(time(NULL));
for(d1=5;d1<10;d1++)
ab=rand()%3+1;
switch(ab)
{
case 1:
for(i=0;i<5;i++)
{	a[i]=i+1;	}
for(i=4;i>0;i--)
{	j=rand()%(i+1);
temp=a[i];
a[i]=a[j];
a[j]=temp;	}
for(i=0;i<5;i++)
{	switch(a[i])
{	case 1:
printf("\n\t >> Speed of light and sound ");
	printf("\n\t 1] 3*10^8 m/s , 434 m/s\n\t 2] 343 m/s , 434 m/s");
	printf("\n\t 3] 3*10^8 m/s , 343 m/s\n\t 4] 343 m/s , 3*10^8 m/s\n\t ");
	scanf("%d",&a1);
	if(a1==3)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 3] 3*10^8 m/s , 343 m/s\n");	}
break;
case 2:
printf("\n\t >> Fourth layer of atmosphere");
	printf("\n\t 1] Ionosphere\n\t 2] Stratosphere");
	printf("\n\t 3] Thermosphere\n\t 4] Troposphere\n\t ");
	scanf("%d",&a2);
	if(a2==3)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 3] Thermosphere\n");	}
break;
case 3:

	printf("\n\t >> gets() function used in C programming language is included in which\t library");
	printf("\n\t 1] conio.h\n\t 2] stdlib.h");
	printf("\n\t 3] stdio.h\n\t 4] string.h\n\t ");
	scanf("%d",&a3);
	if(a3==3)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 3] stdio.h\n");		}
break;
case 4:
printf("\n\t >> Jeff Bezos is CEO of :-");
	printf("\n\t 1] Microsoft\n\t 2] Amazon");
	printf("\n\t 3] Flipkart\n\t 4] Ebay\n\t ");
	scanf("%d",&a4);
	if(a4==2)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 2] Amazon");		}
break;
case 5:
printf("\n\t >> UNESCO headquarters is situated in :-");
	printf("\n\t 1] Paris\n\t 2] California");
	printf("\n\t 3] Geneva\n\t 4] New York\n\t");
	scanf("%d",&a5);
	if(a5==1)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 1] Paris\n");		}
break;
}	}	
break;
case 2:
for(i1=0;i1<5;i1++)
{	a11[i1]=i1+1;	}
for(i1=4;i1>0;i1--)
{	j1=rand()%(i1+1);
tempx=a11[i1];
a11[i1]=a11[j1];
a11[j1]=tempx;	}
for(i1=0;i1<5;i1++)
{	switch(a11[i1])
{	case 1:
printf("\n\t >> The Earth is approximately how many miles away from the Sun ?");
	printf("\n\t 1] 9.3 million\n\t 2] 39 million");
	printf("\n\t 3] 93 million\n\t 4] 193 million\n\t ");
	scanf("%d",&a1);
	if(a1==3)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 3] 93 million\n");	}
break;
case 2:
printf("\n\t >> Which of the following men does not have a chemical element named for him?");
	printf("\n\t 1] Albert Einstein\n\t 2] Niels Bohr");
	printf("\n\t 3] Isaac Newton\n\t 4] Enrico Fermi\n\t ");
	scanf("%d",&a2);
	if(a2==3)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 3] Isaac Newton\n");	}
break;
case 3:

	printf("\n\t >> Who delivered the less famous two-hour speech that preceded Abraham Lincoln's two-minute Gettysburg Address?");
	printf("\n\t 1] Wendell Philips\n\t 2] Daniel Webster");
	printf("\n\t 3] Robert G. Ingersoll\n\t 4] Edward Everett\n\t ");
	scanf("%d",&a3);
	if(a3==4)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 4] Edward Everett\n");		}
break;
case 4:
printf("\n\t >> 'Nephelococcygia' is the practice of doing what?");
	printf("\n\t 1] Finding shapes in clouds");
	printf("\n\t 2] Sleeping with your eyes open");
	printf("\n\t 3] Breaking glass with your voice");
	printf("\n\t 4] Swimming in freezing water\n\t ");
	scanf("%d",&a4);
	if(a4==1)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 1] Finding shapes in clouds");		}
break;
case 5:
printf("\n\t >> Which of these ships was not one of the three taken over by colonists during the Boston Tea Party?");
	printf("\n\t 1] Eleanor\n\t 2] Dartmouth");
	printf("\n\t 3] Beaver\n\t 4] William\n\t");
	scanf("%d",&a5);
	if(a5==2)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 2] Dartmouth\n");		}
break;
}	}
break;
case 3:
for(i2=0;i2<5;i2++)
{	a22[i2]=i2+1;	}
for(i2=4;i2>0;i2--)
{	j2=rand()%(i2+1);
tempy=a22[i2];
a22[i2]=a22[j2];
a22[j2]=tempy;	}
for(i2=0;i2<5;i2++)
{	switch(a22[i2])
{	case 1:
printf("\n\t >> Which organ produces a liquid known as bile ?");
	printf("\n\t 1] Pancreas\n\t 2] Liver");
	printf("\n\t 3] Kidney\n\t 4] Heart\n\t ");
	scanf("%d",&a1);
	if(a1==2)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 2] Liver\n");	}
break;
case 2:
printf("\n\t >> Which zodiac sign is not presented by a horned animal ?");
	printf("\n\t 1] Caricorn\n\t 2] Aries");
	printf("\n\t 3] Virgo\n\t 4] Tauras\n\t ");
	scanf("%d",&a2);
	if(a2==3)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 3] Virgo\n");	}
break;
case 3:

	printf("\n\t >> Complete the title of the UJamse Bond file 'tHE MAN WITH THE..'");
	printf("\n\t 1] Golden gun\n\t 2] Golden arrow");
	printf("\n\t 3] Golden arm\n\t 4] Golden apple\n\t ");
	scanf("%d",&a3);
	if(a3==1)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 1] Golden gun\n");		}
break;
case 4:
printf("\n\t >> Ballet originated in which country ?");
	printf("\n\t 1] Brazil\n\t 2] South Africa");
	printf("\n\t 3] Italy\n\t 4] China\n\t ");
	scanf("%d",&a4);
	if(a4==3)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 3] Italy");		}
break;
case 5:
printf("\n\t >> Globophobia is the fear of ");
	printf("\n\t 1] Balloons\n\t 2] Height");
	printf("\n\t 3] Water\n\t 4] Lollipops\n\t");
	scanf("%d",&a5);
	if(a5==1)
	{	score++;
		printf("\n\t Correct Answer\n");	}
	else
	{	printf("\n\t Incorrect Answer\n");
		printf("\t Correct Answer is :- 1] Balloons\n");		}
break;
}	}
break;
}
clrscr();
	printf("\n\t You have correctly answered %d questions ",score);
	if(score>=4)
		{		printf("\n\t Press 1 to play game");
		printf("\n\t Press any other key to return to main menu\n\t ");
		scanf("%d",&ans);
		if(ans==1)
		{	play();		}
		else
		{	mainhome();		}	}
	else
		{	printf("\n\t You are not eligible to play ");
		printf("\n\t Better luck nextime");
		printf("\n\t Press 1 to return to main menu");
		printf("\n\t Press any other key to quit\n\t ");
		scanf("%d",&ans1);
		if(ans1==1)
		{	mainhome();		}
		else
		{	exit(0);		}	}
}
void mainhome()
{	clrscr();
	 printf("\t\t\t  << QUIZ GAME >>\n");
     printf("\n\t\t****************************************");
     printf("\n\t\t\t      WELCOME\n \n\t\t\t        to\n ");
     printf("\n\t\t\t    THE QUIZ GAME \n\t\t");
     printf("\n\t\t****************************************");
     printf("\n\t\t   BECOME RICH EARN UPTO 1 MILLION $ ;-) ");
     printf("\n\t\t****************************************");
     printf("\n\t\t > Press 1 to start the game");
     printf("\n\t\t > Press 2 to view the previous scores  ");
     printf("\n\t\t > press 3 for help            ");
     printf("\n\t\t > press 4 to quit             ");
     printf("\n\t\t________________________________________\n\n\t\t ");
     scanf("%d",&ch);
     switch(ch)
     {		case 1:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
	gets(playername);
	printf("\n *********** Welcome %s to C Program Quiz Game *****************",playername);
	printf("\n\n Here are some tips you might wanna know before playing:");
	printf("\n ********************************************************************************");
	printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
	printf("\n >> In warmup round you will be asked a total of 5 questions to test your");
	printf("\n    general knowledge. You are eligible to play the game if you give atleast 4");
	printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
	printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
	printf("\n    total of 10 questions. Each right answer will be awarded with 10 points!");
	printf("\n    By this way you can score upto 100 :-) :-):-):-):-):-):-)!!!!!..........");
	printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
	printf("\n    right option.");
	printf("\n >> No negative marking for wrong answers!");
	printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
	printf("\n\n\n Press 1  to start the game!\n");
	printf("\n Press any other key to return to the main menu!");clrscr();
		test_start();
		break;
	case 2:
		previous_scores();

		break;
	case 3:
		help();
		break;
	case 4:
		exit(0);
     }	}
void play()
{
int ch4;int c[10],d;int k,l,temp1,a,k2,k3,l2,l3,temp3,temp4,c2[10],c3[10];
clrscr();
printf("\n TIME OF PLAY :- %s",ctime(&t));
printf("\n Welcome To The Game %s !",playername);
srand(time(NULL));
for(d=0;d<10;d++)
a=rand()%3+1;
switch(a)
{
case 1:
{
for(k=0;k<10;k++)
{	c[k]=k+1;	}
for(k=9;k>0;k--)
{	l=rand()%(k+1);
temp1=c[k];
c[k]=c[l];
c[l]=temp1;	}
for(k=0;k<10;k++)
{	switch(c[k])
{
case 1:
printf("\n >> Who won orange cap and purple cap respectively, in IPL 2019");
	printf("\n 1] Kagiso Rabada & David Warner");
	printf("\n 2] David Warner & Kagiso Rabada");
	printf("\n 3] Virat Kohli & Imran Tahir");
	printf("\n 4] David Warner & Imran Tahir\n ");
	scanf("%d",&ch4);
	if(ch4==4)
	{       point++;
		printf("\n CORRECT ANSWER\n");		}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 4] David Warner & Imran Tahir\n");		}
break;
case 2:
	printf("\n >> Which is the smallest and fastest memory in computer ?");
	printf("\n 1] RAM\n 2] ROM");
	printf("\n 3] Hard Drive\n 4] cache\n ");
	scanf("%d",&ch4);
	if(ch4==4)
	{	point++;
		printf("\n CORRECT ANSWER\n");		}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 4] Cache\n");	}
break;
case 3:
	printf("\n >> : is called as which operator ?");
	printf("\n 1] Relational\n 2] Conditional");
	printf("\n 3] Casting\n 4] Logical\n ");
	scanf("%d",&ch4);
	if(ch4==2)
	{	point++;
		printf("\n CORRECT ANSWER\n");		}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 2] Conditional\n");	}
break;
case 4:
	printf("\n >> Fascism believes in the application of principle of -");
	printf("\n 1] Totalitarianism\n 2] Dictatorship");
	printf("\n 3] Democracy\n 4] Self-emancipation\n ");
	scanf("%d",&ch4);
	if(ch4==1)
	{	point++;
		printf("\n CORRECT ANSWER\n");		}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 1] Totalitarianism\n");	}
break;
case 5:
	printf("\n >> In which of the following states Sundarvan Mangrove is located ?");
	printf("\n 1] Gujarat\n 2] West Bengal");
	printf("\n 3] Odisha\n 4] Andhra Pradesh\n ");
	scanf("%d",&ch4);
	if(ch4==2)
	{	point++;
		printf("\n CORRECT ANSWER\n");		}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 2] West Bengal\n");	}
break;
case 6:
printf("\n >> Which of the following is a Kharif crop ?");
	printf("\n 1] Wheat\n 2] Barley");
	printf("\n 3] Millets\n 4] None of these\n ");
	scanf("%d",&ch4);
	if(ch4==3)
	{	point++;
		printf("\n CORRECT ANSWER\n");		}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 3] Millets\n");	}
break;
case 7:
	printf("\n >> India's first International Stock Exchange is in -");
	printf("\n 1] Mumbai\n 2] Ahmedabad");
	printf("\n 3] Gandhinagar\n 4] Hyderabad\n ");
	scanf("%d",&ch4);
	if(ch4==3)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 3] Gandhinagar\n");	}
break;
case 8:
	 printf("\n >> Which country is planning to develop an 'Artificial Moon',which will be a geostationary satellite ?");
	 printf("\n 1] USA\n 2] China");
	 printf("\n 3] France\n 4] India\n ");
	 scanf("%d",&ch4);
	 if(ch4==2)
	 {	point++;
		printf("\n CORRECT ANSWER\n");	 }
	 else
	 {	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 2] China\n");	 }
break;
case 9:
 printf("\n >>What is the XS-3 code 0f 23 ?");
	 printf("\n 1] 56\n 2] 46");
	 printf("\n 3] 26\n 4] 32\n ");
	 scanf("%d",&ch4);
	 if(ch4==1)
	 {	point++;
		printf("\n CORRECT ANSWER\n");	 }
	 else
	 {	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 1] 56\n");	 }
break;
case 10:
 printf("\n >> Name the capital of Australia");
	 printf("\n 1] Canberra\n 2] Sydney");
	 printf("\n 3] Melbourne\n 4] Perth\n ");
	 scanf("%d",&ch4);
	 if(ch4==1)
	 {	point++;
		printf("\n CORRECT ANSWER\n");	 }
	 else
	 {	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 1] Canberra\n");	 }
break;	
}	} 	}
break;
case 2:
for(k2=0;k2<10;k2++)
{	c2[k2]=k2+1;	}
for(k2=9;k2>0;k2--)
{	l2=rand()%(k2+1);
temp3=c2[k2];
c2[k2]=c2[l2];
c2[l2]=temp3;	}
for(k2=0;k2<10;k2++)
{	switch(c2[k2])
{	case 1:
printf("\n >>  In which group of places the Kumbha Mela is held every twelve years");
	printf("\n 1] Ujjain. Purl, Prayag. Haridwar");
	printf("\n 2] Prayag. Haridwar, Ujjain,. Nasik");
	printf("\n 3] Rameshwaram. Purl, Badrinath. Dwarika");
	printf("\n 4] Chittakoot, Ujjain, Prayag,'Haridwar\n ");
	scanf("%d",&ch4);
	if(ch4==2)
	{       point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 2] Prayag. Haridwar, Ujjain,. Nasik\n");	}
break;
case 2:
	printf("\n >>  Who is the author of the epic 'Meghdoot' ?");
	printf("\n 1] Vishakadatta\n 2] Valmiki");
	printf("\n 3] Banabhatta\n 4] Kalidas\n ");
	scanf("%d",&ch4);
	if(ch4==4)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 4] Kalidas\n");	}
break;
case 3:
	printf("\n >>  'Good Friday' is observed to commemorate the event of ?");
	printf("\n 1] birth of Jesus Christ");
	printf("\n 2] birth of' St. Peter");
	printf("\n 3] crucification 'of Jesus Christ");
	printf("\n 4] rebirth of Jesus Christ\n ");
	scanf("%d",&ch4);
	if(ch4==3)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 3] crucification 'of Jesus Christ\n");	}
break;
case 4:
	printf("\n >> Which of the following Muslim festivals is based on the 'Holy Quran' ?");
	printf("\n 1] Id -ul-Zuha\n 2] Id -ul-Fitr");
	printf("\n 3] Bakri-id\n 4] Moharram\n ");
	scanf("%d",&ch4);
	if(ch4==1)
	{	point++;
		printf("\n CORRECT ANSWER\n");		}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 1] Id -ul-Zuha\n");	}
break;
case 5:
	printf("\n >> The first month of the Indian national calendar is ?");
	printf("\n 1] Magha\n 2] Chaitra");
	printf("\n 3] Ashadha\n 4] Vaishakha\n ");
	scanf("%d",&ch4);
	if(ch4==2)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 2] Chaitra\n");	}
break;
case 6:
printf("\n >> Writers Building is the headquarters of ?");
	printf("\n 1] The times of India group");
	printf("\n 2] All India Writers Association");
	printf("\n 3] West Bengal Government");
	printf("\n 4] Press Trust of India\n ");
	scanf("%d",&ch4);
	if(ch4==4)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 4] Press Trust of India\n");	}
break;
case 7:
	printf("\n >> Which of the-following is wrongly matched ?");
	printf("\n 1] Qutab Minar- Delhi\n 2] Taj Mahal -Agra");
	printf("\n 3] Ajanta Caves -Maharashtra\n 4] Charminar -Lucknow\n ");
	scanf("%d",&ch4);
	if(ch4==4)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 4] Charminar -Lucknow\n");	}
break;
case 8:
	 printf("\n >> Which of the following is/are youth organisations?\n 1. NCC 2. NSS 3. NYK");
	 printf("\n 1] 1 only\n 2] 2 only");
	 printf("\n 3] 1 and 2\n 4] 1,2 and 3\n ");
	 scanf("%d",&ch4);
	 if(ch4==4)
	 {	point++;
		printf("\n CORRECT ANSWER\n");	 }
	 else
	 {	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 4] 1,2 and 3\n");	 }
break;
case 9:
 printf("\n >> The value of π (Pai) was first given by ?");
	 printf("\n 1] Bhaskara\n 2] Varahamihira");
	 printf("\n 3] Aryabhatta\n 4] None of these\n ");
	 scanf("%d",&ch4);
	if(ch4==3)
	 {	point++;
		printf("\n CORRECT ANSWER\n");	 }
	 else
	 {	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 3] Aryabhatta\n");	 }
break;
case 10:
 printf("\n >> The conspiracy angle, of Rajiv Gandhi murder is being probed by ");
	 printf("\n 1] Mirdha Commission");
	 printf("\n 2] Chelliah Commission");
	 printf("\n 3] Jain Commission");
	 printf("\n 4] Rangarajan Commmission\n ");
	 scanf("%d",&ch4);
	 if(ch4==3)
	 {	point++;
		printf("\n CORRECT ANSWER\n"); }
	 else
	 {	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 3] Jain Commission\n");	 }
break;
}	}
break;
case 3:
{
for(k3=0;k3<10;k3++)
{	c3[k3]=k3+1;	}
for(k3=9;k3>0;k3--)
{	l3=rand()%(k3+1);
temp4=c3[k3];
c3[k3]=c3[l3];
c3[l3]=temp4;	}
for(k3=0;k3<10;k3++)
{	switch(c3[k3])
{	case 1:
printf("\n >>  The fragments of which of ihe following comet systems collided with Jupiter in July 1994?");
	printf("\n 1] Shbutring-Levy 9\n 2] Levy-9");
	printf("\n 3] Shoemaker -Levy 7\n 4] Shoemaker -Levy 9\n ");
	scanf("%d",&ch4);
	if(ch4==4)
	{       point++;
		printf("\n CORRECT ANSWER\n");		}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 4] Shoemaker -Levy 9\n");		}
break;
case 2:
	printf("\n >>  When Was the Indian Peace Keeping Force Sent to Sri Lanka ?");
	printf("\n 1] May,1986\n 2] July,1987");
	printf("\n 3] May,1988\n 4] March, 1990\n ");
	scanf("%d",&ch4);
	if(ch4==2)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 2] July,1987\n");	}
break;
case 3:
	printf("\n >>  The abbreviation MPLA stands for ?");
	printf("\n 1] Maharashtra Pradesh Legislative Assembly");
	printf("\n 2] Member of Parliament and Legislative Assembly");
	printf("\n 3] People's Movement for Liberation of Angola");
	printf("\n 4] None' of these\n ");
	scanf("%d",&ch4);
	if(ch4==3)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 3] People's Movement for Liberation of Angola\n");	}
break;
case 4:
	printf("\n >> What does IFA stand for ?");
	printf("\n 1] Intemational Flood Association");
	printf("\n 2] Indian Air Force");
	printf("\n 3] Indian Fertiliser Association");
	printf("\n 4] Indian Football Association\n ");
	scanf("%d",&ch4);
	if(ch4==4)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 4] Indian Football Association\n");	}
break;
case 5:
	printf("\n >>  Field Marshal is the highest rank in ?");
	printf("\n 1] Army\n 2] Navy\n 3] Air Force\n 4] Territorial Army\n ");
	scanf("%d",&ch4);
	if(ch4==1)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 1] Amry\n");	}
break;
case 6:
printf("\n >> Lunar month is equal to ?");
	printf("\n 1] one earth day");
	printf("\n 2] 14 earth days");
	printf("\n 3] 28 earth days");
	printf("\n 4] 365 days\n ");
	scanf("%d",&ch4);
	if(ch4==3)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 3] 28 earth days\n");	}
break;
case 7:
	printf("\n >> The book of the Parsis is ?");
	printf("\n 1] Torah\n 2] Bible");
	printf("\n 3] Gita\n 4] Zend Avesta\n ");
	scanf("%d",&ch4);
	if(ch4==4)
	{	point++;
		printf("\n CORRECT ANSWER\n");	}
	else
	{	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 4] Zend Avesta\n");	}
break;
case 8:
	 printf("\n >> Boat Race is a popular sport in ?");
	 printf("\n 1] Orissa\n 2] Karnataka");
	 printf("\n 3] Tamil Nadu\n 4] Kerala\n ");
	 scanf("%d",&ch4);
	 if(ch4==4)
	 {	point++;
		printf("\n CORRECT ANSWER\n");	 }
	 else
	 {	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 4] Kerala\n");	 }
break;
case 9:
 printf("\n >> Which of the following dances is a solo dance ?");
	 printf("\n 1] Yakshagana\n 2] Ottan Thullal");
	 printf("\n 3] Odissi\n 4] Kuchipudi\n ");
	 scanf("%d",&ch4);
	 if(ch4==2)
	 {	point++;
		printf("\n CORRECT ANSWER\n");	 }
	 else
	 {	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 2] Ottan Thullal\n");	 }
break;
case 10:
 printf("\n >> Dogri is spoken in which of the following states  ");
	 printf("\n 1] Bihar\n 2] Orissa");
	 printf("");
	 printf("\n 3] Assam\n 4] Jammu & Kashmir\n ");
	 scanf("%d",&ch4);
	 if(ch4==4)
	 {	point++;
		printf("\n CORRECT ANSWER\n");	 }
	 else
	 {	printf("\n INCORRECT ANSWER");
		printf("\n Correct Answer is 4] Jammu & Kashmir\n");	 }
break;
}	}	}
break;	}	
	 printf("\n Your total score is %d",point);
	 if(point>9)
	 {	 money=10000;	 }
	 else if(point>7 &&point<=9)
	 {	 money=5000;	 }
	 else if(point>5 && point<=7)
	 {	 money=2500;	 }
	 else if(point>3 && point<=5)
	 {	 money=1250;	 }
	 else if(point>1 &&point<=3)
	 {	 money=750;	 }
	 else if(point==1)
	 {	 money=250;	 }
	 else
	 {	 money=0;	 }
hs=fopen("hs","a");
fprintf(hs,"\t\t %s has won $ %d\n",playername,money);
fclose(hs);
	 printf("\n You have won $%d",money);
	 printf("\n Press 1 to return to main menu");
	 printf("\n Press any other key to quit\n");
	 scanf("%d",&ans2);
	 if(ans2==1)
	 {	 mainhome();	 }
	 else
	 {	 exit(0);	 }
	getch();
	}
void previous_scores()
{
	printf("\n\n\t >> Press 1 to view current player's score ");
	printf("\n\n\t >> Press 2 to view previous scores ");
	scanf("%d",&annss);
	if(annss==1)
{	clrscr();
	printf("\n\n\t\t Current player list :-\n\t\t ");
			for(i=*top;i>0;i--)
			 {
			printf("%s has won $ %d\n",stack[i],money);
			 }
}
	else if(annss==2)
{	clrscr();
	printf("\n\n\t\t Previous played list :-\n\t\t ");
	hs=fopen("hs","r");
	while((cha=fgetc(hs))!=EOF)
{
	printf("%c",cha);
}
fclose(hs);
}
else
mainhome();
	printf("\n\n\t\t Press 1 to go to main menu");
	printf("\n\t\t Press any other key to exit\n\t\t ");
	scanf("%d",&chh);
	if(chh==1)
{
	mainhome();

}
else
{	exit(0);
}
}