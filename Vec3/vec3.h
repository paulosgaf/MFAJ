#ifndef VEC3_H_
#define VEC3_H_

#include <iostream>
#include <cmath>

namespace smd{

    typedef float real;
    template<typename T>
    
    T truncate (T x){
        
        if (x > T(+1.0)){
            return T(+1.0);
        }

        if (x < T(-1.0)){ 
            return T(-1.0);
        }

        return x;
    }

    class Vec3{
        
        public:
            Vec3(float vx=0, float vy=0, float vz=0);

            real length() const;
            real dot(const Vec3& v) const;
            Vec3 cross(const Vec3& v) const;

            Vec3 operator +(const Vec3& v) const;
            Vec3 operator -(const Vec3& v) const;
            Vec3 operator *(float s) const;
            Vec3 operator /(float s) const;

            Vec3& operator +=(const Vec3& v);
            Vec3& operator -=(const Vec3& v);
            Vec3& operator *=(float f);
            Vec3& operator /=(float f);

            real angle(const Vec3& v) const;
            real angle2(const Vec3& v) const;
            real angle3(const Vec3& v) const;

            friend Vec3 operator *(float s, const Vec3& v);
            friend Vec3 operator /(float s, const Vec3& v);

            friend std::ostream& operator <<(std::ostream& out, const Vec3& v);

            real x, y, z;  
    };
}


#endif