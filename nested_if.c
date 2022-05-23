/*Write a C program determining the greatest number among three numbers. And check if the lowest number is 
divisible by 2 when we add an odd number*/
#include <stdio.h>

int main(){
    int firstnum, secondnum, thirdnum, odd;
    
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &firstnum, &secondnum, &thirdnum);
    
    printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d\n", firstnum, secondnum, thirdnum);
    
    if(firstnum > secondnum && firstnum > thirdnum){
        printf("\nThe 1st Number is the greatest among three numbers\n");
        
        if(secondnum < firstnum && secondnum < thirdnum){
            printf("\nEnter an odd number to be added to the lowest number: ");
            scanf("%d", &odd);
            if(odd % 2 != 0){
                secondnum += odd;
                if(secondnum % 2 == 0){
                    printf("\nThe %d is divisible by 2\n", secondnum);
                }else{
                    printf("\nThe %d is not divisible by 2\n", secondnum);
                }
            }else{
            printf("\nThe number you have inputted is not an odd number\n");
            }
        }else if(thirdnum < firstnum && thirdnum < secondnum){
            printf("\nEnter an odd number to be added to the lowest number: ");
            scanf("%d", &odd);
            if(odd % 2 != 0){
                thirdnum += odd;
                if(thirdnum % 2 == 0){
                    printf("\nThe %d is divisible by 2\n", thirdnum);
                }else{
                    printf("\nThe %d is not divisible by 2\n", thirdnum);
                }
            }else{
            printf("\nThe number you have inputted is not an odd number\n");
            }
        }
    }else if(secondnum > firstnum && secondnum > thirdnum){
        printf("\nThe 2nd Number is the greatest among three numbers\n");
        if(firstnum < secondnum && firstnum < thirdnum){
            printf("\nEnter an odd number to be added to the lowest number: ");
            scanf("%d", &odd);
            if(odd % 2 != 0){
                firstnum += odd;
                if(firstnum % 2 == 0){
                    printf("\nThe %d is divisible by 2\n", firstnum);
                }else{
                    printf("\nThe %d is not divisible by 2\n", firstnum);
                }
            }else{
            printf("\nThe number you have inputted is not an odd number");
            }
        }else if(thirdnum < secondnum && thirdnum < firstnum){
            printf("\nEnter an odd number to be added to the lowest number: ");
            scanf("%d", &odd);
            if(odd % 2 != 0){
                thirdnum += odd;
                if(thirdnum % 2 == 0){
                    printf("\nThe %d is divisible by 2\n", thirdnum);
                }else{
                    printf("\nThe %d is not divisible by 2\n", thirdnum);
                }
            }else{
            printf("\nThe number you have inputted is not an odd number\n");
            }
        }
    }else{
        printf("\nThe 3rd Number is the greatest among three numbers\n");
        if(secondnum < thirdnum && secondnum < firstnum){
            printf("\nEnter an odd number to be added to the lowest number: ");
            scanf("%d", &odd);
            if(odd % 2 != 0){
                secondnum += odd;
                if(secondnum % 2 == 0){
                    printf("\nThe %d is divisible by 2\n", secondnum);
                }else{
                    printf("\nThe %d is not divisible by 2\n", secondnum);
                }
            }else{
            printf("\nThe number you have inputted is not an odd number\n");
            }
        }else if(firstnum < secondnum && firstnum < thirdnum){
            printf("\nEnter an odd number to be added to the lowest number: ");
            scanf("%d", &odd);
            if(odd % 2 != 0){
                firstnum += odd;
                if(firstnum % 2 == 0){
                    printf("\nThe %d is divisible by 2\n", firstnum);
                }else{
                    printf("\nThe %d is not divisible by 2\n", firstnum);
                }
            }else{
            printf("\nThe number you have inputted is not an odd number\n");
            }
        }
    }
}
