#include "vec3.h"
using namespace std;

//g++ -o vetor *.cpp

int main(){

    using smd::Vec3;
    Vec3 v = Vec3(1.0, 0.5, 0.0);
    Vec3 u = Vec3(0.5 , 0.5, 0.0);
    

    cout << "\n----------OPERADORES----------" << endl;
    cout << v+u << endl;
    cout << v-u << endl;
    cout << v*2 << endl;
    cout << v/2 << endl;

    cout << "\n----------OPERADORES = ----------" << endl;
    cout << (v+=u) << endl;
    cout << (v-=u) << endl;
    cout << (v*=2) << endl;
    cout << (v/=2) << endl;

    cout << "\n---------- OPERADORES FRIEND ----------" << endl;
    cout << v * 2 << endl;
    cout << 2 * v << endl;
    cout << v / 2 << endl;
    cout << 2 / v << endl;

    cout << "\n---------- FUNCOES ----------" << endl;
    cout << v.length() << endl;
    cout << v.dot(u)   << endl;
    cout << v.cross(u) << endl;

	cout << "\n---------- ANGULOS ----------" << endl;
    cout << u.angle(v)  << endl;
    cout << u.angle2(v) << endl;
    cout << u.angle3(v) << endl;


    return 0;
}