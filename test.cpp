#include <iostream>
#include <omp.h>
using namespace std;

int main() {
    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        cout << "Hello from thread " << id << endl;
    }
    return 0;
}
