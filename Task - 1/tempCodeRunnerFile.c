#include <stdio.h>
void main()
{
int mark1, mark2, mark3, avg, total;
char O, E, A;
Printf("Enter the first subject mark");
Scanf("%d",&mark1);
Printf("Enter the second subject mark");
Scanf("%d",&mark2);
Printf("Enter the third subject mark");
Scanf("%d",&mark3);
total= mark1+mark2+mark3;
avg= total/3;
Printf("The total mark is",total);
Printf("The average mark is",avg);
if(total >90){
	Printf("The secured grade is O");
}
if(total<90|| total>=70){
	Printf("The secured grade is E");
}
if(total<70||total>=70){
	Printf("The secured grade is A");
}
else{
	Printf("You have to work hard");
}
return 1;
}
