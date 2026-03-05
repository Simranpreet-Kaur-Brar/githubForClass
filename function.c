#include <stdio.h>
// void printData (int a, int b){
//     printf("%d",a+b);
// }
// int main (){
//     printData(10,20);
// }

//                                           5 MARCH 2026

// int add(int a, int b){
//     return a+b;
// }

// int main(){
//     int sum = add(10,20);
//     printf("%d", sum);
// }

// Two ways to pass function - pass by value, pass by reference

// (i) Pass by value
// void swap(int a, int b){
//     printf("Val %d %d \n",a,b); 
//     int c;
//     c=a;
//     a=b;
//     b=c;
//     printf("Val  %d %d \n",a,b);
// }
// void main(){
//     int a =10;
//     int b =20;
//     swap(a,b);
//     printf("FROM - Val %d %d",a,b);
// }

//(ii) Pass by references - POINTERS - instead of passing copies of variables like in pass by value, here we pass the address or reference.
// & - used to access address
// * - used to store address
/* e.g. int *c = &a; // REFERENCING
        printf("%d", *c);  // DEREFERNCING (it will print the value present at location to which 'c' is pointing.) */ 

// void swap(int *a, int *b){
//     printf("Val %d %d \n",*a,*b);
//     int t=*a;
//     *a=*b;
//     *b=t;
//     printf("Val %d %d \n",*a,*b);
// }
// int main(){
//     int a=10;
//     int b=20;
    
//     swap(&a,&b);
//     printf("FROM - Val %d %d",a,b);
// }

void calc(int a, int b, char c, int *ans){
    switch(c){
        case '+':
            *ans = a+b;
            break;
        case '-':
            *ans = a-b;
            break;
        case '*':
            *ans = a*b;
            break;
        case '/':
            *ans = a/b;
            break;
        default:
            printf("Invlid");
    }
}
int main(){
    int a = 10;
    int b = 5;
    char c = '-';
    int ans=0;
    calc(a,b,c,&ans);
    printf("%d",ans);
}