# include<stdio.h>
int main()
{
  struct student 
  {
    int stu_id;
    char name[20];
    float lang1_marks;
    float math_marks;
    float comp_marks;
    float marks;
    float avg; 
 };
 struct student s[20];
 int i,n;
 printf("enter the number of records \n");
 scanf("%d",&n);
 printf("enter the detiles of the students,n\n");
 
 for(i=0;i<n;i++) 
 {
  s[i].avg=(s[i].lang1_marks+math_marks+comp_marks)/3.0;
 }
  printf("student scoring above the average marks.......\n");
  printf("\n\nID\tname\tAvearge\n\n");
 for(i=0;i<n;i++)
 {
  if(s[i].avg>=35.0)
   {
   printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
   } 
 }   
 printf("student scoring below  the average marks.......\n");
  printf("\n\nID\tname\tAvearge\n\n");
 for(int i=0;i<n;i++)
 {
  if(s[i].avg<35.0)
   {
   printf("%d\t%s\t%f\n",s[i],stu_id,s[i].name,s[i].avg);
   }
 }return 0;
}
