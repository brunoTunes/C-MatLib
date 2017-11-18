//
// Created by Tunes on 10/11/2017.
//

#ifndef MATHLIBS_VECTOR3D_H
#define MATHLIBS_VECTOR3D_H
#include<cmath>

struct Vector3D
{
    float x, y, z;

    Vector3D() = default;

    Vector3D(const float & x, const float & y, const float & z);

    Vector3D& operator *=(const float& s);

    Vector3D& operator /=(const float& s);

    Vector3D& operator +=(const float& s);

    Vector3D& operator -=(const float& s);
};

inline Vector3D operator *(const Vector3D& v, const float& s){
    return ((Vector3D(v.x, v.y, v.z)) *= s);
}

inline Vector3D operator /(const Vector3D& v, const float& s){
    return ((Vector3D(v.x, v.y, v.z)) /= s);
}

inline Vector3D operator +(const Vector3D& v, const float& s){
    return ((Vector3D(v.x, v.y, v.z)) += s);
}

inline Vector3D operator -(const Vector3D& v, const float& s){
    return ((Vector3D(v.x, v.y, v.z)) -= s);
}

inline Vector3D operator -(const Vector3D& v){
    return (Vector3D(-v.x, -v.y, -v.z));
}

inline float Magnitude(const Vector3D& v){
    return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}

inline Vector3D Normalize(const Vector3D& v){
    return (v / Magnitude(v));
}

#endif //MATHLIBS_VECTOR3D_H
