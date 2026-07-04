Problem Solving


📢This repository contains a collection of programming problems and solutions in C++ (or any language you used). It is designed to help beginners and intermediate programmers improve their problem-solving skills.

Folder Structure
Problem Solving/
│
├── Array/          # Problems related to arrays
├── Stack/          # Stack implementation and problems
├── Queue/          # Queue implementation and problems
├── Mathematics/    # Math related problems
├── Strings/        # String manipulation problems
└── Other/          # Miscellaneous problems


Each folder contains the problem statement (either in comments or a separate file) and the solution code.

Features

Solutions are written in C++

Covers basic to intermediate level problems

Includes data structures like arrays, stacks, and queues

Covers mathematics, strings, and other programming topics

Good for practice before coding interviews or exams

How to Use

Clone the repository:

😊git clone (https://github.com/TONMOY-DEY/problem-solving-)


Navigate to the folder of your choice:

cd Problem\ Solving/Array


Compile and run the program:

g++ program.cpp -o program
./program      # Linux/Mac
program.exe    # Windows

Example Problem

Problem: Reverse an array
Solution:

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    
    cout << "Reversed Array: ";
    for(int i = n-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}

Contributing

Add more problems and solutions in appropriate folders

Follow the same structure for new problems

Use clear comments to explain the solution

Notes

Solutions are meant for learning purposes

Always try to solve the problem yourself before looking at the solution

You can modify the code to practice or optimize.
