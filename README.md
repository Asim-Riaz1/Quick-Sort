# Quick Sort Algorithm (C++)

## Overview
This project implements the **Quick Sort algorithm** in C++. Quick Sort is a **divide-and-conquer sorting algorithm** that selects a pivot element and partitions the array around the pivot, then recursively sorts the subarrays.

## Features
- User input-based array creation.
- Recursive Quick Sort implementation.
- Efficient in-place sorting using partitioning.

## Algorithm Explanation
Quick Sort works in three main steps:
1. Select a **pivot** element.
2. Partition the array such that:
   - Elements smaller than pivot are placed on the left.
   - Elements greater than pivot are placed on the right.
3. Recursively apply Quick Sort on left and right partitions.

## Functions

### partition(vector<int> &arr, int start, int end)
- Selects the last element as pivot.
- Rearranges array elements based on pivot comparison.
- Returns the pivot's final position.

### quickSort(vector<int> &arr, int start, int end)
- Recursively sorts:
  - Left partition (elements smaller than pivot).
  - Right partition (elements greater than pivot).

### show(const vector<int>& arr)
- Displays array elements.

## How to Compile and Run

### Compile
```bash
g++ main.cpp -o quicksort
Run
./quicksort
Example Input/Output
Input
Enter how many values you want to enter: 5
Enter #1: 9
Enter #2: 2
Enter #3: 6
Enter #4: 1
Enter #5: 8

Output
Before: 9 2 6 1 8
After: 1 2 6 8 9

Complexity
Average Time Complexity: O(n log n)
Worst Case Time Complexity: O(n²) (when pivot selection is poor)
Space Complexity: O(log n) (recursive stack space)

Concepts Covered
Divide and Conquer Algorithms
Recursion
In-place Sorting
Partitioning Technique

Possible Improvements
Add randomized pivot selection to improve performance.
Implement iterative Quick Sort.
Compare Quick Sort vs Merge Sort performance.

Author
Created for learning sorting algorithms in C++.
