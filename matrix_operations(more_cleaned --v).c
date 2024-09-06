#include<stdio.h>
int main(){
    int m1[3][3],m2[3][3],m3[3][3],r,c,i,j;
    
    char opt;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c=j+1;
            r=i+1;
            printf("enter value for matrix_1 [%d][%d] : ",r,c);
            scanf("%d",&m1[i][j]);
        }
    }
    
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c=j+1;
            r=i+1;
            printf("enter value for matrix_2 [%d][%d] : ",r,c);
            scanf("%d",&m2[i][j]);
        }
    }
    printf("matrix_1\n");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d,",m1[i][j]);
        }
        printf("\n");
    }
    printf("matrix_2\n");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d,",m2[i][j]);
        }
        printf("\n");
    }
    
    
    printf("select one operator to perform [+,-,*,/] :");
    scanf(" %c",&opt);
    printf("result :\n");
    if(opt=='-'){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                m3[i][j]=m1[i][j]-m2[i][j];
            }
        }
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d,",m3[i][j]);
                
            }
            printf("\n");
            
        }
    } else if(opt=='+'){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                m3[i][j]=m1[i][j]+m2[i][j];
            }
        }
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d,",m3[i][j]);
                
            }
            printf("\n");
            
        }
    } else if(opt=='/'){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                m3[i][j]=m1[i][j]/m2[i][j];
            }
        }
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d,",m3[i][j]);
                
            }
            printf("\n");
            
        }
    } else if(opt=='*'){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                m3[i][j]=m1[i][j]*m2[i][j];
            }
        }
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d,",m3[i][j]);
                
            }
            printf("\n");
            
        }
    } else {
        printf("invalid operator: %c",opt);
        
    }
    
    
    
    return 0;
}