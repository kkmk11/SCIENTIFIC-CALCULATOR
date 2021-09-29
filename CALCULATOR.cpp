#define PI 3.14159
#include<stdio.h>
#include<math.h>
void clear(char enter);
void arithmetic(float a1,float b);
void trignometry(int a);
void matrix(int r1,int c1,int r2,int c2);
void power(float a4,float n);
void logarithm(float p);
void poly(float a6,float b6,float c6);
int main(){
	char enter;
	int a,a1,a4,a6,b6,c6,p,b,i,j,n,c,r1,r2,c1,c2;
	printf("\n\n\n\t\t\t\t********SCIENTIFIC CALCULATOR********");
	clear(enter);
	jump:
	{
		printf("\n1)ARITHMETIC OPERATORS\n2)TRIGNOMETRY\n3)MATRICES\n4)POWERS\n5)LOGARITHMS\n6)POLYNOMIALS\n	");
		printf("\nChoose among the one which you needed i.e 1 (or) 2 (or) 3 (or) 4 (or) 5 (or) 6 : ");
		scanf("%d",&c);
		clear(enter);
		switch(c){
			case 1 : arithmetic(a1,b);
			         break;
			case 2 : trignometry(a);
			         break;
			case 3 : matrix(r1,c1,r2,c2);
			         break;
			case 4 : power(a4,n);
			         break;
			case 5 : logarithm(p);
			         break;
			case 6 : poly(a6,b6,c6);
			         break;
			default : printf("\nInvalid");
			         break;
	}
	}
	printf("\n\n\t\t\t\tDo you want to use the Calculator again (y/n):");
	char z;
	scanf(" %c",&z);
	if((z=='Y') || (z=='y')){
		system("cls");
		goto jump;
	}
	else{
		system("cls");
		printf("\n\n\n\n\t\t\t\t----------THANK YOU !----------\n\n\n\n");
	}
}

void clear(char enter){
	printf("\n\n\n\n\t\t\t\t       Press ENTER to continue");
	scanf("%c",&enter);
	system("cls");
}

void arithmetic(float a1,float b){
	int c1;
	printf("Enter the 2 numbers a and b :\n");
	scanf("%f %f",&a1,&b);
	printf("\n1)ADDITION\n2)SUBSTRACTION\n3)MULTIPLICATION\n4)DIVISION\n\n");
	printf("\nChoose any operator among the above as 1 (or) 2 (or) 3 (or) 4 :  ");
	scanf("%d",&c1);
	switch(c1){
		case 1 : printf("\na + b = %.2f",a1+b);
		break;
		case 2 : printf("\na - b = %.2f",a1-b);
		break;
		case 3 : printf("\na x b = %.2f",a1*b);
		break;
		case 4 : printf("\na / b = %.2f",a1/b);
		break;
		default : printf("\nInvalid");
		break;
	}
}

void trignometry(int a){
	int c2;
	float r;
	printf("Enter the angle 'A' : ");
	scanf("%d",&a);
	r=a*(PI)/(180.0);
    printf("\n1)Sin(A)\n2)Cos(A)\n3)Tan(A)\n4)Cot(A)\n5)Sec(A)\n6)Cosec(A)\n");
	printf("\nChoose any function among the above as 1 (or) 2 (or) 3 (or) 4 (or) 5 (or) 6 :  ");
	scanf("%d",&c2);
	switch(c2){
		case 1 : printf("\nSin(%d) = %.2f",a,sin(r));
		         break;
		case 2 : printf("\nCos(%d) = %.2f",a,cos(r));
		         break;
		case 3 : if(a==90 || a==270 || a==450 || a==630 || a==810){
					printf("\nTan(%d) = Infinite",a);
				 }
				 else{
				 	printf("\nTan(%d) = %.2f",a,tan(r));
				 }
		         break;
		case 4 : if(a==0 || a==180 || a==360 || a==540 || a==720 || a==900){
					printf("\nCot(%d) = Infinite",a);
			     }
				 else{
				 	printf("\nCot(%d) = %.2f",a,1/tan(r));
				 }
		         break;
		case 5 : if(a==90 || a==270 || a==450 || a==630 || a==810){
					printf("\nSec(%d) = Infinite",a);
				 }
				 else{
				 	printf("\nSec(%d) = %.2f",a,1/cos(r));
				 }
		         break;
		case 6 : if(a==0 || a==180 || a==360 || a==540 || a==720 || a==900){
					printf("\nCosec(%d) = Infinite",a);
			     }
				 else{
				 	printf("\nCosec(%d) = %.2f",a,1/sin(r));
				 }
		         break;
		default : printf("\nInvalid");
		         break;
    }
}

void matrix(int r1,int c1,int r2,int c2){
    int i,j,c3;
    printf("\n1)MATRIX ADDITION\n2)MATRIX SUBSTRACTION\n3)MATRIX MULTIPLICATION\n4)MATRIX TRANSPOSE\n");
	printf("\nChoose among them as 1 (or) 2 (or) 3 (or) 4 : ");
	scanf("%d",&c3);
	if(c3==1 || c3==2 || c3==3){
	printf("Give the rows and columns in Matrix A\n");
    scanf("%d %d",&r1,&c1);
    printf("Give values for Matrix A %dX%d\n",r1,c1);
    int a[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Give the rows and columns in Matrix B\n");
    scanf("%d %d",&r2,&c2);
    printf("Give values for Matrix B %dX%d\n",r2,c2);
    int b[i][j];
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
	switch(c3){
	case 1 :if(r1==r2 && c1==c2){
    	puts("\nAddition of two matrices is:\n");
		int k[r1][c1];
    	for(i=0;i<r1;i++){
    	    for(j=0;j<c1;j++){
    	        k[i][j]=a[i][j]+b[i][j];
    	        printf("%d\t",k[i][j]);
    	    }
    	    printf("\n");
    	}
        }
    	else{
    		puts("Matrix Addition not possible\n");
		}
    break;	
	case 2 : if(r1==r2 && c1==c2){
        puts("\nSubtraction of two matrices is:");
        int k[r1][c1];
    	for(i=0;i<r1;i++){
    	    for(j=0;j<c1;j++){
    	        k[i][j]=a[i][j]-b[i][j];
    	        printf("%d\t",k[i][j]);
    	    }
    	    printf("\n");
    	}
        }
    	else
    	{
       	puts("\nMatrix Subtraction not possible");
        }
    break;
    case 3 :
		if(c1==r2){
        int k;
        printf("Multiplication of two matrices is:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
            	int temp=0;
                for(k=0;k<c1;k++){
                    temp=temp+a[i][k]*b[k][j];
                }
            printf("%d\t",temp);
            }
        printf("\n");
        }
	    }
	    else
	    {
	       puts("\nMatrix Multiplication not possible");
        }
    break;
    default : printf("Invalid");
              break;
    }
	}
    else{
    	printf("Give the rows and columns in Matrix A\n");
        scanf("%d %d",&r1,&c1);
        printf("Give values for Matrix A %dX%d\n",r1,c1);
        int a[r1][c1];
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                scanf("%d",&a[i][j]);
            }
        }
    	puts("Transpose of matrix is:");
        for(i=0;i<c1;i++){
           for(j=0;j<r1;j++){
              printf("%d\t",a[j][i]);
           }
           puts("\n");        
        }  
	}
}

void power(float a4,float n){
	float y;
	printf("Enter the values 'a' and 'n' in a^n :\n");
	scanf("%f %f",&a4,&n);
	y=pow(a4,n);
	printf("(%.2f)^(%.2f) = %.2f",a4,n,y);
}

void logarithm(float p){
	float y;
	int c5;
	printf("\n1)COMMON LOGARITHM(Log of base 10)\n2)NATURAL LOGARITHM(Log of base e)");
	printf("\n\nChoose any one among the above as 1 (or) 2 : ");
	scanf("%d",&c5);
	printf("\n\nEnter the value of 'a' in log(a) : ");
	scanf("%f",&p);
	y=log10(p);
	switch(c5){
		case 1 : printf("\nlog(%.2f) = %.2f",p,y);
				 break;
		case 2 : printf("\nlog(%.2f) = %.2f",p,2.303*y);
		         break;
		default : printf("\nInvalid");
		        break;
	}
}

void poly(float a6,float b6,float c6){
	float x,root1,root2,discriminant,realPart,imaginaryPart;
	int f;
	printf("\n1)LINEAR EQUATION\n2)QUADRATIC EQUATION\n");
	printf("\nChoose among the above as 1 (or) 2 : ");
	scanf("%d",&f);
	switch(f){
		case 1 : printf("\nEnter coefficients a and b in ax+b=0 : \n");
		         scanf("%f %f",&a6,&b6);
		         printf("root = %.2f",-b6/a6);
		         break;
		case 2 : printf("\nEnter coefficients a, b and c in ax^2+bx+c=0 : \n");
					scanf("%f %f %f",&a6,&b6,&c6);
					discriminant = b6*b6-4*a6*c6;
					if (discriminant > 0){
				 	root1 = (-b6+sqrt(discriminant))/(2*a6);
					root2 = (-b6-sqrt(discriminant))/(2*a6);
					printf("\nThe roots are real and distinct\nroot1 = %.2f and root2 = %.2f\n",root1 , root2);
				 		}
					else if (discriminant == 0){
				 	root1 = root2 = -b6/(2*a6);
					printf("\nThe roots are real and equal\nroot1 = root2 = %.2f\n", root1);
				 		}
					else{
					realPart = -b6/(2*a6);
					imaginaryPart =(sqrt(-discriminant))/(2*a6);
					printf("\nThe roots are real and imaginary\nroot1 = (%.2f)-i(%.2f)\nroot2 = (%.2f)-i(%.2f)\n", realPart, imaginaryPart, realPart, imaginaryPart);
                 	}  
				 break;
		default : printf("\nInvalid");
		         break;             
	}
}
