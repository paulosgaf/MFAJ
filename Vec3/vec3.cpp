#include "vec3.h"

namespace smd{

    Vec3::Vec3(float vx, float vy, float vz): x(vx), y(vy), z(vz){}


    //FUNCOES

    float Vec3::length() const {
        return sqrt(x*x + y*y + z*z);
    }

    float Vec3::dot(const Vec3& v) const {
        return x*v.x + y*v.y + z*v.z;
    }
	
	Vec3 Vec3::cross(const Vec3& v) const {

        return Vec3(y*v.z - z*v.y,
        			z*v.x - x*v.z, 
        			x*v.y - y*v.x);
    }

    //OPERADORES

    Vec3 Vec3::operator +(const Vec3& v) const {
        return Vec3(x+v.x, y+v.y, z+v.z);
    }

    Vec3 Vec3::operator -(const Vec3& v) const {
        return Vec3(x-v.x, y-v.y, z-v.z);
    }

    Vec3 Vec3::operator *(float s) const {
        return Vec3( s*x, s*y, s*z);
    }

    Vec3 Vec3::operator /(float s) const {
        return Vec3(x/s, y/s, z/s);
    }

    //OPERADORES =

    Vec3& Vec3::operator +=(const Vec3& v) {
        x += v.x;
        y += v.y;
        z += v.z;
        return *this;
    }

    Vec3& Vec3::operator -=(const Vec3& v) {
        x -= v.x;
        y -= v.y;
        z -= v.z;
        return *this;
    }

    Vec3& Vec3::operator *=(float f) {
        x *= f;
        y *= f;
        z *= f;
        return *this;
    }
    
    Vec3& Vec3::operator /=(float f) {
        x /= f;
        y /= f;
        z /= f;
        return *this;
    }

    //OPERADORES FRIEND

    Vec3 operator  *(float s, const Vec3& v) {
        return Vec3( v.x*s, v.y*s, v.z*s);
    }

    Vec3 operator  /(float s, const Vec3& v) {
        return Vec3( v.x/s, v.y/s, v.z/s);
    }

    //ANGULOS

    real Vec3::angle(const Vec3& v) const {
        const real l1 = length();
        const real l2 = v.length();
        const real pe = dot(v);
        const real ang = acos(pe/(l1*l2));
        
        return ang * real(180.0/M_PI);
    }

    real Vec3::angle2(const Vec3& v) const {
        const real l1 = length();
        const real l2 = v.length();
        const real pe = dot(v);
        const real ang = acos(truncate(pe/(l1*l2)));
        
        return ang * real(180.0/M_PI);
    }

    real Vec3::angle3(const Vec3& v) const {
        const real l1_2 = dot(*this);
        const real l2_2 = v.dot(v);
        const real pe = dot(v);
        const real ang = acos(truncate(pe/sqrt(l1_2*l2_2)));
        
        return ang * real(180.0/M_PI);
    }


    //IMPRESSAO

    std::ostream& operator <<(std::ostream& out, const Vec3& v) {
        return out << v.x << ", " << v.y << ", " << v.z << ";";
    }

    float x, y, z;  

}