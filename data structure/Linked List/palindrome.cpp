#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node(int d){
        data = d;
    }
    node* next;
};

int isPalindrome(node* head){
    h
}
int main(){
    node one = node(1);
    node two = node(2);
    node three = node(3);
    node four = node(2);
    node five = node(1);

    five.next = NULL;
    one.next = &two;
    two.next = &three;
    three.next = &four;
    four.next = &five;
    node* temp = &one;

    int result = isPalindrome(&one);
}