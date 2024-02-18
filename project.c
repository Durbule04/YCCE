#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// typedef struct Collage_Info_Student
// {
//     char name[100],branch[100],ch;
//     int year,roll,reg_no,ph_no;
//     float cgpa;
// }stu;

// typedef struct Collage_Info_Faculty
// {
//     char name[100],branch[100],speciallization[100],ch;
//     int year,id,ph_no,salary;
// }fac;

// int main(){
//     char input;
//     printf("##*Collage Information*##");
//     printf("\nEnter 's' for student and 'f' for faculty :");

//     scanf("%c",&input);

//     if(input == 's'){
//         stu s1;
//         int i=0;
//         printf("**Enter your information**");
//         printf("\nEnter your name : ");
//         while (s1.ch != '\n')
//             {
//             scanf("%c",&s1.ch);
//             s1.name[i] = s1.ch;
//             i++;
//         }
//             s1.name[i] = '\0';
            
//         fgets(s1.name,100,stdin); //fgets()
//         printf("\nEnter your year : ");
//         scanf("%d",&s1.year);
//         printf("\nEnter your branch : ");
//         scanf("%s",&s1.branch);
//         printf("\nEnter your reg_no : ");
//         scanf("%d",&s1.reg_no);
//         printf("\nEnter your cgpa : ");
//         scanf("%f",&s1.cgpa);
//         printf("\nEnter your phone no. : ");
//         scanf("%d",&s1.ph_no);

//         printf("\n**Your Information**");
//         printf("\nName ");
//         // puts(s1.name);
//         for(int i=0;s1.name !='\0';i++)
//         {
//             printf("%c",s1.name[i]);
//         }
//         printf("\n");

//         printf("\nYear : %d",s1.year);
//         printf("\nBranch : %s",s1.branch);
//         printf("\nReg_no : %d",s1.reg_no);
//         printf("\nCGPA : %f",s1.cgpa);
//         printf("\nPhone no. : %d",s1.ph_no);

//     }else if(input == 'f'){
//         fac f1;
//         int i=0;
//         printf("**Enter your information**");
//         printf("\nEnter your name : ");
//         // fgets(f1.name,100,stdin); //fgets()
//         while (f1.ch != '\n')
//             {
//             scanf("%c",&f1.ch);
//             f1.name[i] = f1.ch;
//             i++;
//         }
//             f1.name[i] = '\0';

//         printf("\nEnter your spciallization : ");
//         scanf("%c",&f1.speciallization);
//         printf("\nEnter your branch : ");
//         scanf("%s",&f1.branch);
//         printf("\nEnter your year : ");
//         scanf("%d",&f1.year);
//         printf("\nEnter your id : ");
//         scanf("%d",&f1.id);
//         printf("\nEnter your phone no. : ");
//         scanf("%d",&f1.ph_no);
//         printf("\nEnter your salary : ");
//         scanf("%d",&f1.salary);

//         printf("\n**Your Information**");
//         printf("\nName ");
//         // puts(f1.name);
//         for(int i=0;f1.name !='\0';i++)
//         {
//             printf("%c",f1.name[i]);
//         }
//         printf("\n");

//         printf("\nSpeciallization : %c",f1.speciallization);
//         printf("\nBranch : %s",f1.branch);
//         printf("\nYear : %d",f1.year);
//         printf("\nID : %d",f1.id);
//         printf("\nPhone No. : %d",f1.ph_no);
//         printf("\nSalary : %d",f1.salary);
//     }else{
//         printf("Wrong input.");
//     }


//     return 0;
// }


int read(){
    int d;
    printf("Choose the following.");
    printf("\n1 for student.\n2 for faculty.\n3 for other staff.");
    printf("\nEnter : ");
    scanf("%d",&d);
    
    if(d == 1){
        FILE *sfptr;
        sfptr = fopen("student.txt","r");
        printf("---Student Information---\n");
        char ch;
        ch = fgetc(sfptr);
        while(ch != EOF){
            printf("%c",ch);
            ch = fgetc(sfptr);
        } 
        printf("\n");
       
        fclose(sfptr);

    }else if(d == 2){
        FILE *ffptr;
        ffptr = fopen("faculty.txt","r");
        printf("---Faculty Information---\n");
        char ch;
        ch = fgetc(ffptr);
        while(ch != EOF){
            printf("%c",ch);
            ch = fgetc(ffptr);
        } 
        printf("\n");

        fclose(ffptr);

    }else if(d == 3){
        FILE *mfptr;
        mfptr = fopen("staff.txt","r");
        printf("---Other staff information---\n");
        char ch;
        ch = fgetc(mfptr);
        while(ch != EOF){
            printf("%c",ch);
            ch = fgetc(mfptr);
        } 
        printf("\n");
       
        fclose(mfptr);
    }else{
        printf("\nWrong input");
    }

}
int write(){
    char d;
    int x;
    printf("Choose the following.");
    printf("\n1 for student.\n2 for faculty.\n3 for other staff.\nEnter : ");
    scanf("%d",&d);

    printf("\nNo. of persons : ");
    scanf("%d",&x);
    
    
    
    for(int i=0;i<x;i++){
        printf("\nFor %dth person.\n",i+1);
        if(d == 1){
            FILE *sfptr;
            sfptr = fopen("student.txt","a");
            char name[10];
            int age;
            float cgpa;
            printf("Enter name : ");
            scanf("%s",name);
            printf("Enter age : ");
            scanf("%d",&age);
            printf("Enter cgpa : ");
            scanf("%f",&cgpa);

            fprintf(sfptr,"\n%s\t",name);
            fprintf(sfptr,"%d\t",age);
            fprintf(sfptr,"%f",cgpa);
            

            fclose(sfptr);

        }else if(d == 2){
            FILE *ffptr;
            ffptr = fopen("faculty.txt","a");
            char name[10];
            int age;
            char subject[10];
            printf("Enter name : ");
            scanf("%s",name);
            printf("Enter age : ");
            scanf("%d",&age);
            printf("Enter subject : ");
            scanf("%s",&subject);

            fprintf(ffptr,"\n%s\t",name);
            fprintf(ffptr,"%d\t",age);
            fprintf(ffptr,"%s",subject);

            fclose(ffptr);
        }else if(d == 3){
            FILE *mfptr;
            mfptr = fopen("staff.txt","a");
            char name[10];
            int age;
            char work[10];
            printf("Enter name : ");
            scanf("%s",name);
            printf("Enter age : ");
            scanf("%d",&age);
            printf("Enter work : ");
            scanf("%s",&work);

            fprintf(mfptr,"\n%s\t",name);
            fprintf(mfptr,"%d\t",age);
            fprintf(mfptr,"%s",work);
            fclose(mfptr);
        }else{
            printf("\nWrong input");
        }
    }

}
int main(){
    int m;
    printf("***Collage Dashboard***");
    printf("\nEnter 0 for add information and 1 for read the information :");
    scanf("%d",&m);

    if(m == 0){
        write();
    }else if(m == 1){
        read();
    }else{
        printf("\nWrong input");
    }
    return 0;
}