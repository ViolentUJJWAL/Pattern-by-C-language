#include <stdio.h>

int main()
{
	int n;
	char name[10];
	printf("Enter number: ");
	scanf("%d", &n);
	gets(name);
	printf("Enter name: ");
	gets(name);
	int o=0;
	for (int i=0; i<sizeof(name)/sizeof(char); i++){
		if (name[i]=='\0'){
			break;
		}
		o++;
	}
	char momo[o];
	for (int l=0; l<o; l++){
		if (name[l]=='\0'){
			break;
		}
		momo[l]='-';
	}
	momo[o]='\0';
	int m=0;
	for (int i1=n; i1>0; i1--){
		for (int k1=i1; k1>0; k1--){
			printf("%s ", name);
		}
		for (int k=0; k<m; k++){
			printf("%s ", momo);
		}
		for (int k1=i1; k1>0; k1--){
			printf("%s ", name);
		}
		printf("\n");
		m += 2;
	}
	int m1=m-2;
	for (int i=1; i<=n; i++){
		for (int k=0; k<i; k++){
			printf("%s ", name);
		}
		for (int k=0; k<m1; k++){
			printf("%s ", momo);
		}
		for (int k=0; k<i; k++){
			printf("%s ", name);
		}
		m1 -= 2;
		printf("\n");
	}
	return 0;
}