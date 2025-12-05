#include <stdio.h>
int write(int num){
     FILE*ptr;
    ptr=fopen("hlw.txt","w");
    
    fprintf(ptr,"%d",num);
    fclose(ptr);
}
int read(){
    FILE*ptr;
    ptr=fopen("hlw.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("%d",num);

}
int main(){
    int num;
    num=40;
    write(num);
    read();
}