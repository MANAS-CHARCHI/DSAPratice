#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct str{

};

void fn(){
    static int a=1;
    a++;
    printf("%d", a);
}

    void f1(){extern int x; ++x;}
    void f2(){extern int x; ++x;}
    int x=1;


    void dtob(int a){
        if(a==0 || a==1) {printf("%d", a); return;}
        else {dtob(a/2); printf("%d", a%2); } 
    }

    int power(int a, int b){
        if(b==0) return 1;
        if(b==1) return a;
        return a*power(a, b-1);
    }

    int digit(int a){
        if(a<10) return 1;
        return 1+digit(a/10);
    }

int main(){

    // // Format
    // printf("Enter Number:-");
    // int a, b, c;
    // scanf("%d %d", &a, &b);
    // c = a + b;
    // printf("Sum of %d & %d is %d . ", a, b, c );

    // unsigned short int a=2;   //here short is for  4 byte = 32 bit 
    // printf("%u", a);          // %u used for unsigned

    // char ch=69;
    // printf("%d\n", ch);
    // printf("%c\n", ch);     // A=65 to Z=90, a=97 to z=122, 0=48 to 9=57

    // printf("%d", -10%2);    // sign of the result is depends on sign of number before module
    // printf("%d", 4.0%2);    // error

    // printf("Manas\t");
    // printf("Charchi");

    // fn();
    // fn();
    // fn();

    // ++x;
    // f1();f2();
    // printf("%d", x);


    // Decimal to Binary
    // dtob(10);

    // a power b
    // printf("%d", power(2,16));

    // number of Digit
    // printf("%d", digit(10000));

    // int n=5;
    // // int *arr=(int *) malloc(n*sizeof(int));                   //malloc
    // int *arr=(int *) calloc(n, sizeof(int));                     //calloc
    // int *new_arr=(int *) realloc(arr, 10*sizeof(int));           //realloc
    // if(arr==NULL){printf("not allocated memory");return 1;}
    // for(int i=0;i<10;i++) new_arr[i]=i+1;
    // for(int i=0;i<10;i++) printf("%d", new_arr[i]);
    // free(new_arr);                                               //free

    // char *name="manas";
    // name="bikash charchi";
    // printf("%s", name);

    // char arr[20]="manas";
    // strcpy(arr, "RAM");
    // // printf("%s", arr);
    // strcat(arr, "manas");
    // printf("%s", arr);
    // printf("%d",strcmp(arr, "charchi"));
    // printf("%s", arr);

    // char ch[20];
    // gets(ch);     
    // puts(ch);

    return 0;
}