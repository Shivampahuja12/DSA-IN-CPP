/* 
***  TIME COMPLEXITY  ***.
NOT the actual time taken but amount of time taken as function of input size (n).
-> ek code mein kitne operations perform hote haii as a function of input size.
THERE ARE THREE TYPES OF NOTATIONS IN THE TIME COMPLEXITY.
1. BIG-O  --  O(_);     it is consider for worst case  (mostly used).
2. OMEGA (Ω) --  Ω(_);  it is consider for best case.
3. THETA (Θ)  --  Θ(_);   it is consider for average case.
e.g. for (int i=0; i<n; i++){
    // if n = 10;
}
    in worst case this loop will run 10 times.
    therefore, the time complexity of this code will be O(10).

    TIME COMPLEXITY (TC)
    there are some rules to find the overall time complexity of a code that are:
    1. ignore constants. 
    2. consider only larger term. 


    1. BIG-O  --  O(_);
    f(n) = 4n^2 + 5n + 1
    this is a function of n,
    if n = 10^5, then n^2 = 10^10, and 1 as it is.
    as the first rule says ignore constants, so 4, 5 will be ignored. 
    the second rule says only consider larger term;
    therefore the time complexity of this function is O(n^2);


    int fact = 1;
    for (int i=1; i<=n; i++){
        fact *= i;
    }

    here in this code, fact is a constant (k) operation.
    and the loop runs for n times and will do n times the k operations.
    therefore the time complexity of this code will be O(n*k);
    but as we have to ignore the constants and k is also a constant,
    so the final T.C. will be -> O(n);

    COMMON TIME COMPLEXITIES ARE:
    Notation	Name	Description (for large n)
    O(1)	Constant	Fastest: same time regardless of input size
    O(log n)	Logarithmic	Input size doubles, steps increase slowly
    O(n)	Linear	Time grows directly with input size
    O(n log n)	Linearithmic	Efficient for sorting (like Merge Sort)
    O(n²)	Quadratic	Nested loops — gets slow with big n
    O(2ⁿ)	Exponential	Bruteforce algorithms (very inefficient)
    O(n!)	Factorial	Very slow — permutations, etc.

*/


/* 
    ***  SPACE COMPLEXITY  ***

    SC
    Amount of space taken by an algorithm as function of input size (n).

    In the code we use two types of spaces 
    1. input space -> eg. array input etc.
    2. auxiliary space -> eg. doing extra operations using loops.


    COMMON SPACE COMPLEXITIES ARE: 

    Space Complexity	Typical Use Case
    O(1)	In-place algorithms (e.g., swap)
    O(log n)	Recursive binary search (stack space)
    O(n)	Storing input, dynamic programming
    O(n²)	Matrix or nested data structures. 


*/