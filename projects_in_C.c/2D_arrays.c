#include<stdio.h>
 
int main(){
    int marks[3][5],students = 3, subjects = 5;
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("Enter the marks of student %d for subject %d = ",i+1,j+1);
            scanf("%d",&marks[i][j]);
            
        }
        
    }
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("Enter the marks of student %d for subject %d is : %d\n",i+1,j+1,marks[i][j]);
            
        }
        
    }
    
return 0;
}