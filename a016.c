#include<stdio.h>
#include<stdbool.h>
int main(void) {
do{	
	int sd[9][9]={0};
	int i,j,ans,a,b;
	bool num[10]={false}; 
	ans=0;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			scanf("%d",&sd[i][j]);
		}
	}
	if(sd[0][0]==0)
		break;
	for(i=0;i<9;i++){
		bool num[10]={false}; 
		for(j=0;j<9;j++){
			if(num[sd[i][j]]==true)
				ans=1;
			else
				num[sd[i][j]]=1;
		}
	}
	for(i=0;i<9;i++){
		bool num[10]={false}; 
		for(j=0;j<9;j++){
			if(num[sd[j][i]]==true)
				ans=1;
			else
				num[sd[j][i]]=1;
		}
	}
	b=0;
	do{
		a=0;
		do{
			bool num[10]={false}; 
			for(i=a;i<a+3;i++){
				for(j=b;j<b+3;j++){
					if(num[sd[i][j]]==true)
						ans=1;
					else
						num[sd[i][j]]=1;
				}
			}
		a+=3;					
		}while(a==9);
		b+=3;
	}while(b==9);	
	if(ans==0)
		printf("yes\n");
	else
		printf("no\n");	
}while(1);
    return 0;
}

