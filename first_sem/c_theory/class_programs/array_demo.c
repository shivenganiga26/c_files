#include<stdio.h>
int main(){
    int sub_marks[5]; //declares an array 'sub_marks'
    // with size 5 of 'int' type
   /* printf("enter first subject marks:");
    scanf("%d",&sub_marks[0]);
    printf("enter second subject marks:");
    scanf("%d",&sub_marks[1]);
    printf("enter third subject marks:");
    scanf("%d",&sub_marks[2]);
    printf("enter forth subject marks:");
    scanf("%d",&sub_marks[3]);
    printf("enter fifth subject marks:");
    scanf("%d",&sub_marks[4]);*/
    for (int  i = 0; i < 5; i++)
    {
        printf("enter %d subject marks:",i+1);
        scanf("%d",&sub_marks[i]);
    }
    printf("---------------------------------------\n");
    printf("first subject marks:%d\n",sub_marks[0]);
    printf("second subject marks:%d\n",sub_marks[1]);
    printf("third subject marks:%d\n",sub_marks[2]);
    printf("forth subject marks:%d\n",sub_marks[3]);
    printf("fifth subject marks:%d\n",sub_marks[4]);
}