#include<stdio.h>
struct details
{
	char first_name[100];
	char last_name[100];
	long long int aadhar_number;
	long long int credit_number;
	int expiry_month;
	long int expiry_year;
	int card_id;
	long long int contact_number;
}person;
int c,t1,t2,t3,s,ch1,a;
void location(void);
struct details read();
main()
{
	 FILE *de;
	 location();
}
void location(void)
{
	printf("\t \t \t \t \t \t------  WELCOME  ------ \t \t \t  ");
	printf("\n SELECT CITY:");
	printf("\n\t \t 1:WARANGAL \n\t \t 2:HANAMKONDA \n \t \t 3:KAZIPET");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("\n SELECT THEATRE:");
			printf("\n\t \t  1:PVR CINEMAS \n\t \t  2:ASIAN GEMINI \n\t \t  3:RAM LAXMAN \n\t \t  4:RADHIKA");
			scanf("%d",&t1);
			switch(t1)
			{
				case 1:
					printf("\n SELECT MOVIE:");
					printf("\n\t \t  1:RRR \n\t \t  2:KGF-2 \n\t \t  3:DR STRANGE \n\t \t  4:F3");
					scanf("%d",&s);	
					break;
					
				case 2:
					printf("\n SELECT MOVIE:");
					printf("\n\t \t  1:RRR \n\t \t  2:KGF-2 \n\t \t  3:DR STRANGE \n\t \t  4:F3");
					scanf("%d",&s);
					break;
				
				case 3:
					printf("\n SELECT MOVIE:");
					printf("\n\t \t  1:RRR \n\t \t  2:KGF-2 \n\t \t  3:F3");
					scanf("%d",&s);
					break;
					
				case 4:
					printf("\n SELECT MOVIE:");
					printf("\n\t \t  1:KGF-2 \n\t \t  2:F3");
					scanf("%d",&s);	
					break;					
			}
		break;
		case 2:
		    printf("\n SELECT THEATRE:");
			printf("\n\t \t  1:ASIAN SRIDEVI MULTIPLEX \n\t \t  2:ASHOKA \n\t \t  3:AMRUTHA");
		    scanf("%d",&t2);
			switch(t2)
			{
				case 1:
					printf("\n SELECT MOVIE:");
					printf("\n\t \t  1:RRR \n\t \t  2:KGF-2 \n\t \t  3:DR STRANGE \n\t \t  4:F3");
					scanf("%d",&s);
					break;
				
				case 2:
					printf("\n SELECT MOVIE:");
			     	printf("\n\t \t  1:RRR \n\t \t  2:KGF-2 \n\t \t  3:F3");	
					scanf("%d",&s);
					break;
					
				case 3:
					printf("\n SELECT MOVIE:");
					printf("\n\t \t  1:KGF-2 \n\t \t  2:F3");
					scanf("%d",&s);	
					break;							
			}
			break;
		case 3:
		    printf("\n SELECT THEATRE:");
			printf("\n\t \t  1:BHAVANI\n\t \t  2:SHAMBHAVI");
			scanf("%d",&t3);
			switch(t3)
			{
				case 1:
					printf("\n SELECT MOVIE:");
					printf("\n\t \t  1:RRR \n\t \t  2:KGF-2 \n\t \t  3:F3");
					scanf("%d",&s);
					break;
					
				case 2:
					printf("\n SELECT MOVIE:");
					printf("\n\t \t  1:KGF-2 \n\t \t  2:F3");
					scanf("%d",&s);
					break;									
			}   	
	}
    do
    {
	printf("\n ENTER YOUR CHOICE-");
		printf("\n 1:TO ENTER YOUR DETAILS \n 2:TO DISPLAY ALL THE DETAILS");	
    scanf("%d",&a);
	  switch(a)
	  {
		case 1:
		      read(person);
		      break;
		      
		case 2:
			display(person);
			break;
		
	  }
	  printf("\n Do you want to continue if yes,press y");
	  scanf(" %c",&ch1);
    }while(ch1=='y');
}
struct details read()
{
    FILE *de;
	 printf("ENTER THE FOLLOWING DETAILS:\n FIRST NAME \n LAST NAME \n AADHAR NUMBER \n CREDIT NUMBER \n EXPIRY MONTH \n EXPIRY YEAR \n CARD ID \n CONTACT NUMBER");
	 de=fopen("DETAILS_OF_CUSTOMER","a");
	 fscanf(stdin,"%s %s %lld %lld %d %ld %d %lld",person.first_name,person.last_name,&person.aadhar_number,&person.credit_number,&person.expiry_month,&person.expiry_year,&person.card_id,&person.contact_number);	
     fprintf(de,"\n%s \n%s \n%lld \n%lld \n%d \n%ld \n%d \n%lld",person.first_name,person.last_name,person.aadhar_number,person.credit_number,person.expiry_month,person.expiry_year,person.card_id,person.contact_number);
	 fclose(de);
     return person;
}
void display(struct details person)
{
	FILE *de;
	 printf("\n THE DETAILS YOU HAVE ENTERED:");
     de=fopen("DETAILS_OF_CUSTOMER","r");
    while(fscanf(de,"%s %s %lld %lld %d %ld %d %lld",person.first_name,person.last_name,&person.aadhar_number,&person.credit_number,&person.expiry_month,&person.expiry_year,&person.card_id,&person.contact_number)!=EOF)
	 {
	 fprintf(stdout,"\n\n\n%s \n%s \n%lld \n%lld \n%d \n%ld \n%d \n%lld",person.first_name,person.last_name,person.aadhar_number,person.credit_number,person.expiry_month,person.expiry_year,person.card_id,person.contact_number);
	 }
	 fclose(de);	
}

