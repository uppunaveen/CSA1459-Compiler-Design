#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i=0,count=0,flag=0;
	printf("Enter the input :");
	scanf("%[^\n]c",&a);
	for(count=0;a[count];count++){
		
		continue;
	}
	for(i=0;a[i];i++){
		if(a[i]=='/' && a[i+1]=='/'){
			printf("\nThis is a comment...");
			flag=0;
			break;
		}
		else if(a[i]=='/' && a[i+1]=='*' && a[count-2]=='*' && a[count-1]=='/'){
			printf("\nThis is a multiline comment...");
			flag=0;
			break;
		}
		else{
			flag=1;
		}
	}
	if(flag==1){
		printf("This is not a comment line..");
	}
}
