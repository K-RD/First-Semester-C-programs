#include<stdio.h>
int main(){
	float dist,dm,dcm,di,df;
	printf("Enter distance between both cities in KM: ");
	scanf("%f",&dist);
	dm=dist*1000;
	dcm=dm*100;
	di=dcm/2.54;
	df=di/12;
	printf("The distance in KM is: %f KM\n",dist);
	printf("The distance in Metre is: %f Metre\n",dm);
	printf("The distance in CM is: %f CM\n",dcm);
	printf("The distance in FEET is: %f Feet\n",df);
	printf("The distance in INCH is: %f Inch\n",di);
	
//	printf("hii %f  it %f  is %f 12 %f  %f ",dist,dm,dcm,df,di,end="\n");
	
}
