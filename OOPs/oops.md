# C++ Classes and Objects

## C++ Classes

### When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

#### Data Members: These are the variables that are defined inside the class.
#### Member Functions: Functions declared inside a class. Also referred to as a member method.

    class GfG {
    public:

        // Data member
        int val;
        
        // Member function
        void show() {
            cout << "Value: " << val << endl;
        }
    };


##### In the above, GfG class is created with a data member val and member function show(). Here, member function is defined inside the class, but they can also be just declared in the class and then defined outside using scope resolution operator ::



## C++ Objects

##### When a class is defined, only the specification (attributes and behaviour) for the object is defined. No memory is allocated to the class definition. To use the data and access functions defined in the class, we need to create its objects.


#### Once the class is defined, we can create its object in the same way we declare the variables of any other inbuilt data type.
#### className objectName;


### Member Access
#### Members of the class can be accessed inside the class itself simply by using their assigned name.

#### To access them outside, the (.) dot operator is used with the object of the class.


obj.member1 // For data members
obj.member2(..) // For functions
#### There obj is the name of the object of the given class, member1 is data member and member2 is member function.