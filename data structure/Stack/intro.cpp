#include <bits/stdc++.h>
#define MAXSIZE 10
using namespace std;

struct ArrayStack{
    int top;
    int capacity;
    int *arr;
};

struct ArrayStack *CreateStack(){
    struct ArrayStack *S = malloc(sizeof(struct ArrayStack));
    if(!S)
        return NULL;
    S->capacity = MAXSIZE;
    S->top = -1;
    S->arr = malloc(S->capacity*sizeof(int));
    if(!S->arr)
        return NULL;
    return S;
}
int IsEmptyStack(struct ArrayStack *S){
    return (S->top == -1);
}
int IsFullStack(struct ArrayStack *S){
    return (S->top == S->capacity-1);
}
void push(struct ArrayStack *S, int data){
    if(IsFullStack(S)) cout<<"Stack Overflow"<<endl;

    else
        S->arr[++S->top] = data;
}
int pop(struct ArrayStack *S){
    if(IsEmptyStack(S)){
        cout<<"Stack is empty"<<endl;
        return INT_MAX;
    }
    else
        return(S->arr[S->top--]);
}
void Delete(struct ArrayStack *S){
    if(S){
        if(S->arr)
            free(S->arr);
        free(S);
    }
}

int main(){

}