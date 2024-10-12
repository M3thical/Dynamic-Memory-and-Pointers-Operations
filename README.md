# Dynamic Memory and Pointer Operations

This project contains three C++ programs that demonstrate the use of dynamic memory allocation, pointers, and pointer arithmetic. Each program focuses on different concepts of pointers and dynamic memory, such as calculating areas, processing sales, and summing integers.

## Table of Contents
1. [Project Description](#project-description)
2. [Purpose of Learning](#purpose-of-learning)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Features](#features)

## Project Description

The project consists of three C++ programs:

1. **`darray.cpp`**: This program uses a dynamically allocated array to process and calculate monthly sales. The user is prompted to enter the number of sales, and the program dynamically allocates memory for that number of sales values. It then calculates and displays the average sales amount.

2. **`dynamic.cpp`**: This program demonstrates dynamic memory allocation using single variables. It allocates memory for three integers and a character array (representing a name), prompts the user for input, calculates the sum of the three numbers, and displays the results.

3. **`pointers.cpp`**: This program demonstrates how pointers can be used to calculate the area of a rectangle and compare the length and width of the rectangle. It uses pointers to store the address of the length and width variables and calculates the area by dereferencing the pointers.

## Purpose of Learning

The purpose of this project is to practice and improve the understanding of:

- **Dynamic Memory Allocation**: Using `new` and `delete` to manage memory for variables and arrays at runtime.
- **Pointers**: Working with pointers to store addresses, dereferencing pointers to access values, and performing calculations using pointers.
- **Pointer Arithmetic**: Accessing and manipulating arrays and individual variables using pointer arithmetic.
- **Input/Output Handling**: Accepting user input and displaying results based on dynamic data.

By working on these programs, I gained a better understanding of how to manage memory dynamically and how pointers are used in C++ to reference and manipulate data in memory.

## Installation

To run this project on your computer, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/dynamic-pointer-operations.git
    ```

2. Navigate to the project directory:
    ```bash
    cd dynamic-pointer-operations
    ```

3. Compile the programs using a C++ compiler like `g++`:
    - For `darray.cpp`:
      ```bash
      g++ darray.cpp -o darray_program
      ```
    - For `dynamic.cpp`:
      ```bash
      g++ dynamic.cpp -o dynamic_program
      ```
    - For `pointers.cpp`:
      ```bash
      g++ pointers.cpp -o pointers_program
      ```

4. Run the programs:
    - For `darray.cpp`:
      ```bash
      ./darray_program
      ```
    - For `dynamic.cpp`:
      ```bash
      ./dynamic_program
      ```
    - For `pointers.cpp`:
      ```bash
      ./pointers_program
      ```

## Usage

### `darray.cpp`
This program dynamically allocates an array based on the number of monthly sales specified by the user. The user enters the sales values, and the program calculates and displays the average sales.

### `dynamic.cpp`
This program dynamically allocates memory for three integers and a character array representing a name. It then prompts the user to input a name and three integers, calculates the sum of the integers, and displays the results.

### `pointers.cpp`
This program uses pointers to calculate the area of a rectangle by storing the length and width values in pointers. It also compares the length and width to determine which one is greater.

### Example Output:

For `darray.cpp`:

How many monthly sales will be processed? 3 Enter the sales below Sales for Month number 1: 100 Sales for Month number 2: 200 Sales for Month number 3: 150 Average Monthly sale is $150.00


For `dynamic.cpp`:

Enter your last name with exactly 10 characters. If your name has < 10 characters, repeat last letter. Blanks at the end do not count. Perezzzzzz Hi Perezzzzzz Enter three integer numbers separated by blanks 10 20 30 The three numbers are 10, 20, 30 The sum of the three values is 60


For `pointers.cpp`:

Please input the length of the rectangle 10 Please input the width of the rectangle 5 The area is 50 The length is greater than the width


## Features

- **Dynamic Memory Allocation**: The programs demonstrate how to dynamically allocate and deallocate memory for variables and arrays.
- **Pointer Arithmetic**: Several programs use pointer arithmetic to access and manipulate data.
- **Array Processing**: `darray.cpp` shows how to use dynamically allocated arrays to process multiple inputs.
- **Interactive User Input**: Each program interacts with the user to get inputs for the calculations.
