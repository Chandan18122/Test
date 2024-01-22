#include<stdio.h>
#include<string.h>

void main() {
	char str[10];
	char word[10] ;
	printf("Enter the two word : ");
	scanf("%s%s",str,word);
	int f,count=0;
	int s = strlen(str);
	int w = strlen(word);
	if(s==w){
    	for(int i=0;i<s;i++){
    	    f=0;
    	    for(int j=0;j<w;j++){
    		    if(str[i] == word[j]){
    		        f=1;
    		    }
    		}
    	}
    	if(f==1){
    	    printf("%s and %s are anagram.",str,word);
    	}
    	else{
    	    printf("%s and %s are not anagram.",str,word);
    	}
	}
	else{
	    printf("%s and %s are not anagram.",str,word);
	}
	
}


