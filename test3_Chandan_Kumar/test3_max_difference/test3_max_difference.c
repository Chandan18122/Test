#include <stdio.h>

int main()
{
    int arr[5] = {15, 10, 5, 25, 10};
    int max,diff =0;
    for(int i=0;i<5-1;i++){
        max=-20;
		for(int j=i+1;j<5;j++){
			diff = arr[i]- arr[j];
			if(max > diff){
				max = max;
			}
			else{
				max = diff;
			}
		}
		printf("%d\t",max);
	}
	printf("%d",arr[4]);
    return 0;
}

