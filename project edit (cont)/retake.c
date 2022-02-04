#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//****patients info is saved in inforegister text file****
struct login
{
    char Patient_name[20];
    int age;
    char gender[2];
    char phone_number[30];
    char address[100];
};
struct doctors
{
    char doctorsname[50];
    char gender[50];
    char info[50];
    char specialization[50];
    char contact[50];
    char workingday[50];
    char hours[50];
};
typedef struct doctors d;

struct daydate
{
    char date[50];
};
typedef struct daydate a;

void dd()
{
    char ch[50];
    printf("Enter file name (PHONE NUMBER) with (.txt) Extension");
    scanf("%s",&ch);
    a daydate;
    FILE *f;
    f=fopen(ch,"a");
    if(f==NULL)
    {
        printf("ENTER CORRECT FILE NAME\n");
        dd();
    }
    else
    {
        printf("enter the day of appointment in (dd/mm/yyyy) format\n");
    scanf("%s",&daydate.date);
    fflush(stdin);
    printf("  date of appointment\n:%s",daydate.date);
    fprintf(f,"   Date of appointment:%s\n",daydate.date);
    }
    fclose(f);
}

void createaccount()
{
    FILE *f;
    char filename[50];
    printf("Enter a file name (must include (.txt) Extension\n");
    scanf("%s",&filename);
    f=fopen(filename,"w");
    struct login a;
    printf("Enter patient name\n");
    fflush(stdin);
    gets(a.Patient_name);
    printf("Enter age\n");
    scanf("%d",&a.age);
    printf("Enter gender m/f/o\n");
    fflush(stdin);
    gets(a.gender);
    printf("Enter phone number (MAKE SURE IT'S VALID AND CORRECT)\n");
    fflush(stdin);
    gets(a.phone_number);
    printf("Enter patients address\n");
    fflush(stdin);
    gets(a.address);

    fprintf(f,"patient name:%s\npatients age:%d\npatients gender:%s\nphone number:%s\naddress:%s\n",a.Patient_name,a.age,a.gender,a.phone_number,a.address);
    fclose(f);

    printf("press enter\n");
    getch();
}
void maledoctorsinfo()
{
    d  doctor[6];
    int i;
    FILE *f;
    f=fopen("doctorsinfo.txt","r");
    if(f==NULL)
    {
        printf("no informations present\n");
    }
    else
    {
        for(i=0;i<6;i++)
        {
            fgets(doctor[i].doctorsname,50,f);
            fgets(doctor[i].gender,50,f);
            fgets(doctor[i].info,50,f);
            fgets(doctor[i].specialization,50,f);
            fgets(doctor[i].contact,50,f);
            fgets(doctor[i].workingday,50,f);
            fgets(doctor[i].hours,50,f);
        }
        fclose(f);
        for(i=0;i<6;i++)
        {
            printf("%s\n",doctor[i].doctorsname);
            printf("%s\n",doctor[i].gender);
            printf("%s\n",doctor[i].info);
            printf("%s\n",doctor[i].specialization);
            printf("%s\n",doctor[i].contact);
            printf("%s\n",doctor[i].workingday);
            printf("%s\n",doctor[i].hours);
        }
    }
}
void femaledoctorsinfo()
{
    d  fdoctor[6];
    int i;
    FILE *f;
    f=fopen("fdoctorsinfo.txt","r");
    if(f==NULL)
    {
        printf("no informations present\n");
    }
    else
    {
        for(i=0;i<6;i++)
        {
            fgets(fdoctor[i].doctorsname,50,f);
            fgets(fdoctor[i].gender,50,f);
            fgets(fdoctor[i].info,50,f);
            fgets(fdoctor[i].specialization,50,f);
            fgets(fdoctor[i].contact,50,f);
            fgets(fdoctor[i].workingday,50,f);
            fgets(fdoctor[i].hours,50,f);
        }
        fclose(f);
        for(i=0;i<6;i++)
        {
            printf("%s\n",fdoctor[i].doctorsname);
            printf("%s\n",fdoctor[i].gender);
            printf("%s\n",fdoctor[i].info);
            printf("%s\n",fdoctor[i].specialization);
            printf("%s\n",fdoctor[i].contact);
            printf("%s\n",fdoctor[i].workingday);
            printf("%s\n",fdoctor[i].hours);
        }
    }
}
void book()
{
    FILE *x;
    char fil[50];
    printf("Enter the file name you used to create profile(PHONE NUMBER) with (.txt) Extension\n");
    scanf("%s",&fil);
    x=fopen(fil,"r");
    if(x==NULL)
    {
        printf("No information found,ENTER THE CORRECT FILE NAME AGAIN\n");
        book();
    }
    else
    {
        int i,q,w,p,num;
   char ch;
   printf("________________________________________________\n");
   printf(" \n");
   printf("ENTER THE THE NUMBERS IN () TO PROCEED\n");
   printf(" \n");
   printf(" \n");
   printf(" Enter 1 for issues related to heart\n");
   printf(" Enter 2 for issues related to brain\n");
   printf(" Enter 3 for child specialist\n");
   printf(" Enter 4 for issues related to bones & joint\n");
   printf(" Enter 5 for issues related to skin\n");
   printf(" Enter 6 for issues related to mental health\n");
   printf("****Enter the numbers in () to proceed****\n");
   scanf("%d",&q);
   if(q==1)
   {
       printf("Do you prefer Weekday morning Or Weekend Evening\n");
       printf("Enter (5) for Weekday Morning  and (6) for Weekend Afternoon\n");
       scanf("%d",&w);
           if(w==5)
           {
              FILE *n,*m;
              n=fopen("mdocheart.txt","r");
              m=fopen(fil,"a");
              if(n==NULL||m==NULL)
              {
                  printf("nothing here\n");
                  exit(0);
              }
              ch=fgetc(n);
              while(ch!=EOF)
              {
                fputc(ch,m);
                ch=fgetc(n);
              }
              fclose(n);
              fclose(m);

              printf(" \n");
              system("CLS");
              dd();
               system("CLS");
              printf("\nT H E   A P P O I N M E N T   I S   D O N E\n");
               printf(" \n");
            printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
                ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }

             }
           }
           else if(w==6)
           {
              FILE *n,*m;
              n=fopen("ndocheart.txt","r");
              m=fopen(fil,"a");
              if(n==NULL||m==NULL)
              {
                  printf("nothing here\n");
              }
              ch=fgetc(n);
              while(ch!=EOF)
              {
                fputc(ch,m);
                ch=fgetc(n);
              }
            fclose(n);
            fclose(m);

              printf(" \n");
               system("CLS");
              dd();

            system("CLS");
            printf("T H E   A P P O I N M E N T   I S   D O N E\n");
            printf(" \n");
            printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
                ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }
             }
          }
            else
            {
                printf("invalid input\n");
                book();
            }
   }
   //222
    else if(q==2)
   {
       printf("Do you prefer Weekday morning Or Weekend Evening\n");
       printf("Enter (5) for Weekday Morning  and (6) for Weekend Afternoon\n");
       scanf("%d",&w);
           if(w==5)
           {
              FILE *e,*r;
              e=fopen("mdocbrain.txt","r");
              r=fopen(fil,"a");
              if(e==NULL||r==NULL)
              {
                  printf("nothing here\n");
                  exit(0);
              }
              ch=fgetc(e);
              while(ch!=EOF)
              {
                fputc(ch,r);
                ch=fgetc(e);
              }
              fclose(e);
              fclose(r);

                printf(" \n");
                 system("CLS");
              dd();

              system("CLS");
              printf("T H E   A P P O I N M E N T   I S   D O N E\n");
              printf(" \n");
              printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
                ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }
             }
           }
           else if(w==6)
           {
              FILE *e,*r;
              e=fopen("ndocbrain.txt","r");
              r=fopen(fil,"a");
              if(e==NULL||r==NULL)
              {
                  printf("nothing here\n");
              }
              ch=fgetc(e);
              while(ch!=EOF)
              {
                fputc(ch,r);
                ch=fgetc(e);
              }
              fclose(e);
              fclose(r);

                printf(" \n");
                 system("CLS");
              dd();

              system("CLS");
              printf("T H E   A P P O I N M E N T   I S   D O N E\n");
               printf(" \n");
              printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
                ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }
             }
            }
            else
            {
                printf("invalid input\n");
                book();
            }
   }
   //333
    else if(q==3)
   {
       printf("Do you prefer Weekday morning Or Weekend Evening\n");
       printf("Enter (5) for Weekday Morning  and (6) for Weekend Afternoon\n");
       scanf("%d",&w);
           if(w==5)
           {
              FILE *e,*r;
              e=fopen("mdocchild.txt","r");
              r=fopen(fil,"a");
              if(e==NULL||r==NULL)
              {
                  printf("nothing here\n");
                  exit(0);
              }
              ch=fgetc(e);
              while(ch!=EOF)
              {
                fputc(ch,r);
                ch=fgetc(e);
              }
              fclose(e);
              fclose(r);

                printf(" \n");
                 system("CLS");
              dd();

              system("CLS");
              printf("T H E   A P P O I N M E N T   I S   D O N E\n");
              printf(" \n");
              printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
                ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }
             }
           }
           else if(w==6)
           {
              FILE *e,*r;
              e=fopen("ndocchild.txt","r");
              r=fopen(fil,"a");
              if(e==NULL||r==NULL)
              {
                  printf("nothing here\n");
              }
              ch=fgetc(e);
              while(ch!=EOF)
              {
                fputc(ch,r);
                ch=fgetc(e);
              }
              fclose(e);
              fclose(r);

                printf(" \n");
                 system("CLS");
              dd();

              system("CLS");
              printf("T H E   A P P O I N M E N T   I S   D O N E\n");
              printf(" \n");
              printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
               ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }
             }
            }
            else
            {
                printf("invalid input\n");
                book();
            }
   }
   //444
    else if(q==4)
   {
       printf("Do you prefer Weekday morning Or Weekend Evening\n");
       printf("Enter (5) for Weekday Morning  and (6) for Weekend Afternoon\n");
       scanf("%d",&w);
           if(w==5)
           {
              FILE *e,*r;
              e=fopen("mdocbone.txt","r");
              r=fopen(fil,"a");
              if(e==NULL||r==NULL)
              {
                  printf("nothing here\n");
                  exit(0);
              }
              ch=fgetc(e);
              while(ch!=EOF)
              {
                fputc(ch,r);
                ch=fgetc(e);
              }
              fclose(e);
              fclose(r);

               printf(" \n");
                system("CLS");
              dd();

              system("CLS");
              printf("T H E   A P P O I N M E N T   I S   D O N E\n");
              printf(" \n");
              printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
                ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }
             }
           }
           else if(w==6)
           {
              FILE *e,*r;
              e=fopen("ndocbone.txt","r");
              r=fopen(fil,"a");
              if(e==NULL||r==NULL)
              {
                  printf("nothing here\n");
              }
              ch=fgetc(e);
              while(ch!=EOF)
              {
                fputc(ch,r);
                ch=fgetc(e);
              }
              fclose(e);
              fclose(r);

               printf(" \n");
                system("CLS");
              dd();

              system("CLS");
              printf("T H E   A P P O I N M E N T   I S   D O N E\n");
              printf(" \n");
              printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
               ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }
             }
            }
            else
            {
                printf("invalid input\n");
                book();
            }
   }
   //555
    else if(q==5)
   {
       printf("Do you prefer Weekday morning Or Weekend Evening\n");
       printf("Enter (5) for Weekday Morning  and (6) for Weekend Afternoon\n");
       scanf("%d",&w);
           if(w==5)
           {
              FILE *e,*r;
              e=fopen("mdocskin.txt","r");
              r=fopen(fil,"a");
              if(e==NULL||r==NULL)
              {
                  printf("nothing here\n");
                  exit(0);
              }
              ch=fgetc(e);
              while(ch!=EOF)
              {
                fputc(ch,r);
                ch=fgetc(e);
              }
              fclose(e);
              fclose(r);

               printf(" \n");
                system("CLS");
              dd();

              system("CLS");
              printf("T H E   A P P O I N M E N T   I S   D O N E\n");
              printf(" \n");
              printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
                ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }
             }
           }
           else if(w==6)
           {
              FILE *e,*r;
              e=fopen("ndocskin.txt","r");
              r=fopen(fil,"a");
              if(e==NULL||r==NULL)
              {
                  printf("nothing here\n");
              }
              ch=fgetc(e);
              while(ch!=EOF)
              {
                fputc(ch,r);
                ch=fgetc(e);
              }
              fclose(e);
              fclose(r);

               printf(" \n");
                system("CLS");
              dd();

              system("CLS");
              printf("T H E   A P P O I N M E N T   I S   D O N E\n");
              printf(" \n");
              printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
                ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }
             }
            }
            else
            {
                printf("invalid input\n");
                book();
            }
   }
   //666
    else if(q==6)
   {
       printf("Do you prefer Weekday morning Or Weekend Evening\n");
       printf("Enter (5) for Weekday Morning  and (6) for Weekend Afternoon\n");
       scanf("%d",&w);
           if(w==5)
           {
              FILE *e,*r;
              e=fopen("mdocmental.txt","r");
              r=fopen(fil,"a");
              if(e==NULL||r==NULL)
              {
                  printf("nothing here\n");
                  exit(0);
              }
              ch=fgetc(e);
              while(ch!=EOF)
              {
                fputc(ch,r);
                ch=fgetc(e);
              }
              fclose(e);
              fclose(r);

               printf(" \n");
                system("CLS");
              dd();

              system("CLS");
              printf("T H E   A P P O I N M E N T   I S   D O N E\n");
              printf(" \n");
              printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
               ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }
             }
           }
           else if(w==6)
           {
              FILE *e,*r;
              e=fopen("ndocmental.txt","r");
              r=fopen(fil,"a");
              if(e==NULL||r==NULL)
              {
                  printf("nothing here\n");
              }
              ch=fgetc(e);
              while(ch!=EOF)
              {
                fputc(ch,r);
                ch=fgetc(e);
              }
              fclose(e);
              fclose(r);

               printf(" \n");
                system("CLS");
              dd();

              system("CLS");
              printf("T H E   A P P O I N M E N T   I S   D O N E\n");
              printf(" \n");
              printf("enter (1) to see your profile for verification\n");
            scanf("%d",&p);
            if(p==1)
             {
                user();
                printf("*Do arrive 15 mins early to collect serial number*\n");
                printf("______________________________________________________________________________________________________________________\n");
               ginfo();
                    printf("    \n");
                    printf("    \n");
                    printf("Press (0) to return to home page\n");
                    scanf("%d",&num);
                if(num==0)
                  {
                    system("CLS");
                    main();
                  }
             }
            }
            else
            {
                printf("invalid input\n");
                book();
            }
   }
   else
   {
       system("CLS");
       printf("invalid input PLEASE proceed again\n");
       book();
   }
   //*********************************************************************************************************************************************
  }
}
void user()
{
   char c;
   char ch[50];
   printf("Enter the file name with(.txt) to view your profile\n");
   printf(" \n");
   scanf("%s",&ch);
   FILE *f;
   f=fopen(ch,"r");
   if(f==NULL)
   {
       printf("No information found\n");
       printf("Please enter the correct file name AGAIN\n");
       user();
   }
   else
   {
        c=getc(f);
        while(c!=EOF)
   {
       printf("%c",c);
       c=getc(f);
   }
   fclose(f);
   }
}
void erase()
{
    char ch[50];
    printf("Enter the same same file name(PHONE NUMBER) with (.txt) Extension\n");
    scanf("%s",&ch);
    FILE *r;
    r=fopen(ch,"w");
    if(r==NULL)
    {
        printf("no information found<Enter valid information\n");
    }
    else
    {
        printf("\n");
        printf("A P P O I N M E N T  &  P R O F I L E  E R A S E D");
        printf(" \n");
        printf(" \n");
    }
    fclose(r);
}
void ginfo()
{
    FILE *s;
    char ch;
    s=fopen("geninfo.txt","r");
    ch=getc(s);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=getc(s);
    }
    fclose(s);
}
 void main()
{
    int num;
    printf("***** W E L C O M E   T O    L I F E   A I D    H O S P I T A L    A P P O I N T M E N T    P O R T A L*****\n");
    printf(" \n");
    printf("                                 ****READ  THE  INSTRUCTIONS  CAREFULLY****                                 \n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("| PLEASE NAME THE FILE USING PHONE NUMBER and Please DO NOT name the file using patient name |\n| AFTER WRITTING FILE NAME MUST INCLUDE THE EXTENSION ( .txt ) EACH TIME |\n| WRITE THE FILE NAME EACH TIME CORRECTLY |\n| FILE NAME IS ASKED MULTIPLE TIMES TO MAKE SURE THERES NO OVERLAP OF DATA |\n");
    printf("........................................................................................................................\n");
    printf(" \n");
    printf("                             ENTER  THE FOLLOWING  NUMBERS  IN ()  TO  OPERATE:                                        \n");
    printf("                    ------------------------------------------------------------------------------------\n");
    printf("                    |        Enter (1) to make a FILE (PATIENT DETAILS)                                |\n");
    printf("                    |        Enter (2) to view DOCTORS INFORMATION (Doctors available in Weekdays)     |\n");
    printf("                    |        Enter (3) to view DOCTORS INFORMATION (Doctors available in Weekends)     |\n");
    printf("                    |        Enter (4) to MAKE an ADDITIONAL APPOINTMENT                               |\n");
    printf("                    |        Enter (5) to view USER PROFILE                                            |\n");
    printf("                    |        Enter (6) to Delete APOOINTMENT                                           |\n");
    printf("                    |        Enter (7) to view GENERAL INFORMATION                                     |\n");
    printf("                    -----------------------------------------------------------------------------------|\n");
    scanf("%d",&num);
    if(num==1)
    {
        system("CLS");
        createaccount();
        system("CLS");
        book();
    }
    else if(num==2)
    {
        system("CLS");
        maledoctorsinfo();
        printf(" \n");
         printf("    \n");
        printf("    \n");
        printf("Press (0) to return to home page\n");
        scanf("%d",&num);
        if(num==0)
        {
            system("CLS");
            main();
        }
    }
    else if(num==3)
    {
        system("CLS");
        femaledoctorsinfo();
        printf(" \n");
         printf("    \n");
        printf("    \n");
        printf("Press (0) to return to home page\n");
        scanf("%d",&num);
        if(num==0)
        {
            system("CLS");
            main();
        }
    }
    else if(num==4)
    {
        system("CLS");
        book();
    }
    else if(num==5)
    {
        system("CLS");
        user();
        printf("_______________________________________________________________________________________________________________________\n");
         printf("    \n");
        printf("    \n");
        printf("Press (0) to return to home page\n");
        scanf("%d",&num);
        if(num==0)
        {
            system("CLS");
            main();
        }
    }
    else if(num==6)
    {
        erase();
        printf(" \n");
        main();
    }
    else if(num==7)
    {
        system("CLS");
        ginfo();
        printf("    \n");
        printf("    \n");
        printf("Press (0) to return to home page\n");
        scanf("%d",&num);
        if(num==0)
        {
            system("CLS");
            main();
        }
    }
    else
    {
         system("CLS");
        printf("*****Invalid  input*****\n");
        printf("PLEASE  FOLLOW  THE  INSTRUCTIONS\n");
        printf("  \n");
        printf("  \n");
        main();
    }
}








