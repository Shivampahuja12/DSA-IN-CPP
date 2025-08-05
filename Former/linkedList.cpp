/* 
    IN ARRAYS THERE IS A WASTE OF MEMORY AS ARRAY REQUIRES CONTIGUOUS MEMORY ALLOCATION. 
    SO IF THERE IS 5 MB BLOCK FREE IN THE MEMORY BUT WE WANT TO CREATE AN ARRAY OF SIZE 6 MB THEN WE CAN'T DO THIS ACTION BECAUSE OF THE DISADVANTAGE OF ARRAYS OF CONTIGUOUS MEMORY ALLOCATION.

    ON INSERTING OR SHIFTING ELEMENTS IN THE ARRAY OR VECTORS WE HAVE TO SHIFT ALL THE ELEMENTS IN THE WORST CASE SO ON SHIFTING OR INSERTING THE ELEMENTS THE TC. IS O(n) 

    THE MAIN THING IN LINKED LIST THE ELEMENTS IN THE LINKED LIST THE ELEMENTS ARE ALLOCATED IN A NON-CONTIGUOUS MANNER. 
    THE NODES IN THE LINKED LISTS STORES THE ADDRESS OF THE OTHER NODE TO WHICH IT IS CONNECTED
    THE NODES ARE ALLOCATED ANYWHERE IN THE MEMORY
    WE ALSO DONT HAVE TO PREALLOCATE MEMORY OF THE ITEMS IN THE LINKED LIST

    *** WHAT IS THE USE CASE OF LINKED LIST IN OPERATING SYSTEM (STORAGE MANAGEMENT SYSTEM) ?
    Use Case	                    Why Linked List?
    Free Space Management	        Efficient dynamic insert/delete
    Dynamic Memory Allocation       Flexible tracking of variable-sized blocks
    Process Control Blocks (PCBs)	Easy process addition/removal
    I/O Scheduling Queues	        FIFO-like structures for waiting processes
    Page Management	                Dynamic memory page tracking
    File Allocation (Linked)	    Store non-contiguous file blocks
    Kernel Data Structures	        Internal flexible data structures

    ******   LINKED LIST   ******
    - SUPPORTS NON CONTIGUOUS MEMORY ALLOCATION ALSO WORKS WITH CONTIGUOUS MEMORY ALLOCATION
    - COLLECTION OF NODES
    NODE - node consists of two parts, first contains data, second parts contains address and it will be of pointer type
    
    VISUAL REPRESENTATION OF A NODE: 
    +------------+---------------+
    |   DATA     |   NEXT PTR    |
    +------------+---------------+
        |              |
        |              v
        10         Address of next node (e.g., 0x100)



    Or in a simplified ASCII diagram for the whole list:
    +-------+    +-------+    +-------+    +-------+
    |  10   | -> |  20   | -> |  30   | -> | NULL  |
    +-------+    +-------+    +-------+    +-------+


    THERE IS NO ANY CONCEPT OF INDEX IN LINKED LIST
    LINKED LIST FOLLOWS THE CONCEPT OF ADDRESS
    ***     LINKED LIST IS HINDI    ***


    CORNER TEST CASE HAMESHA DEKHNAA

*/