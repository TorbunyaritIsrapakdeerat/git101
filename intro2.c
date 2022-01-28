#include <stdio.h>
int main(){
    //char str[10]; // stored 9 char
    //gets(str);
    //fgets(str,10,stdin); //buffer size is -- array size
    //printf("in = %s",str);

    // char c = getchar(); //getchar() input only 1 char
    //printf("--%c",c);

    //char str_i[10];
    //char str_f[10];
    //char str_l[10];
    //printf("enter i:");
    //fgets(str_i,10,stdin);
    //printf("enter f:");
    //fgets(str_f,10,stdin);
    //printf("enter l:");
    //fgets(str_l,10,stdin);
    //printf("Ans = %s",str);

    //int i = atoi(str_i);
    //float f = atof(str_f);
    //long l = atol(str_l);

    //printf("%d - %f - %ld", i, f, l);

    //int i = 0;
    //float f = 0.0;
    //char c = '\0';//terminate character, null character

    //"kong" = ['k','o','n','g','\0']
    char str[10]="";
    fgets(str,10,stdin);
    int i=atoi(str);
    // Relational Operator > >= <= < == !=
    // Logical Operator && || !
    if (i<400){
        printf("if");
    }else if (i <= 400 && i > 100){
        printf("else if");
    }else{
        printf("else");
    }
}