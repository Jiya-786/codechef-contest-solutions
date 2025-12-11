#include <stdio.h>

int main() {
	
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int bob_score=(y-x)/2;
	    int alice_score=y-bob_score;
	    
	    printf("%d %d\n",alice_score,bob_score);
	}
	
	
	return 0;

}

