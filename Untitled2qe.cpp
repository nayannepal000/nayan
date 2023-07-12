#include<stdio.h>
int search(int a[],int key,int size)
{
	int i;
	for(i=0;i<size;i++){
		if(key==a[i])
		return 1;
	}
	return 0;
}

    void sort(int a[],int size){
    	int i,j,temp;
    	for(i=0;i<size-1;i++){
    		for(j=i+1;j<size;j++){
    			if (a[i]>a[j]){
    				temp=a[i];
    				a[i]=a[j];
    				a[j]=temp;
				}
			}
		}
	}
	int main(){
		int i,j=0,k=0,temp=-1;
		int a[]={1,3,5,7,9};
		int b[]={2,3,4,5,6,8,10};
		int u[]={1,2,3,4,5,6,7,8,9,10,11,12};
		int c[12];
		printf("a union b is :\n");
		for(i=0;i<5;i++){
			c[k++]=a[i];
		}
		for(i=0;i<7;i++)
		{
			c[k++]=b[i];
		}
		sort(c,k);
		for(i=0;i<k;i++){
			if(c[i]!=temp)
			printf("%d ",c[i]);
			temp=c[i];
		}
		return 0;
	}
