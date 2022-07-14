//
//  main.cpp
//  Stack and Queue
//
//  Created by Asad Anik on 14/7/22.
//  Copyright © 2022 Asad Anik. All rights reserved.
//

#include <iostream>

using namespace std;

// The Stack Class here..
class Stack{
    int size;
    int * arr;
    int top;
    
public:
    Stack(){
        top = -1;
        size = 1000;
        arr = new int[size];
    }
    void push(int x){
        top++;
        arr[top] = x;
    }
    int pop(){
        int x = arr[top];
        top--;
        return x;
    }
    int Top(){
        return arr[top];
    }
    int Size(){
        return top + 1;
    }
};

// Main function..
int main(){
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    
    cout << "Top of stack before deleting any element "<< s.Top() << endl;
    cout << "Size of stack before deleting any element "<< s.Size() << endl;
    cout << "The element deleted is " << s.pop() << endl;
    cout << "Size of stack after deleting an element " << s.Size() << endl;
    cout << "Top of stack after deleting an element " << s.Size() << endl;
    
    return 0;
}
