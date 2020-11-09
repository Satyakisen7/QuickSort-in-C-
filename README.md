# QuickSort-in-C++

Quicksort uses recursion for sorting the sub-parts.

On the basis of Divide and conquer approach, quicksort algorithm can be explained as:

Divide
The array is divided into subparts taking pivot as the partitioning point. The elements smaller than the pivot are placed to the left of the pivot and the elements greater than the pivot are placed to the right.
Conquer
The left and the right subparts are again partitioned using the by selecting pivot elements for them. This can be achieved by recursively passing the subparts into the algorithm.
Combine
This step does not play a significant role in quicksort. The array is already sorted at the end of the conquer step.




Worst Case Complexity [Big-O]: O(n2)
It occurs when the pivot element picked is either the greatest or the smallest element.
This condition leads to the case in which the pivot element lies in an extreme end of the sorted array. One sub-array is always empty and another sub-array contains n - 1 elements. Thus, quicksort is called only on this sub-array.
However, the quick sort algorithm has better performance for scattered pivots.

Best Case Complexity [Big-omega]: O(n*log n)
It occurs when the pivot element is always the middle element or near to the middle element.
Average Case Complexity [Big-theta]: O(n*log n)
It occurs when the above conditions do not occur.
Space Complexity

The space complexity for quicksort is O(log n).

Quicksort Applications
Quicksort is implemented when

the programming language is good for recursion
time complexity matters
space complexity matters
