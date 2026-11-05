// // #include <stdio.h>

// // int n, target, found = 0;
// // int w[10], x[10];

// // void subsetSum(int idx, int sum) {
// //     // Base condition
// //     if (sum == target) {
// //         printf("\nSubset found: ");
// //         for (int i = 0; i < n; i++)
// //             if (x[i]) 
// //             printf("%d ", w[i]);
// //         found++;
// //         return;
// //     }

// //     // If we reach end or sum exceeds target → stop
// //     if (idx == n || sum > target)
// //         return;

// //     // Include current element
// //     x[idx] = 1;
// //     subsetSum(idx + 1, sum + w[idx]);

// //     // Exclude current element (backtrack)
// //     x[idx] = 0; 
// //     subsetSum(idx + 1, sum);
// // }

// // int main() {
// //     printf("Enter number of elements: ");
// //     scanf("%d", &n);

// //     printf("Enter elements:\n");
// //     for (int i = 0; i < n; i++)
// //         scanf("%d", &w[i]);

// //     printf("Enter target sum: ");
// //     scanf("%d", &target);

// //     printf("\nSubsets with sum = %d:\n", target);
// //     subsetSum(0, 0);

// //     if (!found)
// //         printf("\nNo subset found.\n");

// //     return 0;
// // }

///// ???????? SUM OF SUBSET ??????//////
//  #include <stdio.h>
//   int w[] = {2, 4, 6, 8};
//  int n = 4;
//       int t=10
// // int x[10], f = 0;


// // void s(int i, int sum) {
// //     if (sum == t) {
// //         printf("\nSubset: ");
// //         for (int j = 0; j < n; j++) 
// //         if (x[j]) 
// //         printf("%d ", w[j]);
// //         f = 1; return;
// //     }
// //     if (i == n || sum > t) 
// //     return;
// //     x[i] = 1; 
// //     s(i + 1, sum + w[i]);
// //     x[i] = 0; 
// //     s(i + 1, sum);
// // }

// // int main() {
// //  
// //     s(0, 0);
// //     if (!f) printf("\nNo subset found.\n");
// //     return 0;
// // }

/// ?????? QUICK SORT ????//////
// #include <stdio.h>

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[low];
//     int i = low, j = high;
//     while (i < j)
//     {
//         while (arr[i] <= pivot)
//             i++;
//         while (arr[j] > pivot)
//             j--;
//         if (i < j)
//             swap(&arr[i], &arr[j]);
//     }
//     swap(&arr[low], &arr[j]);
//     return j;
// }

// void quicksort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int loc = partition(arr, low, high);
//         quicksort(arr, low, loc - 1);
//         quicksort(arr, loc + 1, high);
//     }
// }

// int main()
// {
//     int arr[7] = {2, 8, 89, 34, 87, 1, 39};
//     quicksort(arr, 0, 6);
//     printf("Sorted numbers:");
//     for (int i = 0; i < 7; ++i)
//         printf("%d ", arr[i]);
//     return 0;
// }

// /////?????????????    N QUEEN /////////
// #include <stdio.h>
// #include <conio.h>

// #define N 4
// int board[N][N];
// //int found = 0; // check if at least one solution exists

// void printBoard() {
//     int i, j;
//     for (i = 0; i < N; i++) {
//         for (j = 0; j < N; j++)
//             printf("%d ", board[i][j]);
//         printf("\n");
//     }
//     printf("\n");
//     //found = 1; // mark that solution exists
//    // getch();   // wait for key press to show each solution
// }
// int isSafe(int row, int col) {
//     int i, j;
//     // check left row
//     for (i = 0; i < col; i++)
//         if (board[row][i]) return 0;

//     // check upper-left diagonal
//     for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
//         if (board[i][j]) return 0;

//     // check lower-left diagonal
//     for (i = row, j = col; i < N && j >= 0; i++, j--)
//         if (board[i][j]) return 0;

//     return 1;
// }

// void solveNQ(int col) {
//     int row;
//     if (col == N) {
//         printBoard();
//         return;
//     }

//     for (row = 0; row < N; row++) {
//         if (isSafe(row, col)) {
//             board[row][col] = 1;
//             solveNQ(col + 1);
//             board[row][col] = 0; // backtrack
//         }
//     }
// }

// int  main() {
//     //clrscr();
//     solveNQ(0);
//    // if (!found)
//      //   printf("No solution exists for N = %d\n", N);
//     //getch();
// }


////////////////// ??????????  MERGE SORT ???????????????////////////////////
// #include <stdio.h>

// void merge(int a[], int l, int m, int h) {
//     int i = l, j = m + 1, k = 0, r[10];
//     while (i <= m && j <= h)
//     if(a[i]<=a[j])
//     r[k++]=a[i++];
//     else
//     r[k++]=a[j++];
       
//     while (i <= m) 
//     r[k++] = a[i++];
//     while (j <= h) 
//     r[k++] = a[j++];
//     for (i = l, k = 0; i <= h; i++, k++) 
//     a[i] = r[k];
// }

// void mergesort(int a[], int l, int h) {
//     if (l < h) {
//         int m = (l + h) / 2;
//         mergesort(a, l, m);
//         mergesort(a, m + 1, h);
//         merge(a, l, m, h);
//     }
// }

// int main() {
//     int a[] = {38, 12, 7, 45, 23, 9, 18};
//     int n = 7;
//     mergesort(a, 0, n - 1);
//     for (int i = 0; i < n; i++) 
//     printf("%d ", a[i]);
//     return 0;
// }

//////????????/////prims////???///???///???//
#include <stdio.h>

void prims(int n, int cost[10][10]) {
    int visited[10] = {1}, minCost = 0;

    for (int edges = 1; edges < n; edges++) {
        int min = 999, u = 0, v = 0;
        for (int i = 0; i < n; i++) {
            if (visited[i]) {
                for (int j = 0; j < n; j++) {
                    if (!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        u = i; v = j;
                    }
                }
            }
        }
        visited[v] = 1;
        minCost += min;
    }
    printf("Min cost = %d\n", minCost);
}

int main() {
    int n = 3, cost[10][10] = {
        {999, 5, 10},
        {5, 999, 5},
        {10, 5, 999}
    };
    prims(n, cost);
    return 0;
}
