#include<stdio.h>
//add min 3 no.

int main(){
	int a,b,c,d,e;
	printf("Enter the six prise : ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 
	int sum = 0,m1,m2,m3;
	if(a<b&&a<c&&a<d&&a<e){
		m1=a;
		if(b<c&&b<d&&b<e){
			m2=b;
			if(c<d&&c<e){
				m3=c;
			}
			else if(d<c&&d<e){
				m3=d;
			}
			else {
				m3=e;
			}
		}
		if(c<b&&c<d&&c<e){
			m2=c;
			if(b<d&&b<e){
				m3=b;
			}
			else if(d<b&&d<e){
				m3=d;
			}
			else {
				m3=e;
			}
		}
		if(d<c&&d<b&&d<e){
			m2=d;
			if(c<b&&c<e){
				m3=c;
			}
			else if(b<c&&b<e){
				m3=b;
			}
			else {
				m3=e;
			}
		}
		if(e<c&&e<d&&e<b){
			m2=e;
			if(c<d&&c<b){
				m3=c;
			}
			else if(d<c&&d<b){
				m3=d;
			}
			else {
				m3=b;
			}
		}
		
			
	}
	sum = m1+m2+m3;
	printf("Total amount : %d\n",sum);
	

	
	return 0;
}
