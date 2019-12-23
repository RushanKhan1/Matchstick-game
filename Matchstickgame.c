#include <stdio.h>
int AI(int,int);
void main()
{
    int i=0,n=0,rem=21,c=1; //No. of matchsticks are 21,variable i to store the AI's turn.
    printf("Welcome to the matchstick game!\n");
while (c==1)
    {
    

        while (rem>=0)
        {
            printf("It's your turn!\t");
             printf("Remaining matchsticks:%d\n",rem);
            printf("Enter the number of matchsticks to be picked:\n");
            scanf("%d",&n);
            if(n>4)
            {
                printf("Enter a number between 1 and 4!(tryna be smart huh?)\n");
                continue;
            }
            rem=rem-n;
            if (rem<=0)
            {
             printf("You Lose! You can try again.(No use though :p)\n\n");
             break;
            }
            printf("Remaining matchsticks:%d\n",rem);
            i=AI(n,rem); //AI calculating it's turn.
            printf("AI's turn = %d\n",i);
            printf("Remaining matchsticks:%d\n",(rem=rem-i));
            if (rem<=0)
            {
                printf("You win! Damn\n\n");
                break;
            }
        }
        printf("Do you want to play again?(1(yes)/0(no))\n");
        scanf("%d", &c);
        rem=21;
    }
}
int AI(int n,int rem)
{
    int turn; //value to be returned.
    if (rem>4&&n%4==0)
    {
       turn = 4; 
    }
    else if(rem>4) 
    {
       turn = 4-(n%4);
    }
    else if (rem<=0)
    {
        turn=0;
    }
    else if (rem==1)
    {
        turn=1;
    }
    
    else if (rem<=4)
    {
        turn=rem-1;
    }
    
    return turn;
}