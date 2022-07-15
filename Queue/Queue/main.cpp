//
//  main.cpp
//  Queue
//
//  Created by Asad Anik on 14/7/22.
//  Copyright © 2022 Asad Anik. All rights reserved.
//

#include <iostream>

using namespace std;

// Queue Class..
class Queue{
    int * arr;
    int start, end, currSize, maxSize;
public:
    Queue(){
        arr = new int[16];
        start = -1;
        end = -1;
        currSize = 0;
    }
    
    Queue(int maxSize){
        (* this).maxSize = maxSize;
        arr = new int[maxSize];
        start = -1;
        end = -1;
        currSize = 0;
    }
    // Push into Array..
    void push(int newElement){
        if (currSize == maxSize){
            cout << "Queue is full\n Exiting..." <<endl;
            exit(1);
        }
        if (end == -1){
            start = 0;
            end = 0;
        }else{
            end = (end + 1) % maxSize;
        }
        arr[end] = newElement;
        cout << "The element pushed is "<< newElement <<endl;
        currSize++;
    }
    // Remove element from an Array..
    int pop(){
        if (start == -1){
            cout << "Queue is Empty\n Exiting..." <<endl;
            exit(1);
        }
        int popped = arr[start];
        if (currSize == 1){
            start = -1;
            end = -1;
        }else{
            start = (start + 1) % maxSize;
        }
        currSize--;
        return popped;
    }
    int top(){
        if (start == -1){
            cout << "Queue is Empty" <<endl;
            exit(1);
        }
        return arr[start];
    }
    int size(){
        return currSize;
    }
};

// Main function..
int main(){
    Queue Q(6);
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    
    cout << "The peek of the queue before deleting any element "<< Q.top() << endl;
    cout << "The size of the queue before deletion " << Q.size() << endl;
    cout << "The first element to be deleted " << Q.pop() << endl;
    cout << "The peek of the queue after deleting an element " << Q.top() << endl;
    cout << "The size of the queue after deleting an element " << Q.size() << endl;
    
    return 0;
}
