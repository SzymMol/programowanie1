#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device r;
    default_random_engine e(r());
    uniform_int_distribution<int> uniform_dist (1,6);
    cout<<uniform_dist(e);
}
