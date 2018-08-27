#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char u_name[20],u_pass[20],password,user;

struct customer
{
	long float mob;
	char cname[20];
	int smt;
};


void main()
{
	struct customer c1;
	FILE *f1,*f2,*f3,*f4,*f5;
	int sr,pz,n,i,d,y,j,Y,again;
	char it[10],c,c2,ch,ch1,top1;
	int vada,top,rpizza,rpuff,pi,puff,z,piz,x,che,rcheese,acheese,cheese1;
	int sm,rna,con,puff2,apuff=0,pizza2,apizza=0,pizza,total=0,a,rvada,avada,vada2,va;
	int v=0,p=0;





	 clrscr();
      textcolor(WHITE);
      printf("\n\t\t");
      gotoxy(18,7);
      cprintf("***********************************************");
      gotoxy(18,8);
      printf("\n\t\t");
      gotoxy(18,9);
      cprintf("*           CANTEEN MANAGEMENT SYSTEM          *");
      gotoxy(18,10);
      printf("\n\t\t");
      gotoxy(18,11);
      cprintf("*   	    Made By RAVI CHUDGAR             *");
      gotoxy(18,12);
      printf("\n\t\t");
      gotoxy(18,13);
      cprintf("***********************************************");
      textcolor(BLUE+BLINK);
      textbackground(WHITE);
      gotoxy(25,18);
      system("pause");
    //  cprintf("Press Any Key To Continue........");
    //  c1=getch();
      for(i=26;i>0;i--)
 {
  delay(40);
  gotoxy(1,i);
  clreol();
  textcolor(WHITE);
  textbackground(BLACK);

  }
  top1:;

    textcolor(GREEN);
   printf("\n\n\n\n\n\n\t\t\t============================");
   printf("\n\t\t\tEnter User Name::");
   gets(u_name);
   printf("\t\t\tEnter Password ::");
   gets(u_pass);
   printf("\t\t\t============================");
   printf("\n\t\t");
   textcolor(BLUE);
   cprintf("Verifying...");
   printf("\n\t\t");
   for(i=0;i<47;i++)
      {
       textcolor(GREEN);
       cprintf("%c",987);
       delay(30);
      }
   user=strcmp(u_name,"user");
   password=strcmp(u_pass,"user");
   if(user==0 && password==0)
       {
  clrscr();

   printf("\n\t\t");
  textcolor(GREEN+BLINK);
  printf("\n\t\t\t");
  gotoxy(30,12);
  cprintf("Successfully Logged in");
  delay(1000);
  clrscr();

       do
      {
	textcolor(BLUE);
	textbackground(WHITE);

	printf("\n\n1. MENU  ");
	printf("\n\n2. PURCHASE ");
	printf("\n\n3. DETAIL");
	printf("\n\n4. NEW CUSTOMER ");
	printf("\n\n5. SEE THE CUSTOMER");

	printf("\n\n6. QUANTITY AVAILABL");
	printf("\n\n7. EXIT   ");
	printf("\n\n\n\n   ENTER NUMBER       ");

	scanf("%d",&d);


	switch(d)
	{
		case 1:  clrscr();

			f2=fopen("price.txt","r");


			while((ch=fgetc(f2))!=EOF)
			{

				printf("%c",ch);
			}
			textcolor(GREEN);
			fclose(f2);
			getch();
			break;

		case 2:  	puff :;
				textcolor(WHITE);
				f4=fopen("puff1.txt","r");
				f3=fopen("temppuff.txt","w");
				printf("PUFF (max 50)");
				scanf("%d",&p);
				rewind(f4);

				if(puff<50)
				{
					printf("enter auntnty less then 50 ");

					goto puff;
				}
				else
				{


					while(!feof(f4))
					{

					     fscanf(f4,"qty of puff is %d ",&puff2);

					     if(puff2!=p)
					     {
						apuff=puff2-p;
						fprintf(f3,"qty of puff %d",apuff);
					    }
					 }
					fclose(f3);
					fclose(f4);

					}

					pizza:;
					f3=fopen("pizza1.txt","r");
					f4=fopen("temppizza.txt","w");
					printf("PIZZA (MAX 50) :");
					scanf("%d",&piz);
					rewind(f3);

					if(piz>50)
					{
						printf("INVALID");
						goto pizza;
					}
					else
					while(!feof(f3))
					{
						fscanf(f3,"qty of pizza is %d",&pizza2);
						if(pizza2!=piz)
						{
							apizza=pizza2-piz;
							fprintf(f4,"qty of pizza %d",apizza);
						}
					}
					fclose(f3);
					fclose(f4);

					f3=fopen("pizza4.txt","r");
					f4=fopen("bill.txt","a");
					rewind(f3);
					while(!feof(f3))
					{
						fscanf(f3,"pizza:%d",&pizza2);
						if(pizza2!=z)
						{
							z=pizza2*piz;


							break;
						}
					}
					fclose(f3);
					fclose(f4);

					cheese :;
					f4=fopen("cheese2.txt","r");
					f3=fopen("tempcheese.txt","w");
					printf("CHEESE PUFF (max 50)");
					scanf("%d",&che);
					rewind(f4);

					if(che>50)
					{
						printf("enter auntnty less then 50 ");

						goto cheese;
					}
					else
					{


						while(!feof(f4))
						{

							 fscanf(f4,"qty of cheese puff :%d ",&cheese1);

							 if(cheese1!=che)
							 {
								acheese=cheese1-che;
								fprintf(f3,"qty of cheese puff %d",acheese);
							 }
						 }
						fclose(f3);
						fclose(f4);

					f3=fopen("cheese1.txt","r");
					f4=fopen("bill.txt","a");
					rewind(f3);
					while(!feof(f3))
					{
						fscanf(f3,"cheese puff :%d",&rcheese);
						if(rcheese!=x)
						{
							x=rcheese*che;


							break;
						}
					}
					fclose(f3);
					fclose(f4);


					}
					vada :;
				f4=fopen("vada1.txt","r");
				f3=fopen("tempvada.txt","w");
				printf("VADA PAV (max 50)");
				scanf("%d",&va);
				rewind(f4);

				if(va>50)
				{
					printf("enter auntnty less then 50 ");

					goto vada;
				}
				else
				{


					while(!feof(f4))
					{

					     fscanf(f4,"qty of vada pav %d ",&vada2);

					     if(puff2!=p)
					     {
						avada=vada2-va;
						fprintf(f3,"qty of vada pav %d",avada);
					    }
					 }
					fclose(f3);
					fclose(f4);
					f3=fopen("vada2.txt","r");
					f4=fopen("bill.txt","a");
					rewind(f3);
					while(!feof(f3))
					{
						fscanf(f3,"vada pav :%d",&rvada);
						if(rvada!=a)
						{
							a=rvada*va;


							break;
						}
					}

					}


			f3=fopen("price.txt","r");
			f4=fopen("bill.txt","a");
			rewind(f3);
			while(!feof(f3))
			{
				fscanf(f3,"  puff           :%d",&rpuff);
				if(rpuff!=pi)
				{
					pi=rpuff*p;
					total=pi+z+x+a;
					printf("\n------------BILL------------");
					printf("\n 1. PUFF         %d  %d  %d ",rpuff,p,pi);
					printf("\n 2. PIZZA        %d  %d  %d",pizza2,piz,z);
					printf("\n 3. CHEESE PUFF  %d  %d  %d",rcheese,che,x);
					printf("\n 4. VADA PAV     %d  %d  %d",rvada,va,a);

					printf("\ntotl----------------------%d",total);
					fprintf(f4,"\n------------BILL------------");
					fprintf(f4,"\n1. PUFF  %d  %d  %d ",rpuff,p,pi);
					fprintf(f4,"\n 2. PIZZA  %d  %d  %d",pizza2,piz,z);
					fprintf(f4,"\n 3. CHEESE PUFF  %d  %d  %d",rcheese,che,x);
					fprintf(f4,"\n 4. VADA PAV     %d  %d  %d",rvada,va,a);

					fprintf(f4,"\ntotal----------------------%d",total);
					break;
				}
			 }
			 fclose(f3);
			 fclose(f4);
			break;



		case 3 :clrscr();
			textcolor(BLUE+BLINK);
			textbackground(BROWN);
			 printf("\n\n\n\n\n\t\t\t\tCANTEEN DETAILS");
			printf("\n\n#TIMING:\n\n 11 AM TO 02 PM \n 03 PM TO 05 P");
			printf("\n\n#CANTEEN WILL CLOSED ON TUESDA");
			printf("\n\n#GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACE");
			printf("\n\n#TAKE YOUR SMART CARD WITH YO");
			printf("\n\n#COLLECT YOUR SMART CARD & BILL AFTER PAYMEN");
			printf("\n\n#DO NOT BREAK ANY CANTEEN ITEM");



			break;


		case 4 : clrscr();
			textcolor(RED);
			printf("detail of new customer\n\n");
			printf("enter the number of customer to be entered :");
			scanf("%d",&n);
			f1=fopen("ravi.txt","a");
			for(i=0;i<n;i++)
			{
				printf("enter name              :");
				flushall();
				gets(c1.cname);
				printf("enter number            :");
				flushall();
				scanf("%lf",&c1.mob);
				printf("enter smart card number      :");
				scanf("%d",&c1.smt);

				fprintf(f1,"\n%d\t\t %s\t\t %10.0lf\t\t",c1.smt,c1.cname,c1.mob);
			}


			fclose(f1);
			break;


		case 5:
			f3=fopen("ravi.txt","r");
			while((ch=fgetc(f3))!=EOF)
			{
				printf("%c",ch);
			}
			fclose(f3);
			getch();



			break;


	      case 6:    f1=fopen("temppuff.txt","r");
			 f2=fopen("temppizza.txt","r");
			 f3=fopen("tempcheese.txt","r");
			 f4=fopen("tempvada.txt","r");

			 fscanf(f1,"qty of puff %d",&apuff);
			 fscanf(f2,"qty of pizza %d",&apizza);
			 fscanf(f3,"qty of cheese puff %d",&acheese);
			 fscanf(f4,"qty of vada pav %d",&avada);

			 fclose(f1);
			 fclose(f2);
			 fclose(f3);
			 fclose(f4);

			 printf("\nqty of puff        :%d",apuff);
			 printf("\nqty of pizza       :%d",apizza);
			 printf("\nqty of cheese puff :%d",acheese);
			 printf("\nqty of vada pav    :%d",avada);
			  break;
	       default : printf("invalid entry ");



		}

	}while(d!=7);
	   }
   else
       {
  clrscr();

   printf("\n\t\t\t");

  textcolor(RED);
  gotoxy(28,12);
  cprintf("Invalid Username or Password");
  delay(1000);
  clrscr();
  textcolor(WHITE);
  printf("\n\n\n\n\n\n\t\t\t");
  printf("RE-");
  master_password();
      }

getch();

}
