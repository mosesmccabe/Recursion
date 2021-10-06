#include <iostream>
using namespace std;


bool fib(int A[], int size)
{
    static int n = 0;
    if(n >= size)
    {
        return true;
    }
    if(A[n] == A[size-1])
    {
        n++;
        return fib(A,size-1);
    }
    return false;
}

int main()
{
    const int MAX = 5;
    int arr[MAX] = {1,2,3,2,1};
    
    if(fib(arr,MAX))
        cout << "Check Out\n";
    else
        cout << "Didnt Check Out\n";
    return 0;
}
