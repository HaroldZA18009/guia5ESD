#include <stdio.h>

char convert(int dft,int base){
    int rest=0;
    if(!dft)
        return  'v';
    if(base==2){
        rest=dft%2;
        dft=dft/2;
        convert(dft,base);
    }else if(base==3){
        rest=dft%3;
        dft=dft/3;
        convert(dft,base);
    }else if(base==4){
        rest=dft%4;
        dft=dft/4;
        convert(dft,base);
    }else if(base==5){
        rest=dft%5;
        dft=dft/5;
        convert(dft,base);
    }else if(base==6){
        rest=dft%6;
        dft=dft/6;
        convert(dft,base);
    }else if(base==7){
        rest=dft%7;
        dft=dft/7;
        convert(dft,base);
    }else if(base==8){
        rest=dft%8;
        dft=dft/8;
        convert(dft,base);
    }else if(base==9){
        rest=dft%9;
        dft=dft/9;
        convert(dft,base);
    }else if(base==10){
        rest=dft%10;
        dft=dft/10;
        convert(dft,base);
    }else if(base==11){
        rest=dft%11;
        dft=dft/11;
        convert(dft,base);
    }else if(base==12){
        rest=dft%12;
        dft=dft/12;
        convert(dft,base);
    }else if(base==13){
        rest=dft%13;
        dft=dft/13;
        convert(dft,base);
    }else if(base==14){
        rest=dft%14;
        dft=dft/14;
        convert(dft,base);
    }else if(base==15){
        rest=dft%15;
        dft=dft/15;
        convert(dft,base);
    }
    else if(base==16) {
        rest=dft%16;
        dft=dft/16;
        convert(dft,base);
    }
    switch(rest){
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%i",rest);
    }
}

void main()
{
    int n=0;
    int b=0;
    printf("Ingrese numero: ");
    scanf("%i",&n);
    printf("Ingrese base: ");
    scanf("%i",&b);
    convert(n,b);
}