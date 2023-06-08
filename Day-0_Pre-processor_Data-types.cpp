#include <iostream>
//using namespace std;

namespace oxford{
    int a = 10;
}

namespace prinston{
    float a = 22.5;
}

int main(){
    std::cout<<oxford::a;
    std::cout<<"\n";
    std::cout<<prinston::a;
    return 0;
}