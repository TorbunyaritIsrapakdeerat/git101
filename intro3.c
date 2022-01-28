#include<stdio.h>
// void
// ReturnType FunctionName(parameter){
//     //statement
//     return .....;
//     return ;
// }
// Function Header, Function Prototype
int addTwenty();
int x = 10 ;

int main()
{
    int x = 200 ;
    int y = addTen(x);
    printf("In main x = %d, y = %d\n",x,y);
    int z = addTwenty();
    printf("In main2 x = %d , y = %d, z = %d\n",x,y,z);
    // for (x=1000;;){
    //     int x = 20;
    // }
}
int addTwenty(){
    printf("addTwenty x = %d\n",x);
    x += 20 ;
    printf("after added addTwenty x = %d\n",x)
}
 //int k, l;
 //int i = 0,j = 0;
    //printf("%d %d %d %d\n", i, j, k, l);
    /*while (i<10){
        printf("%d\n",i);
        i++;
    }*/

    //while (0){
        //printf("%d\n",i);
        //i++;
    //}
    
    // for  (int i = 0 ; i < 10 ; i++ ){
    //     printf("%d\n" ,i);
    // }
// int addTen(int x){
//     printf("addTen x = %d\n",x);
//     x += 10;
//     printf("after added addTen x = %d\n",x);
//     return x;
// }