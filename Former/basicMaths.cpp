#include<iostream>
#include<vector>
using namespace std;


/*  
    PRIME NUMBERS - ARE THOSE NUMBERS WHICH ARE DIVISIBLE BY EXACTLY TWO FACTORS
    - ONE IS ITSELF, OTHER IS 1;

    * SMALLEST OR THE ONLY EVEN PRIME NUMBER IS 2.

    DIFFERENT APPROACHES ARE THERE TO FIND THE PRIME NUMBERS

*/



/* 
// PROGRAM TO FIND A NUMBER IS PRIME OR NOT.
int main(){
    int n;
    cin >> n;
    bool flag = 1;
    for (int i=2; i<n; i++){
        if (n%i==0) {
            flag = 0;
            break;
        }
    }
    if (flag) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;
} */

/* // leetcode - 203(count primes but here i am printing it too) naive approach T.C. - O(n^2);
int main(){
    int n, count = 0;
    cin >> n;
    for (int i=0; i<n; i++){
        bool flag = 1;
        for (int j=2; j<i; j++){
            if (i%j==0 || i<=1) {
                flag = 0;
                break;
            }
        }
        if (i>1 && flag){
            count++;
            cout << i << " ";
        } 
    }
    cout << endl;
    cout << "Count = " << count << endl;
} */


// 1. NAIVE APPROACH with functions
/* bool isPrime(int n){                //TC = O(n) (for isPrime function)   [O(n^2)]
    if (n<=1) return false;
    for (int i=2; i<n; i++){
        if (n%i==0) return false;
    }
    return true;
} */

/* bool isPrime(int n){                //TC = O(sqrt(n)) (for isPrime function)    [O(n*sqrt(n))]
    if (n<=1) return false;
    for (int i=2; i*i<=n; i++){
        if (n%i==0) return false;
    }
    return true;
} */

/* int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        if (isPrime(i)) {
            count++;
        }
    }
    cout << count;
} */

// SIEVE OF ERATOSTHENES (USED WHEN WE HAVE TO FIND THE COUNT NUMBERS BETWEEN 1 TO N)
/* int countPrime(int n){
    vector<bool> prime(n, true);
    prime[0] = false;
    prime[1] = false;
    int count = 0;
    for (int i=2; i<n; i++){
        if (prime[i]) {
            count++;
            int j=2*i;
            while (j<n){
                prime[j] = false;
                j+=i;
            }
        }
    }
    return count;
} */


// SEGMENTED SIEVE (RANGE FUNCTIONS OF SIEVE OF ERATOSTHENES)


/* int main(){
    int n;
    cin >> n;
    cout << countPrime(n);
} */

/*  // GCD /HCF 
    1. Euclid's Algorithm to find GCD
        - gcd(a, b) = gcd(a - b, b) OR gcd(a % b, b)
    2. LCM(a, b) * gcd(a, b) = a * b
*/

/* int gcd(int a, int b){
    if (a==0) return b;
    if (b==0) return a;

    while (a > 0 && b > 0){
        if (a > b) {
            a = a-b;
        }
        else b = b-a;
    }
    return a == 0 ? b : a;
}


int main(){
    int a, b;
    cin >> a >> b;
    int gcdAns = gcd(a, b);
    cout << "GCD = " << gcdAns << endl;
    int lcm = a*b/gcdAns;
    cout << "LCM = " << lcm << endl;
} */