#include"stdio.h"
#define MAXN 3
struct Stack{
    int a[MAXN];
    int top;
    Stack(){
        top = 0;
    }
};

int empty(Stack &s){
    return s.top == 0;
}

int push(Stack &s,int e){
    if(s.top==MAXN) return 0; //相等说明已经存满了，无法容纳更多的元素。
    s.a[s.top++]=e;
    return 1;

}

int pop(Stack &s,int &e){
    if(empty(s)) return 0;
    e = s.a[--s.top]; return 1;
}

int main(){
    int e;
    Stack s;
    while(scanf("%d",&e)){  //测试push
        if(!push(s,e)){
            puts("overflow");
            break;
        }
    }
    printf("\n\n");
    while(true){
        if(!pop(s,e)){
            puts("empty");
            break;
        }
        printf("%d\n",e);
    }

    return 0;
}
