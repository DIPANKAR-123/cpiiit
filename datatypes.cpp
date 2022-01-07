#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int x;
    long y;
    char z;
    float f;
    double g;
    
    scanf("%d%ld%c%f%lf",&x,&y,&z,&f,&g);
    printf("%d\n%ld\n%c\n%f\n%lf\n",x,y,z,f,g);
    return 0;
}