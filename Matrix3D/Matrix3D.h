//
// Created by Tunes on 18/11/2017.
//

#ifndef MATHLIBS_MATRIX3D_H
#define MATHLIBS_MATRIX3D_H

#include "../Vector3D/Vector3D.h"

class Matrix3D {
private:
    float m[3][3];

public:
    Matrix3D() = default;
    Matrix3D(float& a, float& b, float& c, float& d, float& e, float& f, float& g, float& h, float& i);
    Matrix3D(Vector3D& a, Vector3D& b, Vector3D& c);
    float& operator ()(int i, int j);
    const float& operator ()(int i, int j) const;
    Vector3D& operator [](int j);
    const Vector3D& operator [](int j) const;
};

#endif //MATHLIBS_MATRIX3D_H
