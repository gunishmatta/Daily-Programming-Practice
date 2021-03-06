#include<iostream>
#include<thread>
#include<initializer_list>
using namespace std;

template<typename Type>

void threadFn()
{

    cout << "Type is " << typeid(Type).name() << endl;
}

int main()
{
    int localVal = 120;

    initializer_list<int> il = {10, 20, 30, 50, 70};


    thread t1(threadFn<int>);
    this_thread::sleep_for(chrono::microseconds(2000));
    thread t2(threadFn<float>);

    t1.join();
    t2.join();

    cout << "Value outside thread" << localVal<< endl;
    cout << this_thread::get_id() << endl;
    return 0;
}
