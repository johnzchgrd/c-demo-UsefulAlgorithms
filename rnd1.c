#include<stdio.h>
double rnd1(double *r){
	int m;
	double s,u,v,p;
	s=65535.0;
	u=2053.0;
	v=13849.0;
	
	m=(int)(*r/s);
	*r-=m*s;
	*r*=u;
	*r+=v;
	m=(int)(*r/s);
	*r-=m*s;
	return (*r/s);
}
int main(){
   static double r;
   int i;
   printf("Enter seed:\n");
   scanf("%f",&r);
   for(i=0;i<10;i++){
	    printf("%lf\n",rnd1(&r));
   }
	return 0;
}
