#include<stdio.h>
int main(){

    int x , y ;
    printf("Enter the coordinates ");
    scanf("%d %d",&x,&y);

    if(x>0 && y>0){
        printf("The point (%d,%d) lies in the First Quadrant",x,y);
    }
    else if(x<0 && y>0){
        printf("The point (%d,%d) lies in the Second Quadrant",x,y);
    }
    else if(x<0 && y<0){
        printf("The point (%d,%d) lies in the Third Quadrant",x,y);
    }
    else if(x>0 && y<0){
        printf("The point (%d,%d) lies in the Fourth Quadrant",x,y);
    }
    else if(x==0 && y!=0){
        printf("The point (%d,%d) lies on the Y-axis",x,y);
    }
    else if(y==0 && x!=0){
        printf("The point (%d,%d) lies on the X-axis",x,y);
    }
    else{
        printf("The point (%d,%d) is at the origin",x,y);
    }

    return 0;
}