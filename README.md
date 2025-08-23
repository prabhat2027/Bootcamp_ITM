# Bootcamp_ITM
## Day 1: 06/08/2025

Array: 
    use of new keyowrd.
    loops.
    array traversal.

NOTE:
for sorting arr in O(n) complexecity we'll use counting sort.

---
Ques 1) sorting of array.

Ques 2) sec largest element in an array.

Ques 3) missing number in the series.

Ques 4) move zeros.

Ques 5) two sum.

above prob are being solved on leetcode.


## Day 2: 07/08/2025

Topic: Prefix sum.

Ques 6) Reverse an array:


Ques 7) prefix Sum.


Ques 8) leet code ques no:303. 

Solition explanantion of leet code 303: -
<!-- https://leetcode.com/problems/range-sum-query-immutable/solutions/1406465/c-java-python-prefix-sum-clean-concise-o-1-space/ -->


Ques 9) prefix sum (even/odd).


Ques 10) Subarray sum equal to k (leet code 560).


Ques 11) same as ques 2. (plateform: scaler) (2d array) 


## Day 3: 08/08/2025
 
- array list & linked list (difference & adv - disadv).
- Diff bet string & string buffer & string builder
- .= & ==
- overriding of constructor
- desrialiation & serialzation
- transieny keyword
- volatile keyword
- thread safe =?

## Day 4: 11/08/2025

LinkeList: 

Ques 12) Middle element of the linkedlist. 
[Leetcode-876](https://leetcode.com/problems/middle-of-the-linked-list/)
- this can be solved by 2 apporach:
- Traversing linkedlist 1 time to find number of element & then another till half.
- using 2 pointer approach (Fast & slow pointer).


Ques 13) Reverse linkedlist - 
[Leetcode-206](https://leetcode.com/problems/reverse-linked-list/)
- this can be solved by using 3 pointer. (prev, current, next)
    

Ques 14) Detect the cycle in the Linkedlist:
[Leetcode-141](https://leetcode.com/problems/linked-list-cycle/description/)


Ques 15) Detect & find the starting the index from where the loop start:
[Leetcode-142](https://leetcode.com/problems/linked-list-cycle-ii/description/)

- this problem can be solved by using fast & slow pointer & Floyd's cycle finding algo.
- [Floyd's cycle finding](https://www.geeksforgeeks.org/dsa/floyds-cycle-finding-algorithm/)


## Day 5: 12/86/2025

Stack: 
- used for storing function calls.
- follow LIFO(last in first out).
- top(), push(), pop(), peak(), isempty(), 

---
Ques 16) Fibonacci Number: 
[Fibonacci Number](https://leetcode.com/problems/fibonacci-number/description/)


Ques 17) implementing linkedlist using stack

Ques 18) implementing stack using array.
[GFG](https://www.geeksforgeeks.org/problems/implement-stack-using-array/1)

Ques 19) Reverse the String using Stack
[Leetcode](https://leetcode.com/problems/reverse-string/)


## Day 6: 13/08/2025

Ques 20) Rotate array 
[Leetcode 189](https://leetcode.com/problems/rotate-array/description/)


Ques 21) Search insert postion. 
[Leetcode 35](https://leetcode.com/problems/search-insert-position/)


Ques 22) Kth node from end.
[GFG](https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1)

Ques 23) next greater element to right.

Ques 24)
Binary Search: works on divide & conquer technique.
[Leetcode 704](https://leetcode.com/problems/binary-search/description/)

Ques 25) 1st & last postion of target.
[Leetcode 34](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

Ques 26) No: of times target element 

Ques 27) Search in rotated sorted array.
[Leetcode 33](https://leetcode.com/problems/search-in-rotated-sorted-array/description/)


## Day 7: 14/08/2025

Hashing: hashing use array of bucket list to store data, 
    size of hash is depend upon load factor,
    it inculde hash function & collision. 

hashing is a function which provide index of hash table.

collision: since we use hash function to store element in hash table.
    which basically use % works on remender to store elements at that index.

here is a problem if more than 1 elements is having same rememder which store elements at same index..
    so we use linkedlist to store more than 1 element but if element are more at same index, 
 
we use sperate channing: which convert linkedlist into tree: for same index
    so 

---    
NOTE: to handle collsion we use linkedlist & if element are hashing to same index then linkedlist is converted into tree. 

Linear Probing: technoque to handle collision
    if element is already present at a index then, then we do (k+1)%10.

Load factor = no of element in hash table / total index in hash table

---
Ques 28) Sort colors
[Leetcode 75](https://leetcode.com/problems/sort-colors/)


Ques 29) Product of array except self
[Leetcode 238](https://leetcode.com/problems/product-of-array-except-self/description/)


Ques 30) Max Sunarray
[Leetcode 53](https://leetcode.com/problems/maximum-subarray/)


## Day 8: 18/08/2025

Trees : 
- A type of non linear Data Structure.
- BFS traversal / Level Order Traversal
- multi-threading
- unordered Map

~~~cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {2,3,2,4,5,12,2,3,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> val;

    for (int i = 0; i < n; i++) {
        val[arr[i]]++;   
    }

    for (auto pair : val) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
~~~

Ques 31) Count Complete Tree Nodes -
[Leetcode 222](https://leetcode.com/problems/count-complete-tree-nodes/description/)

Ques 32) 

## Day 9: 19/08/2025

Ques 33) Max-Depth of Binary Tree - 
[Leetcode 104](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

Ques 34) Largest value in Each Row - 
[Leetcode 515](https://leetcode.com/problems/find-largest-value-in-each-tree-row/)

Ques 35) same Tree -
[leetCode 100](https://leetcode.com/problems/same-tree/)

Ques 36) Construct Binary Tree From Preorder and Inorder Traversal -
[LeetCode 105](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)

## Day 11 : 21/08/2025

-> Topic: Procedure programming / Object Oriented Programming in Java

1. Inheritance
2. Polymorphism
3. Encapsulation 
4. Method Overiding / overloading
5. Constructors and Destructors

-> java Code practices


## Day 12 : 22/08/2025

-> Topic : Java && SQL

1. Exceptional Handling in Java
2. Microservices / Mono Lithic

-> SQL Basic

1. Primary Key
2. Drop / Truncate
3. Inner Join / Left Join
4. 