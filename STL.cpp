#include<iostream> // necessary for input/output functions
#include<vector> // necessary for using a vector in cpp
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std; // if we don't want to write this then, instead cout we have to write std::cout and so on. 


/* 
    The C++ Standard Template Library (STL) is a powerful set of C++ template classes to provide common data structures and algorithms.

    STL has four major components:

    Component	Description
    Containers	Store data (like arrays, lists, stacks, etc.)
    Algorithms	Procedures like sort, search, count, reverse
    Iterators	Objects that point to elements of a container
    Functors	Function objects used for custom operations


*/



/*  1st container is vector
    Q. What is a vector?
    -> A vector is a dynamic array in C++. Unlike arrays with a fixed size, vectors can grow and shrink automatically as elements are added or removed.

    similar to array but arrays are static and vectors are dynamic.

    
    
    ***   VECTOR DECLARATION AND INITIALISATION.  ***
    vector<int> v;  this is used when we have to declare an empty vector only;
    vector<int> v = {1,2};  this is used when we want that the vector contains elements.
    vector<int> v(5);       in this type, a vector of size 5 is declared and all the elements in the vector are initialized with 0;
    vector<int> v(3, 10);   in this, an vector is initialized with size 3 and at each element 10 is placed.
    vector<int> v2(v1);     this is a way to copy one vector into another.
    


    ***   WORKING OF SIZE OF THE VECTOR   ***
    EG. vector<int> v;
    IF AN EMPTY VECTOR IS DECLARED THEN THE SIZE AND CAPACITY OF THE VECTOR IS ZERO. 
    ON PUTTING THE ELEMENTS IN THE VECTOR THE CAPACITY AND SIZE OF THE VECTOR INCREASES DYNAMICALLY.
    FIRSTLY THE CAPACITY IS 0, AFTER PUTTING ONE ELEMENT THE CAPACITY INCREASE TO 1 (size is how many elements are there in the vector and capacity is how many element can be there in the vector), NOW THE SIZE AND CAPACITY BOTH ARE 1 AND 1. NOW AFTER PUTTING THE ELEMENT IN THE VECTOR THE CAPACITY WILL INCREASE TO THE DOUBLE OF THE LAST CAPACITY. EG [0, 1, 2, 4, 8, 16, 32, and so on]. 

    EG. vector<int> v(3, 10);
    IN THIS THE SIZE OF THE VECTOR IS INITIALLY INITIALISED TO 3 THEREFORE THE CAPACITY AND SIZE OF THE VECTOR WILL BE 3 AND 3 (and all the elements have the value 10). NOW ON PUSHING BACK ELEMENT IN THE VECTOR THE SIZE WILL BE 4 AND CAPACITY WILL BE DOUBLE OF THE PREVIOUS CAPACITY WHICH IS 3 AND WILL BE 6.  

    */
   
   
/* 
    BASIC OPERATIONS ON VECTORS
    push_back(_);   appends an element at the end of the vector.
    emplace_back(_);     as same as push_back()
    pop_back();     remove an element from the end of the vector.
    at(index) or v[index]    is used to access elements of the array.
    erase() Function is used to remove elements from a vector It is a member function of the std::vector class.
    front() and back() function gives the first and last elements of the vector.
    insert() function allows you to insert elements into a vector at any position. It shifts existing elements to the right to make room.
    erase() 
    clear() function clears all the elements of the vector
    empty() tells us that the vector is empty or not(if empty then returns 1(true) else return 0(false))
   
*/
  


/*  // SIZE, CAPACITY, AT ,FRONT, BACK, PUSH_BACK, POP_BACK FUNCTIONS
int main(){

    // vector creation
      
    // vector<int> v;
    // cout << sizeof(v)/sizeof(int) << endl;
    // cout << "Size = " << v.size() << endl;
    // cout << "Capacity = " << v.capacity() << endl;
    // v.push_back(12);
    // cout << "Size = " << v.size() << endl;
    // cout << "Capacity = " << v.capacity() << endl;
    // v.push_back(30);
    // cout << "Size = " << v.size() << endl;
    // cout << "Capacity = " << v.capacity() << endl;
    // v.push_back(3);
    // cout << "Size = " << v.size() << endl;
    // cout << "Capacity = " << v.capacity() << endl;
    // v.push_back(3);
    // cout << "Size = " << v.size() << endl;
    // cout << "Capacity = " << v.capacity() << endl;
    // v.push_back(3);
    // cout << "Size = " << v.size() << endl;
    // cout << "Capacity = " << v.capacity() << endl;
    

    vector<int> vec = {1,2,3,4,5};
    cout << "Size = " << vec.size() << endl;
    cout << "Capacity = " << vec.capacity() << endl;
    vec.push_back(12);
    cout << "Size = " << vec.size() << endl;
    cout << "Capacity = " << vec.capacity() << endl;
    vec.push_back(12);
    cout << "Size = " << vec.size() << endl;
    cout << "Capacity = " << vec.capacity() << endl;
    vec.push_back(12);
    cout << "Size = " << vec.size() << endl;
    cout << "Capacity = " << vec.capacity() << endl;
    vec.push_back(12);
    cout << "Size = " << vec.size() << endl;
    cout << "Capacity = " << vec.capacity() << endl;
    vec.push_back(12);
    cout << "Size = " << vec.size() << endl;
    cout << "Capacity = " << vec.capacity() << endl;
    vec.push_back(12);
    cout << "Size = " << vec.size() << endl;
    cout << "Capacity = " << vec.capacity() << endl;
    // cout << "Value at idx 2: " << vec.at(2) << " or " << vec[2] << endl; 
} */


/* 

    // ERASE FUNCTION
    // The erase() function in C++ is used to remove elements from a vector. It is a member function of the std::vector class.

    // Remove one element at position
    vector.erase(iterator position);

    // Remove a range of elements
    vector.erase(iterator start, iterator end);
    in this start is included but end is not included (is excluded)

    erase() and clear() functions decrease the size but capacity doesn't change. 

*/

/* 
int main(){
    vector<int> v = {1,2,3,4,5};
    // v.erase(v.begin()+2);  // here, 3 is erased as in the beginning of the vector is 1, after adding 2 in the beginning it comes to 3(2nd index).
    // v.erase(v.begin() + 2, v.begin() + 4); // here we are erasing the elements in the range, eg. [ v.begin() + 2 is 3 which is included to v.begin() + 4 which is excluded so it will go to the index previous to it.

    for (int val : v){
        cout << val << " ";
    }
} */



/* // INSERT FUNCTION
// The insert() function allows you to insert elements into a vector at any position. It shifts existing elements to the right to make room.
// // Insert a single element
// vec.insert(iterator pos, value);

// Insert multiple copies of an element
// vec.insert(iterator pos, count, value);

// Insert a range of elements
// vec.insert(iterator pos, first, last);


int main(){
    vector<int> v = {1,2,3,4,5};
    v.insert(v.begin()+2, 100);
    for (int i: v){
        cout << i << " ";
    }
} */



/* // CLEAR and EMPTY FUNCTION
// CLEAR FUNCTION CLEARS ALL THE ELEMENTS OF THE VECTOR AND THE SIZE BECOMES 0, BUT THE CAPACITY OF THE VECTOR WILL BE THE SAME WHICH IT HAD AT THE TIME OF CLEAR 
int main(){
    vector<int> v = {1,2,3,4,5};
    v.push_back(6);
    v.clear();
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.empty() << endl;
} */








/* // VECTOR ITERATOR.
    Iterators in C++ work like pointers. They are used to access and traverse elements in STL containers like vector, set, map, etc.
    For a vector, an iterator behaves like a pointer to its elements.

    1. v.begin()    points to the first element in the vector. 
    2. v.end()      points to the next position of the last element. 
    3. v.rbegin()
    4. v.rend() 


*/
/* int main(){
    vector<int> v = {1,2,3,4,5};
    // cout << "v.begin(): " << *(v.begin())<< endl;
    // cout << "v.rbegin(): " << *(v.rbegin())<< endl;
    // cout << "v.end(): " << *(v.end()) << endl; // points to the element next to 5. (which is 0 or any garbage value);
    // cout << "v.rend(): " << *(v.end()) << endl; 


    // FORWARD ITERATOR
    // vector<int>::iterator i;
    // for (i=v.begin(); i!=v.end(); i++){
    //     cout << *(i) << " ";
    // }

    // for (auto i=v.begin(); i!=v.end(); i++){
    //     cout << *(i) << " ";
    // }


    // REVERSE ITERATOR
    // vector<int>::reverse_iterator i;
    // for (i=v.rbegin(); i!=v.rend(); i++){
    //     cout << *(i) << " ";
    // }
    
    // vector<int>::reverse_iterator i;
    // for (vector<int>::reverse_iterator i = v.rbegin(); i!=v.rend(); i++){
    //     cout << *(i) << " ";
    // }
     
    // for (auto i=v.rbegin(); i!=v.rend(); i++){
    //     cout << *(i) << " ";
    // }

} */



/* 

    ***  LIST CONTAINER: DOUBLY LINKED LIST ***
    NOW THE LIST CONTAINER WHICH REQUIRES INCLUDING HEADER FILE 
    IN LIST WE CANT ACCESS THE ELEMENTS USING THE INDEX LIKE
    l[2] IS NOT AN INVALID OPERATION FOR LISTS
    LIST ARE INTERNALLY DOUBLY LINKED LIST
    it includes all the functions same as vectors like
    push_back
    emplave_back
    pop_back
    end
    rend
    begin
    rbegin
    front 
    back
    clear
    empty
    but additionally it includes functions like push_front, emplace_front, pop_front. 
*/

/* #include<list>  
int main(){
    // list<int> li = {1,2,3,4,5};
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    
    // cout << l[2] << endl;   // invalid action in lists
    for (int i: l){
        cout << i << " ";
    }
} */



/* 
    ***  DEQUE: DOUBLY ENDED QUEUE  ***
    DEQUE ARE INTERNALLY WORKS AS VECTORS
    AS VECTORS MEANS WE CAN ACCESS THE ELEMENTS OF THE
    DEQUE WITH INDEX EG. D[3] THIS IS VALID FOR DEQUE 
    AND INVALID FOR LISTS.
    all operations are same operations as list
    push_back
    emplave_back
    pop_back
    end
    rend
    begin
    rbegin
    front 
    back
    clear
    empty
    but additionally it includes functions like push_front, emplace_front, pop_front.

*/
/* #include<deque>
int main(){
    // deque<int> d = {1,2,3};
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);

    // cout << d[2] << endl;   // valid action in deque.
    for (int i: d){
        cout << i << " ";
    }
} */




/*  WE HAVE DONE 3 SEQUENCE CONTAINERS(which stores data in a sequential manner) TILL NOW.
    1. vectors
    2. lists
    3. deque
*/


// NON SEQUENTIAL CONTAINERS.


/* 
    PAIR - UTILITY LIBRARY PART
    IF WE WANT TO MAKE A GROUP OF TWO VALUES (PAIR) 
    THEN WE USE PAIR.
    THERE IS NO NEED TO INCLUDE ANY LIBRARY FOR PAIR
    WE CAN MAKE PAIR OF PAIRS
    WE CAN ALSO MAKE VECTOR OF PAIRS. 
*/

/* int main(){
    pair<int, int> p = {1,2};
    pair<int, string> l = {12, "Shivam"};
    pair<int, pair<int, int>> m = {19, {12, 30}};
    pair<int, pair<int, pair<int, int>>> s = {19, {20, {21, 22}}};

    vector<pair<int, int>> v = {{1,2}, {3,4}, {5,6}};
    v.push_back({7, 8});    //  if we want to inser a pair in the vector we use push back function or 
    v.emplace_back(7,8);    // we can use emplace back

    // push back inserts a pair in the vector 
    // emplace back creates in-place objects and is faster than push back

    for (pair<int, int> val : v){
        cout << val.first << " " << val.second << endl;
    }


    // cout << m.first << endl;
    // cout << m.second.first << endl;
    // cout << m.second.second << endl;
    
    // cout << s.first << endl;
    // cout << s.second.first << endl;
    // cout << s.second.second.second << endl;
} */



/* 
    STACK - LIFO (LAST IN FIRST OUT DATA STRUCTURE)
    necessary to include stack header file
    stack includes functions like -> 
    • push, emplace     O(1)    pushes the element in the stack 
    • top      O(1)     tells us the topmost element of the stack
    • pop      O(1)       removes element from the stack
    • size              tells the size(how many elements are there ) of the stack
    • empty             tells that the stack is empty or not
    • swap              it used to swap all the elements of one stack to another 
*/

/* int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(12);
    s.push(21);
    s.push(30);
    s.push(40);
    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;
    // s.pop();

    // while (!s.empty()){         // this loop is used to print all the stack elements. 
    //     cout << s.top() << " ";
    //     s.pop();    
    // }

    stack<int> s2;
    cout << "Is empty: " << s.empty() << endl;
    s2.swap(s);  // it used to swap all the elements of one stack to another 
    cout << "Size of s: " << s.size() << endl;
    cout << "Size of s2: " << s2.size() << endl;
}*/ 


/*  
    QUEUE - FIFO DATA STRUCTURE 
    FIFO - FIRST IN FIRST OUT
    necessary to include header file <queue>
    IN QUEUE THE INSERTION IS FROM THE BACK 
    AND REMOVE IS FROM THE FRONT SIDE AS IT SAYS
            *** FIRST IN FIRST OUT ***

    IT HAS SAME FUNCTIONS LIKE STACK

    • push, emplace  O(1)   pushes the element in the QUEUE 
    • front      O(1)       tells us the frontmost element of the QUEUE
    • pop        O(1)       removes element from the QUEUE
    • size              tells the size(how many elements are there) of the QUEUE
    • empty             tells that the QUEUE is empty or not
    • swap              it used to swap all the elements of one QUEUE to another
*/
/* int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
} */




/* 
    PRIORITY QUEUE - WHICH IS BASED ON 
    1. MAXHEAP  }       BOTH OF THESE MAKES UP A COMPLETE BINARY TREE (CBT)
    2. MINHEAP  } 
    SO IN SHORT PRIORITY QUEUE WORKS ON THE PRINCIPLE OF BINARY TREE.


    WE VISUALIZE THE PRIORITY QUEUE AS A STACK
    IN THIS THE HIGHEST PRIORITY ELEMENT IS ON THE TOP OF THE STACK
    AND BY DEFAULT THE HIGHEST PRIORITY ELEMENT IS THAT ELEMENT WHICH HAS THE LARGEST VALUE

    IN PRIORITY QUEUE ALL THE ELEMENTS ARE PLACED IN THE SORTED FASHION WHETHER IT IS ISCREASING OR DECREASING
    BY DEFAULT IT IS IN DECREASING FASHION WE CAN CHANGE IT IN INCREASING FASHION BY
    priority_queue<int, vector<int>, greater<int>> pq;

    FUNCTIONS OF PRIORITY QUEUE ARE SAME AS STACK AND THEIR TCs ARE:
    • push, emplace    O(logn)      
    • top              O(1)
    • pop              O(logn)
    • size              
    • empty             

*/
/* int main(){
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;  // where greater is a functor
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
} */



/* 
    MAP - (KEY, VALUE) PAIRS
    KEY - WILL ALWAYS BE UNIQUE
    VALUE - CAN BE SAME

    necessary to include map header file
    internally map is implemented as a self balancing tree. 
    map <string, int> m;   // In the first space we have to specify the type of key and in the second the type of value

    to insert values in the map this syntax is used. 
    m[key] = value;

    the output of the following key pair will be the in the sorted in ascending fashion of the keys lexographically(ascii values)

    it includes functions like
    • insert[O(logn)], emplace
    • count[O(logn)]     function returns the number of keys in of that type in the map
    • find      functions finds the key in the map which returns the iterator
    • size, empty, erase[O(logn)]
*/

/* int main(){
    map<string, int> m;
    m["tv"] = 50;
    m["refrigerator"] = 200;
    m["laptop"] = 100;  
    m["bag"] = 50;
    m["shampoo"] = 10;
    // m.insert({"watch", 500});
    m.emplace("watch", 500);

    cout << m.count("bag") << endl;

    m.erase("shampoo");

    cout << m["bag"] << endl;   // returns the value of the key
    for (auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    if (m.find("key") != m.end()){
        cout << "Found";
    }
    else {
        cout << "not found";
    }
} */


/* 
    OTHER TYPES OF MAP:
    1. MULTIMAP
    2. UNORDERED MAP

    IN MULTIMAP, THERE CAN BE MULTIPLE KEYS (THAT IS THE MAIN DIFFERENCE) BUT WE CAN'T INSERT IN MULTIMAP USING (M[])X WRONG
    WE CAN INSERT KEYS WITH INSERT FUNCTION AND ALL THE FUNCTIONS ARE SAME AS MAP

*/
/* int main(){
    multimap<string, int> m;
    // m["tv"] = 50;
    // m["refrigerator"] = 200;             // these operations are wrong for multimap
    // m["laptop"] = 100;  
    // m["bag"] = 50;
    // m["shampoo"] = 10;
    m.insert({"watch", 500});
    m.emplace("watch", 500);
    m.insert({"watch", 500});
    m.emplace("watch", 500);
    m.insert({"watch", 500});
    m.emplace("watch", 500);
    
    // m.erase("watch");   // this will clears all the matches to this key(watch);
    // m.erase(m.find("watch"));   //(by passing an iterator) this will clear only that key which m.find function find and return


    for (auto i : m){
        cout << i.first << " " << i.second << endl;
    }
} */



/* 
    ***  UNORDERED MAP  ***
    NECESSITY TO INCLUDE HEADER FILE (UNORDERED MAP)
    IN UNORDERED MAP THERE CAN NOT BE DUPLICATE VALUES.
    // FREQUENTLY USED MAP

    • insert[O(1)], emplace
    • count[O(1)]     function returns the number of keys in of that type in the map
    • find      functions finds the key in the map which returns the iterator
    • size, empty, erase[O(1)]

    rarely the TC will be O(n) but usually it'll be [O(1)]

*/

/* int main(){
    unordered_map<string, int>um;
    um.insert({"watch", 500});
    um.emplace("laptop", 100);
    um.insert({"mobile", 1000});
    um.emplace("tv", 200);
    

    for (auto i : um){
        cout << i.first << " " << i.second << endl;
    }
} */



/* 
    ***  SET CONTAINER  ***
    IN WHICH THERE WILL ALWAYS BE UNIQUE VALUES
    WHICH ARE ARRANGE IN A PARTICULAR SORTED ORDER

    NECESSARY TO INCLUDE SET HEADER FILE

    OUTPUT ORDER IN THE SET IS SORTED. 

    it includes functions like
    • insert[O(logn)], emplace
    • count[O(logn)]     function returns the number of keys in of that type in the map
    • find      functions finds the key in the map which returns the iterator
    • size, empty, erase[O(logn)]
    • lowerbound [should not be less than that key]   (RETURNS AN ITERATOR - SO WE HAVE TO DEREFERENCE IT) sets a bound in which if the passed value in lowerbound is present in the set then it return that value but if not then it'll return the next closest value possible. 
    and if there is no matching value or any greater value then it will return the iterator s.end()
    
    • upperbound [greater than key]   (RETURNS AN ITERATOR - SO WE HAVE TO DEREFERENCE IT) sets a bound in which if the passed value in upperbound is present in the set then it return that value but if not then it'll return the previous closest value possible. 
*/

/* int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(5);

    cout << "Lower bound: " << *(s.lower_bound(6)) << endl;
    cout << "upper bound: " << *(s.upper_bound(5)) << endl;

    for (auto i: s){
        cout << i << " ";
    }
} */


/* 
    OTHER SETS
    1. MULTI SETS - includes duplicate elements or all the elements are arranged in ascending sorted order.
        • insert[O(logn)], emplace
        • count[O(logn)]     function returns the number of keys in of that type in the map
        • find      functions finds the key in the map which returns the iterator
        • size, empty, erase[O(logn)]


    2. UNORDERED SETS - not lower and upper bound exists
        • insert[O(1)], emplace
        • count[O(1)]     function returns the number of keys in of that type in the map
        • find      functions finds the key in the map which returns the iterator
        • size, empty, erase[O(1)]

    LOWER BOUND AND UPPER BOUND CAN BE CALCULATED WHEN THE ELEMENTS ARE SORTED IN ACSENDING OR DESCENDING ORDER.


*/

/* int main(){
    multiset<int> s; 
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(5);

    for (auto i: s){
        cout << i << " ";
    }
} */

/* int main(){
    unordered_set<int> s; 
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(5);


    for (auto i: s){
        cout << i << " ";
    }
} */




/* 
    ***  ALGORITHMS  ***
    sort (arr, arr+n)
    sort(arr, arr+n, greater<int>())            // HERE GREATER IS A COMPARATOR
    sort(v.begin(), v,end())


    swap, min, max 

    • Max & Min Element
        max_element(v.begin(), v.end())
        min_element(v.begin(), v.end())

    • Binary Search
        binary_search(v.begin(), v.end(), target)

    • Count Set Bits
        __builtin_popcount( )
        __builtin_popcountl( )
        __builtin_popcountll( )

    COMPARATORS ARE FUNCTORS WHICH ARE USED TO COMPARE THE VALUES WITHIN THE ALGO.
*/

/* int main(){
    // int a[] = {1,8,5,3,0,12,4,2};
    // int n = sizeof(a)/sizeof(int);
    // sort(a, a+n);        // a+n points to the memory space after the last index of the array, this is sorting algo of arrays
                            // a+n-1 points to the last element of the array

    // vector<int> v = {1,8,5,3,0,12,4,2};
    // sort(v.begin(), v.end());   // this is sorting algorithm of vectors (BY DEFAULT ASCENDING)
    // sort(v.begin(), v.end(), greater<int>());  // this is sorting algorithm of vectors (DESCENDING) passing a comparator (greater)

    vector<pair<int, int>> v = {{10,3}, {2,6}, {9,1}, {5,2}};
    sort(v.begin(), v.end());
    for (auto i: v){
        cout << i.first << " " << i.second << endl;
    }
} */


/* 
***  COMPARATORS ARE NOTHING OTHER THAN BOOLEAN FUNCTIONS WORKS BASED ON THE COMPARISION BETWEEN THE FUNCTIONS  *** 
*/

/* bool comparator(pair<int, int> p1, pair<int, int> p2){      // custom comparator
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;    
    else return false;
}
int main(){
    vector<pair<int, int>> v = {{10,3}, {2,6}, {9,1}, {5,2}, {9,2}, {1,2}, {1,3}};
    // sort(v.begin(), v.end());        // sort pair based on their first value
    sort(v.begin(), v.end(), comparator);       // sort pair based on their second value
    for (auto i: v){
        cout << i.first << " " << i.second << endl;
    }
    } */
   
   
/* int main(){
    // vector<int> v = {1,2,3,4,5};
    // reverse(v.begin(), v.end());    // to reverse the whole vector
    // reverse(v.begin()+1, v.end()-1);    // to reverse vector in a specific range

    string s = "abc";
    string m = "bca";
    next_permutation(s.begin(), s.end());
    cout << s << endl;
    prev_permutation(m.begin(), m.end());
    cout << m << endl;
} */




//      ***     COMPLETED     ***