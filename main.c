#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct User{
char name[50];
int password;
int confirm_password;
};
int main()
{
    struct  User user;
    printf("Registeration!\n");

    int i;
    printf("Enter user_name :");
    gets(user.name);
        if (!((user.name[0] >= 'a' && user.name[0] <= 'z') || (user.name[0] >= 'A' && user.name[0] <= 'Z')))
{
    printf("first letter shouldn't be number \n");
        return 0;
    }

    printf("Enter password :");
    scanf("%d",&user.password);
    printf("confirm your password :");
    scanf("%d",&user.confirm_password);
    if(user.confirm_password != user.password){
        printf("Not match");
        return 0;
    }

    else
       printf ("Register successful\n");

      system("cls");
    printf("LOG IN!\n");
    while(getchar()!='\n');
    char n[50];
    int p;
    printf("Enter your name :");
    gets(n);
    printf("Enter password :");
    scanf("%d",&p);


    if((strcmp(n,user.name)==0)){

      if (user.password==p){
             printf ("login successful\n");

    }
    else{
        printf ("password not correct\n");
    }
     }
    else if((strcmp(n,user.name)!=0)&&(user.password==p) ){
       printf ("user name not correct\n");
    }

    else{
        printf("user_name and password not correct\n");
    }
    return 0;
}
