# cpsc-131-programming-assignment-3
Submission for Programming Assignment 3: Stacks

## Original Instructions
(provided by Pranay Netha Guda)

**Assignment: Parenthesis Matching Using Stack in C++**

**Objective**

In this assignment, you will develop a program to check if an expression has balanced parentheses using a stack. You will have the option to either implement your own stack using C++ vectors or linked lists or to use the built-in stack library in C++. This assignment will help you understand stack operations and the application of stacks in parsing expressions.

**Requirements**

    **Implement a Stack:**
        **Option 1:** Implement your own stack class using a C++ vector.
        **Option 2:** Implement your own stack class using a singly linked list.
        **Option 3:** Use the built-in std::stack library in C++.
    **Functionality:**
        Your program should read an expression from the user and check if the parentheses in the expression are balanced.
        The types of parentheses to check for are round brackets: ().
        After processing the expression, the program should output whether the expression is "Balanced" or "Not Balanced."
    **Input/Output:**
        Input: A string containing the expression to be checked.
        Output: A string stating whether the expression is "Balanced" or "Not Balanced."

**Example**

    Input: **(())**
    Output: **Balanced**
    Input: **(()**
    Output: **Not Balanced**

**Instructions**

    **Implement the Stack:**
        For Option 1, create a class Stack using a vector. Implement methods to push, pop, and check if the stack is empty.
        For Option 2, create a class Stack using a linked list. Your linked list should have nodes that store characters, and your stack should support push and pop operations.
        For Option 3, familiarize yourself with the stack library in C++ and how to use its methods.
    **Implement the Parenthesis Checker:**
        Create a function that uses the Stack class to check if the parentheses in a given string are balanced.
        Traverse the string character by character, pushing opening parentheses onto the stack and popping them when a corresponding closing parenthesis is encountered.
        After processing the entire string, the stack should be empty if the parentheses are balanced.
    **Testing:**
        Test your program with various expressions to ensure it correctly identifies balanced and unbalanced scenarios.

 **Submission Guidelines**

    Create a GitHub repository for your project.
    Push your source code file(s), including any additional documentation or README files, to this repository.
    Ensure your code is well-commented to explain your logic and approach.
    Submit the link to your GitHub repository as your final submission.
