#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    if (1000>n*200){
        printf("%d\n",n*200);
    }
    else{
        printf("%d\n",1000);
    }
    
	return 0;

}

