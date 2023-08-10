



#include <stdio.h>
int main(){
	float percent;
    printf("Enter your percent : \n" );
    scanf("%f", &percent);
    
    if(percent > 80)
    {
    	printf("Your score is out standing" );
    }else if(percent <= 80 && percent >= 40)
    {
    	printf("Your score is good but not outstanding need to imporve");
    }else{
    	printf("Your have to stdy hard ");
    }
    return  0;
}
    