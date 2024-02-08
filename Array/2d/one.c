#include<stdio.h>

void main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("\nPrinting Array: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d, ", arr[i][j]);
        }
        printf("\n");
    }
}

/*
Array 2d: (Multi-Dimensional Array)

In C, a 2D array is essentially an array of arrays. It is a data structure that can store elements in a grid or matrix-like format, with rows and columns. Let's break down how a 2D array works theoretically with indices, rows, and columns.

> Declaration and Initialization:

In C, a 2D array is declared using the following syntax:
> data_type array_name[num_rows][num_columns];

For example, to declare a 2D array of integers with 3 rows and 4 columns:
> int matrix[3][4];


> Indexing:

Each element in a 2D array is accessed using two indices: the row index and the column index. The row index specifies the position of the element within the array of arrays, while the column index specifies the position of the element within a particular row.

> Rows:

In a 2D array, rows are represented by the first index. For example, in the declaration 'int matrix[3][4];', there are 3 rows. Rows are numbered starting from 0 to 'num_rows - 1'.

> Columns:

Columns are represented by the second index. For example, in the declaration 'int matrix[3][4];', there are 4 columns. Columns are also numbered starting from 0 to 'num_columns - 1'.

> Accessing Elements:

To access an element in a 2D array, you use the row and column indices. For example, to access the element at the second row and third column:

int element = matrix[1][2];

Here, 'matrix[1]' refers to the second row (remember, indexing starts from 0), and 'matrix[1][2]' refers to the element in the second row and third column.

> Visual Representation:

A 2D array can be visually represented as a grid, with rows and columns:


[ 0,0 ] [ 0,1 ] [ 0,2 ] [ 0,3 ]
[ 1,0 ] [ 1,1 ] [ 1,2 ] [ 1,3 ]
[ 2,0 ] [ 2,1 ] [ 2,2 ] [ 2,3 ]

Each cell in the grid represents an element in the 2D array, with the row and column indices corresponding to the position of the cell.

> Summary:

- A 2D array in C is an array of arrays.
- Rows are represented by the first index, and columns are represented by the second index.
- Elements are accessed using both row and column indices.
- Indices start from 0.
- Visual representation helps understand the arrangement of elements in the array.

*/