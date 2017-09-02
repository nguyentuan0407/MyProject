#include<stdio.h>
int main(){
    int a,b;
    printf("nhap vao hai so a va b\n");
    scanf("%d%d",&a,&b);
    printf("tong:%d\n",a+b);
    printf("hieu:%d\n",a-b);
    printf("tich:%d\n",a*b);
    if(b!=0){
        printf("thuong:%f",(float)a/b);
    }
    else{
        printf("vo nghia");
    }

    return 0;

}



