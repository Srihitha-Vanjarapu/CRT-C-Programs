int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int c;
        scanf("%d",&c);
        if(c==1||c==2){
            printf("0");
            
        }
        else if(c%2==0){
            printf("%d\n",(c/2)-1);
            
        }
        else{
            printf("%d\n",c/2);
            
        }
    
}
    return 0;
}
