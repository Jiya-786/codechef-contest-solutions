#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf(" %d",&a[i]);
	    }
	    
	    int min_cost=(a[0]+a[1]);
	    
	    for(int i=1;i<n;i++){
	        if ((a[i-1]+a[i])<=min_cost){
	            min_cost=a[i-1]+a[i];
	        }
	    }
	    printf("%d\n",min_cost);
	}
	
	
	
	return 0;

}

