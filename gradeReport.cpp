
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void greadeReport(int n, int n1);//this is function prototype
int main() 
{
  int n,n1;//n is number of course for ech student n1 is number of students
 printf("enter the number of course and number of students respectively:") ;
  scanf("%d%d",&n,&n1);
   greadeReport(n,n1);//function call; this is passing n and n1
   return 0;
}
   
   void  greadeReport(int n, int n1){//function defnition
   struct report{
		char id[40];
		char  name[50];
		char code[50];
		char  grade;
		char courseName[40];
		char credit[60];
};
int i,j,k;
int *ptrN;
int *ptrN1;
ptrN=(int*)malloc(n*sizeof(int));//memory allocation for integer value
ptrN=(int*)malloc(n1*sizeof(int));//memory allocation for integer value
struct report gradeRport[n];
struct report gradeValue[n];
struct report *rportPtr=NULL;
rportPtr=(struct report*)malloc(sizeof(struct report));//memory allocation for structure value
rportPtr=gradeRport;
for(i=1;i<n;i++){
	   
	  printf(" enter course code course name and course credit respectively:#%d\n ",(i+1));
      scanf("%s %s %s", &(rportPtr->code), &(rportPtr->courseName),&(rportPtr->credit)); 
	  rportPtr++;
	  }
	     

 for(j= 1; j < n1;  j++ )
   {
  	  printf(" enter student id  and name of student respectively: #%d\n",(j+1));
      scanf("%s %s", (rportPtr->id), &(rportPtr->name));
      i=1;
	while(i<n){
	 	printf(" enter course code and grade of student respectively:#%d\n ",(i+1));
        scanf("%s %c", &(rportPtr->code), &(rportPtr->grade));  
		 i++;
	  }
	  
       printf("AXUM UNIVERSITY\n");
       printf("student grade report\n");
       printf("_______________________________________\n");
	   printf("student id: %s\n name: %s\n", rportPtr->id, rportPtr->name);
	   printf("_______________________________________\n");
	   printf("code    grade\n");
   for(i = 1;i <n; ++i){
	   printf("_______________________________________\n");
 	   printf("%s      %c\n", rportPtr->code, rportPtr->grade);	
   	   rportPtr++;
  }  

     printf("course matrix:\n");
     printf("_______________________________________\n");
     printf("course code      course name       credit\n");
     printf("_______________________________________\n");
     rportPtr=gradeRport;
for(i=0;i<n;i++){
 	   printf("%s               %s                %s\n", gradeRport[i].code, gradeRport[i].courseName,gradeRport[i].credit);
  	   printf("_______________________________________\n");
  	   rportPtr++;
  }
   
  printf("\n\n\n");
  rportPtr++;
   }

   free(ptrN);//make fre memory of integer type
  free(ptrN1);//make fre memory of integer type
   free(rportPtr);//make free structure  memory allocated     
  }

