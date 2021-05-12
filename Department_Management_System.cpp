//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<windows.h>
#include<conio.h>//Use for delay(),getch(),gotoxy(),etc.
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>

char ans=0; 
int ok;
int b, valid=0;
//FUNCTION DECLERATIONS
void ReportMenu(void);
void OneReportMenu(void);
void TwoReportMenu(void);
void ThreeReportMenu(void);
void FourReportMenu(void);
void FiveReportMenu(void);
void SixReportMenu(void);
void SevenReportMenu(void);
void EightReportMenu(void);
void OneReport_Add(void);
void OneReport_Search(void);
void OneReport_List(void);
void TwoReport_Add(void);
void TwoReport_Search(void);
void TwoReport_List(void);
void ThreeReport_Add(void);
void ThreeReport_Search(void);
void ThreeReport_List(void);
void FourReport_Add(void);
void FourReport_Search(void);
void FourReport_List(void);
void FiveReport_Add(void);
void FiveReport_Search(void);
void FiveReport_List(void);
void SixReport_Add(void);
void SixReport_Search(void);
void SixReport_List(void);
void SevenReport_Add(void);
void SevenReport_Search(void);
void SevenReport_List(void);
void EightReport_Add(void);
void EightReport_List(void);
void EightReport_Search(void);
void WelcomeScreen(void);//WelcomeScreen function decleration
void Title(void);//Title function decleration
void MainMenu(void);//MainMenu function decleration
void TeacherMenu(void);//TeacherMenu function decleration
void StudentMenu(void);//StudentMenu function decleration
void TimetableMenu(void);//TimetableMenu function declaration
void OneMenu(void);//FirstMenu function decleration
void SecondMenu(void);//SecondMenu function decleration
void ThirdMenu(void);//ThirdMenu function decleration
void FourthMenu(void);//FourthMenu function decleration
void FifthMenu(void);//FifthMenu function decleration
void SixthMenu(void);//SixthMenu function decleration
void SeventhMenu(void);//SeventhMenu function decleration
void EighthMenu(void);//EighthMenu function decleration
void OneTimetable(void);
void TwoTimetable(void);
void ThreeTimetable(void);
void FourTimetable(void);
void FiveTimetable(void);
void SixTimetable(void);
void SevenTimetable(void);
void EightTimetable(void);
void LoginScreen(void);//LoginScreen function decleration
void Add_Teacher(void);//adds teacher
void List_Teacher(void);//lists teacher
void Search_Teacher(void);//search teacher
void Edit_Teacher(void);//edit Teacher
void Delete_Teacher(void);//delete teacher
void One_Add(void);
void One_List(void);
void One_Search(void);
void One_Edit(void);
void One_Delete(void);
void Two_Add(void);
void Two_List(void);
void Two_Search(void);
void Two_Edit(void);
void Two_Delete(void);
void Three_Add(void);
void Three_List(void);
void Three_Search(void);
void Three_Edit(void);
void Three_Delete(void);
void Four_Add(void);
void Four_List(void);
void Four_Search(void);
void Four_Edit(void);
void Four_Delete(void);
void Five_Add(void);
void Five_List(void);
void Five_Search(void);
void Five_Edit(void);
void Five_Delete(void);
void Six_Add(void);
void Six_List(void);
void Six_Search(void);
void Six_Edit(void);
void Six_Delete(void);
void Seven_Add(void);
void Seven_List(void);
void Seven_Search(void);
void Seven_Edit(void);
void Seven_Delete(void);
void Eight_Add(void);
void Eight_List(void);
void Eight_Search(void);
void Eight_Edit(void);
void Eight_Delete(void);
void ex_it(void);//exit function declaration
//Defines gotoxy() for ANSI C compilers.
void gotoxy(short x, short y)
{
	COORD pos = {x, y};//sets co-ordinates in (x,y).
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
struct timetable{
	char day[20];
	char sub1[20];
	char sub2[20];
	char sub3[20];
	char sub4[20];
	char sub5[20];
	char sub6[20];
	char sub7[20];
	char sub8[20];
}table;
//For teachers
struct teacher
{
 char id[20];//staaf id of teacher
 char fst_name[20];//first name of teacher
 char lst_name[20];//last name of teacher
 char gender;//gender of teacher
 char dob[20];//date of birth
 char qualification[20];//Qualification of teacher
 int age; //age of teacher
 int exp;//Experiance of the person
 char addrs[20];//Adders of teacher home
 char cel_no[20];//Phone number 
 char email[20];//email id 

}tech;//Variable of teacher type
//for Students
struct student
{
 char fname[20];//for student first name
 char lname[20];//for student last name
 char registration[20];//for Registration No number
 char gender;//gender of student
 int age;//for age info
 char phone[20];//phone no
 char dob[20];//date of birth
 char email[20];
 char address[20];
 char feestruc[20];
 char feebal[20];
 char feepay[20];
 
}s;//Variable of student type

struct report
{
	char name[20];
	char lname[20];
	char rollno[20];
	char internal[20];
	char sub1[20];
    char sub2[20];
	char sub3[20];
	char sub4[20];
	char sub5[20];
	char sub6[20];	
	char sub7[20];
	char sub8[20];
}r;
main(void)
{
	system("color 10");
    WelcomeScreen();//Use to call WelcomeScreen function
    system("cls");
	Title();//Use to call Title function
	LoginScreen();//Use to call Menu function
	
	
	

}
/* ************************************************* Welcome Screen ********************************************* */
void WelcomeScreen(void) //function for welcome screen
{
	gotoxy(25,6);
	printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
	gotoxy(25,7);
	printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
	gotoxy(25,8);
	printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	gotoxy(25,9);
	printf("        =                 WELCOME                   =");
	gotoxy(25,10);
	printf("        =                   TO                      =");
	gotoxy(25,11);
	printf("        =                  EWIT                     =");
	gotoxy(25,12);
	printf("        =             ISE DEPARTMENT                =");
	gotoxy(25,13);
	printf("        =               MANAGEMENT                  =");
	gotoxy(25,14);
	printf("        =                 SYSTEM                    =");
	gotoxy(25,15);
	printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	gotoxy(25,16);
	printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
	gotoxy(25,17);
	printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
	gotoxy(28,22);
	printf(" Enter any key to continue.....");
	getch();
	
}
/* ************************************************* Title Screen ********************************************* */
void Title(void)//function for title screen
{
	printf("\n\n\t\t----------------------------------------------------------------------------------");
	printf("\n\t\t\t\t      	             ISE DEPARTMENT         ");
	printf("\n\t\t----------------------------------------------------------------------------------");
}
/* ************************************************* Main Menu ********************************************* */
void MainMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. Teacher Information\n");
	printf("\n\t\t\t\t2. Student Information\n");
	printf("\n\t\t\t\t3. Time Table\n");
	printf("\n\t\t\t\t4. Report\n");
	printf("\n\t\t\t\t5. Exit\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 5:");
	scanf("%i", &choose);
	
	switch(choose)//switch to differeht case
	{
	
	case 1:
			TeacherMenu();//TeacherMenu function is called
    		break;
    case 2:
    		StudentMenu();
    		break;
	case 3:
			TimetableMenu();
    		break;
	case 4:
			ReportMenu();
    		break	;
	case 5:
			ex_it();//ex_it function is call
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch
		
	
}
/* ************************************************* Teacher Menu ********************************************* */
void TeacherMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. Add Teacher Information\n");
	printf("\n\t\t\t\t2. List Teachers Record\n");
	printf("\n\t\t\t\t3. Search Teachers Record\n");
	printf("\n\t\t\t\t4. Edit Teachers Record \n");
	printf("\n\t\t\t\t5. Delete Teachers Record\n");
	printf("\n\t\t\t\t6. Back to Main Menu\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 6:");
	scanf("%i", &choose);
	
	switch(choose)//switch to different case
	{
	
	case 1:
			Add_Teacher();
    		break;
    case 2:
    		List_Teacher();
    		break;
	case 3:
			Search_Teacher();
    		break;
    case 4:
			Edit_Teacher();
			break;
	case 5:
			Delete_Teacher();
			break;
	case 6:
			MainMenu();
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch
		
	
}
/* **************************************ADD TEACHER*******************************************/

void Add_Teacher(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("teacher.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW TEACHER                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ******************************************* STAFF ID ************************************************************** */	    
	
	printf("\n\t\t\tStaff ID: ");
    scanf("%s",tech.id);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",tech.fst_name);
	tech.fst_name[0]=toupper(tech.fst_name[0]);
	if(strlen(tech.fst_name)>20||strlen(tech.fst_name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(tech.fst_name);b++)
		{
			if (isalpha(tech.fst_name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	
	printf("\n\t\t\tLast Name: ");
    scanf("%s",tech.lst_name);
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&tech.gender);
		if(toupper(tech.gender)=='M'|| toupper(tech.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ******************************************* DATE OF BIRTH ************************************************************** */	    
	
	printf("\n\t\t\tDate of birth(in order dd-mm-yyyy): ");
    scanf("%s",tech.dob);

/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
    scanf(" %i",&tech.age);

/* ***************************************** Qualification ********************************************************************** */	
	
	printf("\n\t\t\tQualification:");
    scanf(" %s",tech.qualification);

/* ***************************************** Experience ********************************************************************** */	
    printf("\n\t\t\tExperience:");
    scanf(" %i",&tech.exp);
/* **************************************** Address ******************************************************************* */    
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",tech.addrs);
    tech.addrs[0]=toupper(tech.addrs[0]);
    if(strlen(tech.addrs)>20||strlen(tech.addrs)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
	
}while(!valid);
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",tech.cel_no);
    if(strlen(tech.cel_no)>10||strlen(tech.cel_no)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(tech.cel_no);b++)
		{
			if (!isalpha(tech.cel_no[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
    scanf("%s",tech.email);
    if (strlen(tech.email)>30||strlen(tech.email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
	}
}while(strlen(tech.email)>30||strlen(tech.email)<8);


	fprintf(ek,"%s %s %s %c %s %i %i %s %s %s %s \n", tech.id,tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Add_Teacher();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	TeacherMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
/* ******************************************* List Teachers ***************************************** */
void List_Teacher()
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("teacher.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Teachers Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("Staff ID");
		gotoxy(12,15);
		printf("Full Name");
		gotoxy(32,15);
		printf("Gender");
		gotoxy(42,15);
		printf("DOB");
		gotoxy(56,15);
		printf("Age");
		gotoxy(66,15);
		printf("Experience");
		gotoxy(80,15);
		printf("Qualification");
		gotoxy(95,15);
		printf("Phone No.");
		gotoxy(110,15);
		printf("Address");
		gotoxy(125,15);
		printf("Email-id");	
		gotoxy(1,16);
		printf("===================================================================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %i %i %s %s  %s %s\n", tech.id,tech.fst_name,tech.lst_name,&tech.gender,tech.dob,&tech.age,&tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",tech.id);
			gotoxy(12,row);
			printf("%s %s",tech.fst_name,tech.lst_name);
			gotoxy(32,row);
			printf("%c",tech.gender);
			gotoxy(42,row);
			printf("%s",tech.dob);
			gotoxy(56,row);
			printf("%i",tech.age);
			gotoxy(66,row);
			printf("%i",tech.exp);
			gotoxy(80,row);
			printf("%s",tech.qualification);
			gotoxy(95,row);
			printf("%s",tech.cel_no);
			gotoxy(110,row);
			printf("%s",tech.addrs);
			gotoxy(125,row);
			printf("%s", tech.email);
			row++;
		}
		fclose(ek);
		getch();
		TeacherMenu();
}
 
/* ******************************************* Search Teachers ***************************************** */

void Search_Teacher(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("teacher.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Teachers Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Staff Id to be viewed:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %i %i %s %s %s %s\n",tech.id, tech.fst_name,tech.lst_name,&tech.gender,tech.dob,&tech.age,&tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email)!=EOF)
	{
		if(strcmp(tech.id,name)==0)
		{
		gotoxy(1,15);
		printf("Staff ID");
		gotoxy(12,15);
		printf("Full Name");
		gotoxy(32,15);
		printf("Gender");
		gotoxy(42,15);
		printf("DOB");
		gotoxy(56,15);
		printf("Age");
		gotoxy(66,15);
		printf("Experience");
		gotoxy(80,15);
		printf("Qualification");
		gotoxy(95,15);
		printf("Phone No.");
		gotoxy(110,15);
		printf("Address");
		gotoxy(125,15);
		printf("Email-id");	
		gotoxy(1,16);
	printf("===================================================================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",tech.id);
			gotoxy(12,row);
			printf("%s %s",tech.fst_name,tech.lst_name);
			gotoxy(32,row);
			printf("%c",tech.gender);
			gotoxy(42,row);
			printf("%s",tech.dob);
			gotoxy(56,row);
			printf("%i",tech.age);
			gotoxy(66,row);
			printf("%i",tech.exp);
			gotoxy(80,row);
			printf("%s",tech.qualification);
			gotoxy(95,row);
			printf("%s",tech.cel_no);
			gotoxy(110,row);
			printf("%s",tech.addrs);
			gotoxy(125,row);
			printf("%s", tech.email);
			break;
		}
	   }
	   if(strcmp(tech.id,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Search_Teacher();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		TeacherMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
/* ******************************************* Edit Teachers ***************************************** */

void Edit_Teacher(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("teacher.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		TeacherMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Teachers Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Staff ID of the Teacher : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			TeacherMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %i %i %s %s %s %s  \n", tech.id,tech.fst_name,tech.lst_name,&tech.gender,tech.dob,&tech.age,&tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email)!=EOF)
		{
			if(strcmp(tech.id, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%i \t%i \t%s \t%s  \t%s \t%s\n",tech.id,tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);
				gotoxy(12,22);
				printf("Enter New Staff ID:");
				scanf("%s",tech.id);
				gotoxy(12,24);	
				printf("Enter New First Name: ");
				scanf("%s",tech.fst_name);    
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",tech.lst_name);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&tech.gender);
				tech.gender=toupper(tech.gender);
				gotoxy(12,30);
				printf("Enter DOB(in the form dd-mm-yyyy): ");
				scanf(" %s",tech.dob);
				gotoxy(12,32);
				printf("Enter age: ");
				scanf(" %i",&tech.age);
				gotoxy(12,34);
				printf("Enter Experience in years: ");
				scanf(" %i",&tech.exp);
				gotoxy(12,36);
				printf("Enter Qualification: ");
				scanf("%s",tech.qualification);
				tech.qualification[0]=toupper(tech.qualification[0]);
			    gotoxy(12,38);
				printf("Enter Contact no: ");
				scanf("%s",tech.cel_no);
				gotoxy(12,40);
				printf("Enter Address: ");
				scanf("%s",tech.addrs);
			    tech.addrs[0]=toupper(tech.addrs[0]);
			    gotoxy(12,42);
			    printf("Enter email-id: ");
			    scanf("%s",tech.email);
			    printf("\nPress U character for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c  %s %i %i %s %s %s %s \n",tech.id,tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);
				printf("\n\n\t\t\tTeacher record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s %i %i %s %s %s %s \n",tech.id,tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   remove("teacher.txt");
   	   rename("temp2.txt","teacher.txt");
		getch();
		TeacherMenu();		
}
/* ******************************************* Delete Teachers ***************************************** */

void Delete_Teacher()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("teacher.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Teachers Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Staff ID to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s %i %i %s %s %s %s \n",tech.id, tech.fst_name,tech.lst_name,&tech.gender,tech.dob,&tech.age,&tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email)!=EOF)
	{
		if (strcmp(tech.id,name)!=0)
		fprintf(ft,"%s %s %s %c  %s %i %i %s %s %s  %s \n",tech.id, tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);
		else 
		{
			printf("%s %s %s %c %s %i %i %s %s %s %s  \n", tech.id,tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		TeacherMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("teacher.txt");
		rename("temp.txt","teacher.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		TeacherMenu();
	}

}

/* ************************************************* Student Menu ********************************************* */
void StudentMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. 1st Sem\n");
	printf("\n\t\t\t\t2. 2nd Sem\n");
	printf("\n\t\t\t\t3. 3rd Sem \n");
	printf("\n\t\t\t\t4. 4th Sem \n");
	printf("\n\t\t\t\t5. 5th Sem\n");
	printf("\n\t\t\t\t6. 6th Sem\n");
	printf("\n\t\t\t\t7. 7th Sem\n");
	printf("\n\t\t\t\t8. 8th Sem\n");
	printf("\n\t\t\t\t9. Back to main menu\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 9:");
	scanf("%i", &choose);
	
	switch(choose)//switch to different case
	{
	
	case 1:
			OneMenu();//Add_rec function is called
    		break;
    case 2:
    		SecondMenu();
    		break;
	case 3:
			ThirdMenu();//View_rec function is call
    		break;
    case 4:
			FourthMenu();//Edit_rec function is call
			break;
	case 5:
			FifthMenu();//Dlt_rec function is call
			break;
	case 6:
			SixthMenu();//ex_it function is call
    		break;
    case 7:
			SeventhMenu();//ex_it function is call
    		break;
    case 8:
			EighthMenu();//ex_it function is call
    		break;
    case 9:
			MainMenu();//ex_it function is call
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch
		
	
}
/* ************************************************* First Sem Menu ********************************************* */
void OneMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("First Sem Student Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						One_Add();
						break;
				case 2:
			    		One_List();
						break;
				case 3:
						One_Search();
						break;
				case 4:
						One_Edit();
						break;
				case 5:
						One_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void One_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("one.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ******************************************* DATE OF BIRTH ************************************************************** */	    
	
	printf("\n\t\t\tDate of birth(in order dd-mm-yyyy): ");
    scanf("%s",s.dob);

/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
    scanf(" %i",&s.age);

/* ***************************************** Fee Structure ********************************************************************** */	
     
    printf("\n\t\t\tFee Structure :");
    scanf(" %s",s.feestruc);
/* ******************************************* FEE PAID ************************************************************** */	    
	
	printf("\n\t\t\tFee Paid: ");
    scanf("%s",s.feepay);

/* ******************************************* FEE BALANCE ************************************************************** */	    
	
	printf("\n\t\t\tFee Balance:  ");
    scanf("%s",s.feebal);

     
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* **************************************** Address ******************************************************************* */    
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",s.address);
    s.address[0]=toupper(s.address[0]);
    if(strlen(s.address)>20||strlen(s.address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
	
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
    scanf("%s",s.email);
    if (strlen(s.email)>30||strlen(s.email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
	}
}while(strlen(s.email)>30||strlen(s.email)<8);



	fprintf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	One_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	OneMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void One_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("one.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!1st Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
		printf("===================================================================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			row++;
		}
		fclose(ek);
		getch();
		OneMenu();
}
void One_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("one.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
			printf("===================================================================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        One_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		OneMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void One_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("one.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		OneMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the USN of the Student : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%i \t%s \t%s \t%s \t%s \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				gotoxy(12,22);
				printf("Enter New USN: ");
				scanf("%s",s.registration);
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);    
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter New DOB: ");
				scanf("%s",s.dob);    
				gotoxy(12,32);
				printf("Enter age: ");
				scanf(" %i",&s.age);
				gotoxy(12,34);
				printf("Enter New Fee-Structure: ");
				scanf(" %s",s.feestruc);
				gotoxy(12,36);
				printf("Enter New Fee-Paid: ");
				scanf(" %s",s.feepay);
				gotoxy(12,38);
				printf("Enter New Fee-Balance: ");
				scanf(" %s",s.feebal);
				gotoxy(12,40);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
				gotoxy(12,42);
				printf("Enter New Address: ");
				scanf(" %s",s.address);
				gotoxy(12,44);
				printf("Enter New email-id: ");
				scanf(" %s",s.email);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("one.txt");
   	    rename("temp2.txt","one.txt");
		getch();
		OneMenu();		
}
void One_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("one.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
		else 
		{
			printf("%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		OneMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("one.txt");
		rename("temp.txt","one.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneMenu();
	}
}	

/* ************************************************* Second Sem Menu ********************************************* */
void SecondMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Second Sem Student Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Two_Add();
						break;
				case 2:
			    		Two_List();
						break;
				case 3:
						Two_Search();
						break;
				case 4:
						Two_Edit();
						break;
				case 5:
						Two_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}

void Two_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("two.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ******************************************* DATE OF BIRTH ************************************************************** */	    
	
	printf("\n\t\t\tDate of birth(in order dd-mm-yyyy): ");
    scanf("%s",s.dob);

/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
    scanf(" %i",&s.age);

/* ***************************************** Fee Structure ********************************************************************** */	
     
    printf("\n\t\t\tFee Structure :");
    scanf(" %s",s.feestruc);
/* ******************************************* FEE PAID ************************************************************** */	    
	
	printf("\n\t\t\tFee Paid: ");
    scanf("%s",s.feepay);

/* ******************************************* FEE BALANCE ************************************************************** */	    
	
	printf("\n\t\t\tFee Balance:  ");
    scanf("%s",s.feebal);

     
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* **************************************** Address ******************************************************************* */    
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",s.address);
    s.address[0]=toupper(s.address[0]);
    if(strlen(s.address)>20||strlen(s.address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
	
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
    scanf("%s",s.email);
    if (strlen(s.email)>30||strlen(s.email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
	}
}while(strlen(s.email)>30||strlen(s.email)<8);



	fprintf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Two_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	SecondMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Two_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("two.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!2nd Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
		printf("===================================================================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			row++;
		}
		fclose(ek);
		getch();
		SecondMenu();	
}
void Two_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("two.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
			printf("===================================================================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Two_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SecondMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Two_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("two.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SecondMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the USN of the Student : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			SecondMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%i \t%s \t%s \t%s \t%s \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				gotoxy(12,22);
				printf("Enter New USN: ");
				scanf("%s",s.registration);
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);    
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter New DOB: ");
				scanf("%s",s.dob);    
				gotoxy(12,32);
				printf("Enter age: ");
				scanf(" %i",&s.age);
				gotoxy(12,34);
				printf("Enter New Fee-Structure: ");
				scanf(" %s",s.feestruc);
				gotoxy(12,36);
				printf("Enter New Fee-Paid: ");
				scanf(" %s",s.feepay);
				gotoxy(12,38);
				printf("Enter New Fee-Balance: ");
				scanf(" %s",s.feebal);
				gotoxy(12,40);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
				gotoxy(12,42);
				printf("Enter New Address: ");
				scanf(" %s",s.address);
				gotoxy(12,44);
				printf("Enter New email-id: ");
				scanf(" %s",s.email);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("two.txt");
   	    rename("temp2.txt","two.txt");
		getch();
		SecondMenu();		
}
void Two_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("two.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
		else 
		{
			printf("%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		SecondMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("two.txt");
		rename("temp.txt","two.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		SecondMenu();
	}
}

/* ************************************************* Third Sem Menu ********************************************* */
void ThirdMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Third Sem Student Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Three_Add();
						break;
				case 2:
			    		Three_List();
						break;
				case 3:
						Three_Search();
						break;
				case 4:
						Three_Edit();
						break;
				case 5:
						Three_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Three_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("three.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ******************************************* DATE OF BIRTH ************************************************************** */	    
	
	printf("\n\t\t\tDate of birth(in order dd-mm-yyyy): ");
    scanf("%s",s.dob);

/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
    scanf(" %i",&s.age);

/* ***************************************** Fee Structure ********************************************************************** */	
     
    printf("\n\t\t\tFee Structure :");
    scanf(" %s",s.feestruc);
/* ******************************************* FEE PAID ************************************************************** */	    
	
	printf("\n\t\t\tFee Paid: ");
    scanf("%s",s.feepay);

/* ******************************************* FEE BALANCE ************************************************************** */	    
	
	printf("\n\t\t\tFee Balance:  ");
    scanf("%s",s.feebal);

     
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* **************************************** Address ******************************************************************* */    
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",s.address);
    s.address[0]=toupper(s.address[0]);
    if(strlen(s.address)>20||strlen(s.address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
	
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
    scanf("%s",s.email);
    if (strlen(s.email)>30||strlen(s.email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
	}
}while(strlen(s.email)>30||strlen(s.email)<8);



	fprintf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Three_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	ThirdMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Three_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("three.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!3rd Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
		printf("===================================================================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			row++;
		}
		fclose(ek);
		getch();
		ThirdMenu();
}
void Three_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("three.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
			printf("===================================================================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Three_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		ThirdMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Three_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("three.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		ThirdMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the USN of the Student : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			ThirdMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%i \t%s \t%s \t%s \t%s \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				gotoxy(12,22);
				printf("Enter New USN: ");
				scanf("%s",s.registration);
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);    
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter New DOB: ");
				scanf("%s",s.dob);    
				gotoxy(12,32);
				printf("Enter age: ");
				scanf(" %i",&s.age);
				gotoxy(12,34);
				printf("Enter New Fee-Structure: ");
				scanf(" %s",s.feestruc);
				gotoxy(12,36);
				printf("Enter New Fee-Paid: ");
				scanf(" %s",s.feepay);
				gotoxy(12,38);
				printf("Enter New Fee-Balance: ");
				scanf(" %s",s.feebal);
				gotoxy(12,40);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
				gotoxy(12,42);
				printf("Enter New Address: ");
				scanf(" %s",s.address);
				gotoxy(12,44);
				printf("Enter New email-id: ");
				scanf(" %s",s.email);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("three.txt");
   	    rename("temp2.txt","three.txt");
		getch();
		ThirdMenu();		
}
void Three_Delete()
{
char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("three.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
		else 
		{
			printf("%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		ThirdMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("three.txt");
		rename("temp.txt","three.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		ThirdMenu();
	}
}

/* ************************************************* Fourth Sem Menu ********************************************* */
void FourthMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fourth Sem Student Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Four_Add();
						break;
				case 2:
			    		Four_List();
						break;
				case 3:
						Four_Search();
						break;
				case 4:
						Four_Edit();
						break;
				case 5:
						Four_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Four_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("four.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ******************************************* DATE OF BIRTH ************************************************************** */	    
	
	printf("\n\t\t\tDate of birth(in order dd-mm-yyyy): ");
    scanf("%s",s.dob);

/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
    scanf(" %i",&s.age);

/* ***************************************** Fee Structure ********************************************************************** */	
     
    printf("\n\t\t\tFee Structure :");
    scanf(" %s",s.feestruc);
/* ******************************************* FEE PAID ************************************************************** */	    
	
	printf("\n\t\t\tFee Paid: ");
    scanf("%s",s.feepay);

/* ******************************************* FEE BALANCE ************************************************************** */	    
	
	printf("\n\t\t\tFee Balance:  ");
    scanf("%s",s.feebal);

     
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* **************************************** Address ******************************************************************* */    
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",s.address);
    s.address[0]=toupper(s.address[0]);
    if(strlen(s.address)>20||strlen(s.address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
	
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
    scanf("%s",s.email);
    if (strlen(s.email)>30||strlen(s.email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
	}
}while(strlen(s.email)>30||strlen(s.email)<8);



	fprintf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Four_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	FourthMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Four_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("four.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!4th Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
		printf("===================================================================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			row++;
		}
		fclose(ek);
		getch();
		FourthMenu();
}
void Four_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("four.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
			printf("===================================================================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Four_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FourthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Four_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("four.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		FourthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the USN of the Student : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			FourthMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%i \t%s \t%s \t%s \t%s \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				gotoxy(12,22);
				printf("Enter New USN: ");
				scanf("%s",s.registration);
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);    
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter New DOB: ");
				scanf("%s",s.dob);    
				gotoxy(12,32);
				printf("Enter age: ");
				scanf(" %i",&s.age);
				gotoxy(12,34);
				printf("Enter New Fee-Structure: ");
				scanf(" %s",s.feestruc);
				gotoxy(12,36);
				printf("Enter New Fee-Paid: ");
				scanf(" %s",s.feepay);
				gotoxy(12,38);
				printf("Enter New Fee-Balance: ");
				scanf(" %s",s.feebal);
				gotoxy(12,40);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
				gotoxy(12,42);
				printf("Enter New Address: ");
				scanf(" %s",s.address);
				gotoxy(12,44);
				printf("Enter New email-id: ");
				scanf(" %s",s.email);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("four.txt");
   	    rename("temp2.txt","four.txt");
		getch();
		FourthMenu();		
}
void Four_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("four.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
		else 
		{
			printf("%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		FourthMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("four.txt");
		rename("temp.txt","four.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		FourthMenu();
	}
}

/* ************************************************* Fifth Sem Menu ********************************************* */
void FifthMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fifth Sem Student Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Five_Add();
						break;
				case 2:
			    		Five_List();
						break;
				case 3:
						Five_Search();
						break;
				case 4:
						Five_Edit();
						break;
				case 5:
						Five_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Five_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("five.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ******************************************* DATE OF BIRTH ************************************************************** */	    
	
	printf("\n\t\t\tDate of birth(in order dd-mm-yyyy): ");
    scanf("%s",s.dob);

/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
    scanf(" %i",&s.age);

/* ***************************************** Fee Structure ********************************************************************** */	
     
    printf("\n\t\t\tFee Structure :");
    scanf(" %s",s.feestruc);
/* ******************************************* FEE PAID ************************************************************** */	    
	
	printf("\n\t\t\tFee Paid: ");
    scanf("%s",s.feepay);

/* ******************************************* FEE BALANCE ************************************************************** */	    
	
	printf("\n\t\t\tFee Balance:  ");
    scanf("%s",s.feebal);

     
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* **************************************** Address ******************************************************************* */    
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",s.address);
    s.address[0]=toupper(s.address[0]);
    if(strlen(s.address)>20||strlen(s.address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
	
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
    scanf("%s",s.email);
    if (strlen(s.email)>30||strlen(s.email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
	}
}while(strlen(s.email)>30||strlen(s.email)<8);



	fprintf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Five_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	FifthMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Five_List(void)
{
 	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("five.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!5th Sem Students Record !!!!!!!!!!!!!\n");
	gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
		printf("===================================================================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			row++;
		}
		fclose(ek);
		getch();
		FifthMenu();	
}
void Five_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("five.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
			printf("===================================================================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Five_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FifthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Five_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("five.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		FifthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the USN of the Student : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			FifthMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%i \t%s \t%s \t%s \t%s \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				gotoxy(12,22);
				printf("Enter New USN: ");
				scanf("%s",s.registration);
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);    
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter New DOB: ");
				scanf("%s",s.dob);    
				gotoxy(12,32);
				printf("Enter age: ");
				scanf(" %i",&s.age);
				gotoxy(12,34);
				printf("Enter New Fee-Structure: ");
				scanf(" %s",s.feestruc);
				gotoxy(12,36);
				printf("Enter New Fee-Paid: ");
				scanf(" %s",s.feepay);
				gotoxy(12,38);
				printf("Enter New Fee-Balance: ");
				scanf(" %s",s.feebal);
				gotoxy(12,40);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
				gotoxy(12,42);
				printf("Enter New Address: ");
				scanf(" %s",s.address);
				gotoxy(12,44);
				printf("Enter New email-id: ");
				scanf(" %s",s.email);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("five.txt");
   	    rename("temp2.txt","five.txt");
		getch();
		FifthMenu();		
}
void Five_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("five.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
		else 
		{
			printf("%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		FifthMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("five.txt");
		rename("temp.txt","five.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		FifthMenu();
	}
}

/* ************************************************* Sixth Sem Menu ********************************************* */
void SixthMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Sixth Sem Student Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Six_Add();
						break;
				case 2:
			    		Six_List();
						break;
				case 3:
						Six_Search();
						break;
				case 4:
						Six_Edit();
						break;
				case 5:
						Six_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Six_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("six.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ******************************************* DATE OF BIRTH ************************************************************** */	    
	
	printf("\n\t\t\tDate of birth(in order dd-mm-yyyy): ");
    scanf("%s",s.dob);

/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
    scanf(" %i",&s.age);

/* ***************************************** Fee Structure ********************************************************************** */	
     
    printf("\n\t\t\tFee Structure :");
    scanf(" %s",s.feestruc);
/* ******************************************* FEE PAID ************************************************************** */	    
	
	printf("\n\t\t\tFee Paid: ");
    scanf("%s",s.feepay);

/* ******************************************* FEE BALANCE ************************************************************** */	    
	
	printf("\n\t\t\tFee Balance:  ");
    scanf("%s",s.feebal);

     
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* **************************************** Address ******************************************************************* */    
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",s.address);
    s.address[0]=toupper(s.address[0]);
    if(strlen(s.address)>20||strlen(s.address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
	
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
    scanf("%s",s.email);
    if (strlen(s.email)>30||strlen(s.email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
	}
}while(strlen(s.email)>30||strlen(s.email)<8);



	fprintf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Six_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	SixthMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Six_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("six.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!6th Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
		printf("===================================================================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			row++;
		}
		fclose(ek);
		getch();
		SixthMenu();
}
void Six_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("six.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
			printf("===================================================================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Six_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SixthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Six_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("six.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SixthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the USN of the Student : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			SixthMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%i \t%s \t%s \t%s \t%s \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				gotoxy(12,22);
				printf("Enter New USN: ");
				scanf("%s",s.registration);
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);    
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter New DOB: ");
				scanf("%s",s.dob);    
				gotoxy(12,32);
				printf("Enter age: ");
				scanf(" %i",&s.age);
				gotoxy(12,34);
				printf("Enter New Fee-Structure: ");
				scanf(" %s",s.feestruc);
				gotoxy(12,36);
				printf("Enter New Fee-Paid: ");
				scanf(" %s",s.feepay);
				gotoxy(12,38);
				printf("Enter New Fee-Balance: ");
				scanf(" %s",s.feebal);
				gotoxy(12,40);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
				gotoxy(12,42);
				printf("Enter New Address: ");
				scanf(" %s",s.address);
				gotoxy(12,44);
				printf("Enter New email-id: ");
				scanf(" %s",s.email);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("six.txt");
   	    rename("temp2.txt","six.txt");
		getch();
		SixthMenu();		
}
void Six_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("six.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
		else 
		{
			printf("%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		SixthMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("six.txt");
		rename("temp.txt","six.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		SixthMenu();
	}
}

/* ************************************************* Seventh Sem Menu ********************************************* */
void SeventhMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Seventh Sem Student Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Seven_Add();
						break;
				case 2:
			    		Seven_List();
						break;
				case 3:
						Seven_Search();
						break;
				case 4:
						Seven_Edit();
						break;
				case 5:
						Seven_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Seven_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("seven.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ******************************************* DATE OF BIRTH ************************************************************** */	    
	
	printf("\n\t\t\tDate of birth(in order dd-mm-yyyy): ");
    scanf("%s",s.dob);

/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
    scanf(" %i",&s.age);

/* ***************************************** Fee Structure ********************************************************************** */	
     
    printf("\n\t\t\tFee Structure :");
    scanf(" %s",s.feestruc);
/* ******************************************* FEE PAID ************************************************************** */	    
	
	printf("\n\t\t\tFee Paid: ");
    scanf("%s",s.feepay);

/* ******************************************* FEE BALANCE ************************************************************** */	    
	
	printf("\n\t\t\tFee Balance:  ");
    scanf("%s",s.feebal);

     
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* **************************************** Address ******************************************************************* */    
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",s.address);
    s.address[0]=toupper(s.address[0]);
    if(strlen(s.address)>20||strlen(s.address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
	
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
    scanf("%s",s.email);
    if (strlen(s.email)>30||strlen(s.email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
	}
}while(strlen(s.email)>30||strlen(s.email)<8);



	fprintf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    		Seven_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	SeventhMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Seven_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("seven.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!7th Sem Students Record !!!!!!!!!!!!!\n");
	gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
		printf("===================================================================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			row++;
		}
		fclose(ek);
		getch();
		SeventhMenu();
}
void Seven_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("seven.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
			printf("===================================================================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Seven_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SeventhMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Seven_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("seven.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SeventhMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the USN of the Student : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			SeventhMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%i \t%s \t%s \t%s \t%s \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				gotoxy(12,22);
				printf("Enter New USN: ");
				scanf("%s",s.registration);
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);    
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter New DOB: ");
				scanf("%s",s.dob);    
				gotoxy(12,32);
				printf("Enter age: ");
				scanf(" %i",&s.age);
				gotoxy(12,34);
				printf("Enter New Fee-Structure: ");
				scanf(" %s",s.feestruc);
				gotoxy(12,36);
				printf("Enter New Fee-Paid: ");
				scanf(" %s",s.feepay);
				gotoxy(12,38);
				printf("Enter New Fee-Balance: ");
				scanf(" %s",s.feebal);
				gotoxy(12,40);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
				gotoxy(12,42);
				printf("Enter New Address: ");
				scanf(" %s",s.address);
				gotoxy(12,44);
				printf("Enter New email-id: ");
				scanf(" %s",s.email);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("seven.txt");
   	    rename("temp2.txt","seven.txt");
		getch();
		SeventhMenu();		
}
void Seven_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("seven.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
		else 
		{
			printf("%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		SeventhMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("seven.txt");
		rename("temp.txt","seven.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		SeventhMenu();
	}
}

/* ************************************************* Eight Sem Menu ********************************************* */
void EighthMenu(void)//function decleration
{
int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Eighth Sem Student Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Eight_Add();
						break;
				case 2:
			    		Eight_List();
						break;
				case 3:
						Eight_Search();
						break;
				case 4:
						Eight_Edit();
						break;
				case 5:
						Eight_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void Eight_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("eight.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ******************************************* DATE OF BIRTH ************************************************************** */	    
	
	printf("\n\t\t\tDate of birth(in order dd-mm-yyyy): ");
    scanf("%s",s.dob);

/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
    scanf(" %i",&s.age);

/* ***************************************** Fee Structure ********************************************************************** */	
     
    printf("\n\t\t\tFee Structure :");
    scanf(" %s",s.feestruc);
/* ******************************************* FEE PAID ************************************************************** */	    
	
	printf("\n\t\t\tFee Paid: ");
    scanf("%s",s.feepay);

/* ******************************************* FEE BALANCE ************************************************************** */	    
	
	printf("\n\t\t\tFee Balance:  ");
    scanf("%s",s.feebal);

     
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* **************************************** Address ******************************************************************* */    
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",s.address);
    s.address[0]=toupper(s.address[0]);
    if(strlen(s.address)>20||strlen(s.address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
	
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
    scanf("%s",s.email);
    if (strlen(s.email)>30||strlen(s.email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
	}
}while(strlen(s.email)>30||strlen(s.email)<8);



	fprintf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Eight_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	EighthMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Eight_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("eight.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!8th Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
		printf("===================================================================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			row++;
		}
		fclose(ek);
		getch();
		EighthMenu();
}
void Eight_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("eight.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(15,15);
		printf("Full Name");
		gotoxy(35,15);
		printf("Gender");
		gotoxy(45,15);
		printf("DOB");
		gotoxy(60,15);
		printf("Age");
		gotoxy(65,15);
		printf("Fee-Structure");
		gotoxy(80,15);
		printf("Fee-Paid");
		gotoxy(90,15);
		printf("Fee-Balance");
		gotoxy(105,15);
		printf("Phone No.");
		gotoxy(120,15);
		printf("Address");
		gotoxy(135,15);
		printf("Email");
		gotoxy(1,16);
			printf("===================================================================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(15,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(35,row);
			printf("%c",s.gender);
			gotoxy(45,row);
			printf("%s",s.dob);
			gotoxy(60,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.feestruc);
			gotoxy(80,row);
			printf("%s",s.feepay);
			gotoxy(90,row);
			printf("%s",s.feebal);
			gotoxy(105,row);
			printf("%s",s.phone);
			gotoxy(120,row);
			printf("%s",s.address);
			gotoxy(135,row);
			printf("%s",s.email);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Eight_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		EighthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Eight_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("eight.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		EighthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the USN of the Student : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			EighthMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%i \t%s \t%s \t%s \t%s \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				gotoxy(12,22);
				printf("Enter New USN: ");
				scanf("%s",s.registration);
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);    
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter New DOB: ");
				scanf("%s",s.dob);    
				gotoxy(12,32);
				printf("Enter age: ");
				scanf(" %i",&s.age);
				gotoxy(12,34);
				printf("Enter New Fee-Structure: ");
				scanf(" %s",s.feestruc);
				gotoxy(12,36);
				printf("Enter New Fee-Paid: ");
				scanf(" %s",s.feepay);
				gotoxy(12,38);
				printf("Enter New Fee-Balance: ");
				scanf(" %s",s.feebal);
				gotoxy(12,40);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
				gotoxy(12,42);
				printf("Enter New Address: ");
				scanf(" %s",s.address);
				gotoxy(12,44);
				printf("Enter New email-id: ");
				scanf(" %s",s.email);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("eight.txt");
   	    rename("temp2.txt","eight.txt");
		getch();
		EighthMenu();		
}
void Eight_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("eight.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,&s.gender,s.dob,&s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
		else 
		{
			printf("%s %s %s %c %s %i %s %s %s %s %s %s  \n",s.registration,s.fname,s.lname,s.gender,s.dob,s.age,s.feestruc,s.feepay,s.feebal,s.phone,s.address,s.email);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		EighthMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("eight.txt");
		rename("temp.txt","eight.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		EighthMenu();
	}
}

/* ************************************************* Exit Screen ********************************************* */
void ex_it(void)//function to exit
{
	system("cls");
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :)");
	getch();//holds screen
	
}
/* ************************************************* Login Screen ********************************************* */
void LoginScreen(void)//function for login screen
{
//list of variables	
int i=0,e=0	;
char Username[15];
char Password[15];
char c= ' ';
char original_Username[25]="ewit";
char original_Password[15]="ewit";

	do
	{
		printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
		printf("\n\n\n\t\t\t\t\tUSERNAME:");
		scanf("%s",&Username);
	
		printf("\n\n\t\t\t\t\tPASSWORD:");
		while(i<10)
		{
	    	Password[i]=getch();
	    	c=Password[i];
	    	if(c==13) break;
	    	else printf("*");
	    	i++;
		}
		Password[i]='\0';
		if (strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
		{
			printf("\n\n\n\t\t\t\t\t...Login Successfull...");
			getch();
			MainMenu();//call MainMenu function
			break;
		}
		else
		{
			printf("\n\t\t\tPassword in incorrect:( Try Again :)");
			e++;
			system("cls");
			Title();
			LoginScreen();
		}

	}
	while(e<=2);
	system("cls");
}	


/* ************************************************* TimeTable Menu ********************************************* */
void TimetableMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. 1st Sem\n");
	printf("\n\t\t\t\t2. 2nd Sem\n");
	printf("\n\t\t\t\t3. 3rd Sem \n");
	printf("\n\t\t\t\t4. 4th Sem \n");
	printf("\n\t\t\t\t5. 5th Sem\n");
	printf("\n\t\t\t\t6. 6th Sem\n");
	printf("\n\t\t\t\t7. 7th Sem\n");
	printf("\n\t\t\t\t8. 8th Sem\n");
	printf("\n\t\t\t\t9. Back to main menu\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 9:");
	scanf("%i", &choose);
	
	switch(choose)//switch to different case
	{
	
	case 1:
			OneTimetable();//Add_rec function is called
    		break;
    case 2:
    		TwoTimetable();
    		break;
	case 3:
			ThreeTimetable();//View_rec function is call
    		break;
    case 4:
			FourTimetable();//Edit_rec function is call
			break;
	case 5:
			FiveTimetable();//Dlt_rec function is call
			break;
	case 6:
			SixTimetable();//ex_it function is call
    		break;
    case 7:
			SevenTimetable();//ex_it function is call
    		break;
    case 8:
			EightTimetable();//ex_it function is call
    		break;
    case 9:
			MainMenu();//ex_it function is call
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch	
}
void OneTimetable(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable1.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!1st Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(10,15);
		printf("I");
		gotoxy(22,15);
		printf("II");
		gotoxy(34,15);
		printf("III");
		gotoxy(46,15);
		printf("IV");
		gotoxy(58,15);
		printf("V");
		gotoxy(70,15);
		printf("VI");
		gotoxy(82,15);
		printf("VII");
		gotoxy(92,15);
		printf("VIII");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s\n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7,table.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(10,row);
			printf("%s",table.sub1);
			gotoxy(22,row);
			printf("%s",table.sub2);
			gotoxy(34,row);
			printf("%s",table.sub3);
			gotoxy(46,row);
			printf("%s",table.sub4);
			gotoxy(58,row);
			printf("%s",table.sub5);
			gotoxy(70,row);
			printf("%s",table.sub6);
			gotoxy(82,row);
			printf("%s",table.sub7);
			gotoxy(92,row);
			printf("%s",table.sub8);
			row++;
		}
		fclose(ek);
		getch();
		TimetableMenu();
}
void TwoTimetable(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable2.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!2nd Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(10,15);
		printf("I");
		gotoxy(22,15);
		printf("II");
		gotoxy(34,15);
		printf("III");
		gotoxy(46,15);
		printf("IV");
		gotoxy(58,15);
		printf("V");
		gotoxy(70,15);
		printf("VI");
		gotoxy(82,15);
		printf("VII");
		gotoxy(92,15);
		printf("VIII");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s\n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7,table.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(10,row);
			printf("%s",table.sub1);
			gotoxy(22,row);
			printf("%s",table.sub2);
			gotoxy(34,row);
			printf("%s",table.sub3);
			gotoxy(46,row);
			printf("%s",table.sub4);
			gotoxy(58,row);
			printf("%s",table.sub5);
			gotoxy(70,row);
			printf("%s",table.sub6);
			gotoxy(82,row);
			printf("%s",table.sub7);
			gotoxy(92,row);
			printf("%s",table.sub8);
			row++;
		}
		fclose(ek);
		getch();
		TimetableMenu();
}
void ThreeTimetable(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable3.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!3rd Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(10,15);
		printf("I");
		gotoxy(22,15);
		printf("II");
		gotoxy(34,15);
		printf("III");
		gotoxy(46,15);
		printf("IV");
		gotoxy(58,15);
		printf("V");
		gotoxy(70,15);
		printf("VI");
		gotoxy(82,15);
		printf("VII");
        gotoxy(92,15);
		printf("VIII");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7,table.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(10,row);
			printf("%s",table.sub1);
			gotoxy(22,row);
			printf("%s",table.sub2);
			gotoxy(34,row);
			printf("%s",table.sub3);
			gotoxy(46,row);
			printf("%s",table.sub4);
			gotoxy(58,row);
			printf("%s",table.sub5);
			gotoxy(70,row);
			printf("%s",table.sub6);
			gotoxy(82,row);
			printf("%s",table.sub7);
			gotoxy(92,row);
			printf("%s",table.sub8);
			row++;
		}
		fclose(ek);
		getch();
		TimetableMenu();
}
void FourTimetable(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable4.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!4th Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(10,15);
		printf("I");
		gotoxy(22,15);
		printf("II");
		gotoxy(34,15);
		printf("III");
		gotoxy(46,15);
		printf("IV");
		gotoxy(58,15);
		printf("V");
		gotoxy(70,15);
		printf("VI");
		gotoxy(82,15);
		printf("VII");
		gotoxy(92,15);
		printf("VIII");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7,table.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(10,row);
			printf("%s",table.sub1);
			gotoxy(22,row);
			printf("%s",table.sub2);
			gotoxy(34,row);
			printf("%s",table.sub3);
			gotoxy(46,row);
			printf("%s",table.sub4);
			gotoxy(58,row);
			printf("%s",table.sub5);
			gotoxy(70,row);
			printf("%s",table.sub6);
			gotoxy(82,row);
			printf("%s",table.sub7);
			gotoxy(92,row);
			printf("%s",table.sub8);
			row++;
		}
		fclose(ek);
		getch();
		TimetableMenu();
}
void FiveTimetable(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable5.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!5th Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(10,15);
		printf("I");
		gotoxy(22,15);
		printf("II");
		gotoxy(34,15);
		printf("III");
		gotoxy(46,15);
		printf("IV");
		gotoxy(58,15);
		printf("V");
		gotoxy(70,15);
		printf("VI");
		gotoxy(82,15);
		printf("VII");
		gotoxy(92,15);
		printf("VIII");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7,table.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(10,row);
			printf("%s",table.sub1);
			gotoxy(22,row);
			printf("%s",table.sub2);
			gotoxy(34,row);
			printf("%s",table.sub3);
			gotoxy(46,row);
			printf("%s",table.sub4);
			gotoxy(58,row);
			printf("%s",table.sub5);
			gotoxy(70,row);
			printf("%s",table.sub6);
			gotoxy(82,row);
			printf("%s",table.sub7);
			gotoxy(92,row);
			printf("%s",table.sub8);
			row++;
		}
		fclose(ek);
		getch();
		TimetableMenu();
}
void SixTimetable(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable6.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!6th Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(10,15);
		printf("I");
		gotoxy(22,15);
		printf("II");
		gotoxy(34,15);
		printf("III");
		gotoxy(46,15);
		printf("IV");
		gotoxy(58,15);
		printf("V");
		gotoxy(70,15);
		printf("VI");
		gotoxy(82,15);
		printf("VII");
		gotoxy(92,15);
		printf("VIII");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7,table.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(10,row);
			printf("%s",table.sub1);
			gotoxy(22,row);
			printf("%s",table.sub2);
			gotoxy(34,row);
			printf("%s",table.sub3);
			gotoxy(46,row);
			printf("%s",table.sub4);
			gotoxy(58,row);
			printf("%s",table.sub5);
			gotoxy(70,row);
			printf("%s",table.sub6);
			gotoxy(82,row);
			printf("%s",table.sub7);
			gotoxy(92,row);
			printf("%s",table.sub8);
			row++;
		}
		fclose(ek);
		getch();
		TimetableMenu();
}
void SevenTimetable(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable7.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!7th Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(10,15);
		printf("I");
		gotoxy(22,15);
		printf("II");
		gotoxy(34,15);
		printf("III");
		gotoxy(46,15);
		printf("IV");
		gotoxy(58,15);
		printf("V");
		gotoxy(70,15);
		printf("VI");
		gotoxy(82,15);
		printf("VII");
		gotoxy(92,15);
		printf("VIII");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7,table.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(10,row);
			printf("%s",table.sub1);
			gotoxy(22,row);
			printf("%s",table.sub2);
			gotoxy(34,row);
			printf("%s",table.sub3);
			gotoxy(46,row);
			printf("%s",table.sub4);
			gotoxy(58,row);
			printf("%s",table.sub5);
			gotoxy(70,row);
			printf("%s",table.sub6);
			gotoxy(82,row);
			printf("%s",table.sub7);
			gotoxy(92,row);
			printf("%s",table.sub8);
			row++;
		}
		fclose(ek);
		getch();
		TimetableMenu();
}
void EightTimetable(void)
{
int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable8.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!8th Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(10,15);
		printf("I");
		gotoxy(22,15);
		printf("II");
		gotoxy(34,15);
		printf("III");
		gotoxy(46,15);
		printf("IV");
		gotoxy(58,15);
		printf("V");
		gotoxy(70,15);
		printf("VI");
		gotoxy(82,15);
		printf("VII");
		gotoxy(92,15);
		printf("VIII");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7,table.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(10,row);
			printf("%s",table.sub1);
			gotoxy(22,row);
			printf("%s",table.sub2);
			gotoxy(34,row);
			printf("%s",table.sub3);
			gotoxy(46,row);
			printf("%s",table.sub4);
			gotoxy(58,row);
			printf("%s",table.sub5);
			gotoxy(70,row);
			printf("%s",table.sub6);
			gotoxy(82,row);
			printf("%s",table.sub7);
			gotoxy(92,row);
			printf("%s",table.sub8);
			row++;
		}
		fclose(ek);
		getch();
		TimetableMenu();
}

/* ************************************************* Report Menu ********************************************* */
void ReportMenu(void)
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. 1st Sem\n");
	printf("\n\t\t\t\t2. 2nd Sem\n");
	printf("\n\t\t\t\t3. 3rd Sem \n");
	printf("\n\t\t\t\t4. 4th Sem \n");
	printf("\n\t\t\t\t5. 5th Sem\n");
	printf("\n\t\t\t\t6. 6th Sem\n");
	printf("\n\t\t\t\t7. 7th Sem\n");
	printf("\n\t\t\t\t8. 8th Sem\n");
	printf("\n\t\t\t\t9. Back to main menu\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 9:");
	scanf("%i", &choose);
	
	switch(choose)//switch to different case
	{
	
	case 1:
			OneReportMenu();//Add_rec function is called
    		break;
    case 2:
    		TwoReportMenu();
    		break;
	case 3:
			ThreeReportMenu();//View_rec function is call
    		break;
    case 4:
			FourReportMenu();//Edit_rec function is call
			break;
	case 5:
			FiveReportMenu();//Dlt_rec function is call
			break;
	case 6:
			SixReportMenu();//ex_it function is call
    		break;
    case 7:
			SevenReportMenu();//ex_it function is call
    		break;
    case 8:
			EightReportMenu();//ex_it function is call
    		break;
    case 9:
			MainMenu();//ex_it function is call
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch	
}

/* ************************************************* OneReport Menu ********************************************* */

void OneReportMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("First Sem Student Reports");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Report");
		gotoxy(20,7);
		printf("2. View Reports");
		gotoxy(20,9);
		printf("3. Search Reports");
		gotoxy(20,11);
		printf("4. Back to Report Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-4]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						OneReport_Add();
						break;
				case 2:
			    		OneReport_List();
						break;
				case 3:
						OneReport_Search();
						break;
				case 4:
						ReportMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
	     	}
}
void OneReport_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("report1.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW REPORT                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",r.rollno);
/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tName: ");
	scanf("%s",r.name);
	r.name[0]=toupper(r.name[0]);
	if(strlen(r.name)>20||strlen(r.name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(r.name);b++)
		{
			if (isalpha(r.name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	
	printf("\n\t\t\tLast Name: ");
    scanf("%s",r.lname);
 
 /* ***************************************** Internals ********************************************************************** */	
    printf("\n\t\t\tInternal Marks:");
    scanf(" %s",r.internal);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Marks:");
    scanf(" %s",r.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Marks:");
    scanf(" %s",r.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Marks:");
    scanf(" %s",r.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Marks:");
    scanf(" %s",r.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Marks:");
    scanf(" %s",r.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Marks:");
    scanf(" %s",r.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Marks:");
    scanf(" %s",r.sub7);
/* ***************************************** SUBJECT8   ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Marks:");
    scanf(" %s",r.sub8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s %s\n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	OneReport_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	OneReportMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void OneReport_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("report1.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Report !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
	{
		if(strcmp(r.rollno,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			break;
		}
	   }
	   if(strcmp(r.rollno,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        OneReport_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		OneReportMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void OneReport_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("report1.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!1st Sem Students Report !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			row++;
		}
		fclose(ek);
		getch();
		OneReportMenu();
}

/* ************************************************* TwoReport Menu ********************************************* */

void TwoReportMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Second Sem Student Reports");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Report");
		gotoxy(20,7);
		printf("2. View Reports");
		gotoxy(20,9);
		printf("3. Search Reports");
		gotoxy(20,11);
		printf("4. Back to Report Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-4]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						TwoReport_Add();
						break;
				case 2:
			    		TwoReport_List();
						break;
				case 3:
						TwoReport_Search();
						break;
				case 4:
						ReportMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
	     	}
}
void TwoReport_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("report2.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW REPORT                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",r.rollno);
/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tName: ");
	scanf("%s",r.name);
	r.name[0]=toupper(r.name[0]);
	if(strlen(r.name)>20||strlen(r.name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(r.name);b++)
		{
			if (isalpha(r.name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	
	printf("\n\t\t\tLast Name: ");
    scanf("%s",r.lname);
 
 /* ***************************************** Internals ********************************************************************** */	
    printf("\n\t\t\tInternal Marks:");
    scanf(" %s",r.internal);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Marks:");
    scanf(" %s",r.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Marks:");
    scanf(" %s",r.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Marks:");
    scanf(" %s",r.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Marks:");
    scanf(" %s",r.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Marks:");
    scanf(" %s",r.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Marks:");
    scanf(" %s",r.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Marks:");
    scanf(" %s",r.sub7);
/* ***************************************** SUBJECT8   ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Marks:");
    scanf(" %s",r.sub8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s %s\n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	TwoReport_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	TwoReportMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void TwoReport_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("report2.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Report !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students Name to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
	{
		if(strcmp(r.rollno,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			break;
		}
	   }
	   if(strcmp(r.rollno,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        TwoReport_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		TwoReportMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void TwoReport_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("report2.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!2nd Sem Students Report !!!!!!!!!!!!!\n");
	gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			row++;
		}
		fclose(ek);
		getch();
		TwoReportMenu();

}

/* ************************************************* ThreeReport Menu ********************************************* */

void ThreeReportMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Third Sem Student Reports");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Report");
		gotoxy(20,7);
		printf("2. View Reports");
		gotoxy(20,9);
		printf("3. Search Reports");
		gotoxy(20,11);
		printf("4. Back to Report Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-4]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						ThreeReport_Add();
						break;
				case 2:
			    		ThreeReport_List();
						break;
				case 3:
						ThreeReport_Search();
						break;
				case 4:
						ReportMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
	     	}
}
void ThreeReport_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("report3.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW REPORT                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",r.rollno);
/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tName: ");
	scanf("%s",r.name);
	r.name[0]=toupper(r.name[0]);
	if(strlen(r.name)>20||strlen(r.name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(r.name);b++)
		{
			if (isalpha(r.name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	
	printf("\n\t\t\tLast Name: ");
    scanf("%s",r.lname);
 
 /* ***************************************** Internals ********************************************************************** */	
    printf("\n\t\t\tInternal Marks:");
    scanf(" %s",r.internal);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Marks:");
    scanf(" %s",r.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Marks:");
    scanf(" %s",r.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Marks:");
    scanf(" %s",r.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Marks:");
    scanf(" %s",r.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Marks:");
    scanf(" %s",r.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Marks:");
    scanf(" %s",r.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Marks:");
    scanf(" %s",r.sub7);
/* ***************************************** SUBJECT8   ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Marks:");
    scanf(" %s",r.sub8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s %s\n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	ThreeReport_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	ThreeReportMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void ThreeReport_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("report3.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Report !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students Name to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
	{
		if(strcmp(r.rollno,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			break;
		}
	   }
	   if(strcmp(r.rollno,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        ThreeReport_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		ThreeReportMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void ThreeReport_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("report3.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!3rd Sem Students Report !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			row++;
		}
		fclose(ek);
		getch();
		ThreeReportMenu();

}

/* ************************************************* FourReport Menu ********************************************* */

void FourReportMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fourth Sem Student Reports");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Report");
		gotoxy(20,7);
		printf("2. View Reports");
		gotoxy(20,9);
		printf("3. Search Reports");
		gotoxy(20,11);
		printf("4. Back to Report Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-4]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						FourReport_Add();
						break;
				case 2:
			    		FourReport_List();
						break;
				case 3:
						FourReport_Search();
						break;
				case 4:
						ReportMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
	     	}
}
void FourReport_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("report4.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW REPORT                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",r.rollno);
/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tName: ");
	scanf("%s",r.name);
	r.name[0]=toupper(r.name[0]);
	if(strlen(r.name)>20||strlen(r.name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(r.name);b++)
		{
			if (isalpha(r.name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	
	printf("\n\t\t\tLast Name: ");
    scanf("%s",r.lname);
 
 /* ***************************************** Internals ********************************************************************** */	
    printf("\n\t\t\tInternal Marks:");
    scanf(" %s",r.internal);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Marks:");
    scanf(" %s",r.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Marks:");
    scanf(" %s",r.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Marks:");
    scanf(" %s",r.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Marks:");
    scanf(" %s",r.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Marks:");
    scanf(" %s",r.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Marks:");
    scanf(" %s",r.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Marks:");
    scanf(" %s",r.sub7);
/* ***************************************** SUBJECT8   ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Marks:");
    scanf(" %s",r.sub8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s %s\n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	FourReport_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	FourReportMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void FourReport_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("report4.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Report !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students Name to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
	{
		if(strcmp(r.rollno,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			break;
		}
	   }
	   if(strcmp(r.rollno,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        FourReport_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FourReportMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void FourReport_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("report4.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!4th Sem Students Report !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			row++;
		}
		fclose(ek);
		getch();
		FourReportMenu();

}

/* ************************************************* FiveReport Menu ********************************************* */

void FiveReportMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fifth Sem Student Reports");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Report");
		gotoxy(20,7);
		printf("2. View Reports");
		gotoxy(20,9);
		printf("3. Search Reports");
		gotoxy(20,11);
		printf("4. Back to Report Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-4]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						FiveReport_Add();
						break;
				case 2:
			    		FiveReport_List();
						break;
				case 3:
						FiveReport_Search();
						break;
				case 4:
						ReportMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
	     	}
}
void FiveReport_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("report5.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW REPORT                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",r.rollno);
/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tName: ");
	scanf("%s",r.name);
	r.name[0]=toupper(r.name[0]);
	if(strlen(r.name)>20||strlen(r.name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(r.name);b++)
		{
			if (isalpha(r.name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	
	printf("\n\t\t\tLast Name: ");
    scanf("%s",r.lname);
 
 /* ***************************************** Internals ********************************************************************** */	
    printf("\n\t\t\tInternal Marks:");
    scanf(" %s",r.internal);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Marks:");
    scanf(" %s",r.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Marks:");
    scanf(" %s",r.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Marks:");
    scanf(" %s",r.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Marks:");
    scanf(" %s",r.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Marks:");
    scanf(" %s",r.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Marks:");
    scanf(" %s",r.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Marks:");
    scanf(" %s",r.sub7);
/* ***************************************** SUBJECT8   ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Marks:");
    scanf(" %s",r.sub8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s %s\n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	FiveReport_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	FiveReportMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void FiveReport_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("report5.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Report !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students Name to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
	{
		if(strcmp(r.rollno,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			break;
		}
	   }
	   if(strcmp(r.rollno,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        FiveReport_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FiveReportMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void FiveReport_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("report5.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!5th Sem Students Report !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			row++;
		}
		fclose(ek);
		getch();
		FiveReportMenu();

}

/* ************************************************* SixReport Menu ********************************************* */

void SixReportMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Sixth Sem Student Reports");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Report");
		gotoxy(20,7);
		printf("2. View Reports");
		gotoxy(20,9);
		printf("3. Search Reports");
		gotoxy(20,11);
		printf("4. Back to Report Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-4]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						SixReport_Add();
						break;
				case 2:
			    		SixReport_List();
						break;
				case 3:
						SixReport_Search();
						break;
				case 4:
						ReportMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
	     	}
}
void SixReport_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("report6.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW REPORT                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",r.rollno);
/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tName: ");
	scanf("%s",r.name);
	r.name[0]=toupper(r.name[0]);
	if(strlen(r.name)>20||strlen(r.name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(r.name);b++)
		{
			if (isalpha(r.name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	
	printf("\n\t\t\tLast Name: ");
    scanf("%s",r.lname);
 
 /* ***************************************** Internals ********************************************************************** */	
    printf("\n\t\t\tInternal Marks:");
    scanf(" %s",r.internal);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Marks:");
    scanf(" %s",r.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Marks:");
    scanf(" %s",r.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Marks:");
    scanf(" %s",r.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Marks:");
    scanf(" %s",r.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Marks:");
    scanf(" %s",r.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Marks:");
    scanf(" %s",r.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Marks:");
    scanf(" %s",r.sub7);
/* ***************************************** SUBJECT8   ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Marks:");
    scanf(" %s",r.sub8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s %s\n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	SixReport_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	SixReportMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void SixReport_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("report6.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Report !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students Name to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
	{
		if(strcmp(r.rollno,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			break;
		}
	   }
	   if(strcmp(r.rollno,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        SixReport_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SixReportMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void SixReport_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("report6.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!6th Sem Students Report !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			row++;
		}
		fclose(ek);
		getch();
		SixReportMenu();

}

/* ************************************************* SevenReport Menu ********************************************* */

void SevenReportMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Seventh Sem Student Reports");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Report");
		gotoxy(20,7);
		printf("2. View Reports");
		gotoxy(20,9);
		printf("3. Search Reports");
		gotoxy(20,11);
		printf("4. Back to Report Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-4]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						SevenReport_Add();
						break;
				case 2:
			    		SevenReport_List();
						break;
				case 3:
						SevenReport_Search();
						break;
				case 4:
						ReportMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
	     	}
}
void SevenReport_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("report7.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW REPORT                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",r.rollno);
/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tName: ");
	scanf("%s",r.name);
	r.name[0]=toupper(r.name[0]);
	if(strlen(r.name)>20||strlen(r.name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(r.name);b++)
		{
			if (isalpha(r.name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	
	printf("\n\t\t\tLast Name: ");
    scanf("%s",r.lname);
 
 /* ***************************************** Internals ********************************************************************** */	
    printf("\n\t\t\tInternal Marks:");
    scanf(" %s",r.internal);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Marks:");
    scanf(" %s",r.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Marks:");
    scanf(" %s",r.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Marks:");
    scanf(" %s",r.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Marks:");
    scanf(" %s",r.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Marks:");
    scanf(" %s",r.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Marks:");
    scanf(" %s",r.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Marks:");
    scanf(" %s",r.sub7);
/* ***************************************** SUBJECT8   ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Marks:");
    scanf(" %s",r.sub8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s %s\n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	SevenReport_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	SevenReportMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void SevenReport_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("report7.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Report !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students Name to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
	{
		if(strcmp(r.rollno,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			break;
		}
	   }
	   if(strcmp(r.rollno,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        SevenReport_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SevenReportMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void SevenReport_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("report7.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!7th Sem Students Report !!!!!!!!!!!!!\n");
	gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			row++;
		}
		fclose(ek);
		getch();
		SevenReportMenu();

}

/* ************************************************* EightReport Menu ********************************************* */

void EightReportMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Eighth Sem Student Reports");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Report");
		gotoxy(20,7);
		printf("2. View Reports");
		gotoxy(20,9);
		printf("3. Search Reports");
		gotoxy(20,11);
		printf("4. Back to Report Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-4]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						EightReport_Add();
						break;
				case 2:
			    		EightReport_List();
						break;
				case 3:
						EightReport_Search();
						break;
				case 4:
						ReportMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
	     	}
}
void EightReport_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("report8.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW REPORT                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tRegistration number:");
    scanf(" %s",r.rollno);
/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tName: ");
	scanf("%s",r.name);
	r.name[0]=toupper(r.name[0]);
	if(strlen(r.name)>20||strlen(r.name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(r.name);b++)
		{
			if (isalpha(r.name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	
	printf("\n\t\t\tLast Name: ");
    scanf("%s",r.lname);
 
 /* ***************************************** Internals ********************************************************************** */	
    printf("\n\t\t\tInternal Marks:");
    scanf(" %s",r.internal);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Marks:");
    scanf(" %s",r.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Marks:");
    scanf(" %s",r.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Marks:");
    scanf(" %s",r.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Marks:");
    scanf(" %s",r.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Marks:");
    scanf(" %s",r.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Marks:");
    scanf(" %s",r.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Marks:");
    scanf(" %s",r.sub7);
/* ***************************************** SUBJECT8   ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Marks:");
    scanf(" %s",r.sub8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s %s\n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	EightReport_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	EightReportMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void EightReport_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("report8.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Report !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students Name to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
	{
		if(strcmp(r.rollno,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			break;
		}
	   }
	   if(strcmp(r.rollno,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        EightReport_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		EightReportMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void EightReport_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("report8.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!8th Sem Students Report !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(14,15);
		printf("Name");
		gotoxy(34,15);
		printf("Internals");
		gotoxy(46,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",r.rollno,r.name,r.lname,r.internal,r.sub1,r.sub2,r.sub3,r.sub4,r.sub5,r.sub6,r.sub7,r.sub8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",r.rollno);
			gotoxy(14,row);
			printf("%s %s",r.name,r.lname);
			gotoxy(34,row);
			printf("%s",r.internal);
			gotoxy(46,row);
			printf("%s",r.sub1);
			gotoxy(53,row);
			printf("%s",r.sub2);
			gotoxy(60,row);
			printf("%s",r.sub3);
			gotoxy(67,row);
			printf("%s",r.sub4);
			gotoxy(74,row);
			printf("%s",r.sub5);
			gotoxy(81,row);
			printf("%s",r.sub6);
			gotoxy(88,row);
			printf("%s",r.sub7);
			gotoxy(95,row);
			printf("%s",r.sub8);
			row++;
		}
		fclose(ek);
		getch();
		EightReportMenu();

	
}

