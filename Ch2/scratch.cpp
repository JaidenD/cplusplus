#include  <iostream>
using namespace std;


// 2.2

// Vector structure
struct Vector {
    int sz;         // Number of elements
    double* elem;   // Point to elements
};

void vector_init(Vector& v, int s)
{
    v.elem = new double[s]; //  new allocates memory in the heap -- rather than the stack
    v.sz = s;
}

double read_and_sum(int s)
{
    Vector v;
    vector_init(v, s);

    for (int i=0;i!=s;++i)
        cin>>v.elem[i];
    double sum = 0;
    for(int i=0; i!=s;++i)
        sum+=v.elem[i];
    return sum;
        
}

int main()
{
    int sum = read_and_sum(10);
    
    cout<<sum;
}




