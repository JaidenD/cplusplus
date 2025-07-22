#include  <iostream>
using namespace std;

// Union
enum Type {ptr,num};

union Value {
    Node* p;
    int i;
}

struct Entry {
    string name;
    Type t;
    variant<Node*,int> v;
};

void f(Entry* pe)
{
    if(holds_alternative<int>(pe->v))
        cout<<get<int>(pe->v)
    //else
    //    cout<<pe->v.p;
}


int main(){

}
