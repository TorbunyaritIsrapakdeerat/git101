#include<stdio.h>
//define scanf 20
void printString(char *s){
    for (char *p = s; *p != '\0';p++){
        printf("[%p] = %c\n", p , *p);
    }
}
void printIntArray(int *i, int size){
     for (int *j = i; j < (i + size); j++){
         printf("[%p] = %d\n",j,*j);
     }
    
}
void addTen(int *i,int size){
    for (int *j = i; j < (i + size); j += 1){
        *j += 10;
    }
}
int main(){
    char s[100];
    int data[10] = {1,2,3,4,5,6,7,8,9,10};
    scanf("%s",s);
    printString(&s[0]);
    printIntArray(data,10);
    addTen(data,10);
    printIntArray(data,10);
    // // int a = 100;
    // // int b = 0144;
    // // int c = 0x64;
    // // int d = 0b11010101010001;
    // // printf("TEN=%d,EIGHT=%d,SIXTEEN=%d,BI=%d",a,b,c,d);

    // int x =  100;
    // printf("value of x = %d\n",x);
    // //printf("reference of x = %lu\n",&x);
    // printf("reference of x = %p\n", &x);
    // // &x = 1004; ไม่สามารถเปลี่ยนเลข address ใน memmory ได้
    // int data[10] = {10,20,30,40,50};
    // printf("value of data[0] = %d\n",data[0]);
    // printf("reference of data[0] = %p\n", &data[0]);
    // printf("reference of data[0] = %p\n", &data);

    // printf("value of data[5] = %d\n", &data[5]);
    // printf("reference of data[5] = %p\n", &data[5]);

    // //460 -> 474 = 0x14 => 1 * 16 + 4 = 20

    // printf("value of data[100] = %d\n", &data[100]);
    // printf("reference of data[100] = %p\n", &data[100]);

    // data[1000] = 200; สามารถเปลี่ยนค่าข้อมูลได้
    // printf("value of data[100] = %d\n", &data[100]);
    // printf("reference of data[100] = %p\n", &data[100]);

    // int data[10] = {10,20,30,40,50};
    // int x = 100;

    // int *ptr = &x;
    // int *arrPtr;
    // arrPtr = data; // => &data[0]

    // printf("reference of x = %p\n",&x);
    // printf("Value of ptr = %p\n",ptr);
    // printf("reference of ptr = %p\n",&ptr);
    // //Dereferencing
    // printf("value of reference of ptr = %d\n", *ptr);

    // *ptr = 1000;
    // printf("x = %d\n",x);
    // int x;
    // char s[100];
    // char c;
    // scanf("%d",&x);
    // scanf("\n%c",&c);

    // printf("result - %d, %c\n", x,c);
}