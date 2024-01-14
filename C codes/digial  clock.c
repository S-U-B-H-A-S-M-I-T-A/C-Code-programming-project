 #include<stdio.h>
 
 int main(){
 	int h,m,s;
 	double i;
 	while(1){
	 
 	printf("enter hour & minute");
 	scanf("%d",&h);
 	scanf("%d",&m);
 	for(h;h<24;h++){
 		for(m;m<60;m++)
 		{
 			for(s=1;s<60;s++)
 			{
 				printf("\n \n \n \t \t \t %d  %d  %d",h,m,s);
 				for(i=1;i<3910000;i++)
 				{
				 }
			 }
			 s=0;
		 }
		 m=0;
	 }
	 h=0;
}
return 0;
 }
