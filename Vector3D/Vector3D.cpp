//
// Created by Tunes on 10/11/2017.
//

#include "Vector3D.h"

Vector3D::Vector3D(const float & x, const float & y, const float & z): x(x), y(y), z(z) { }

Vector3D& Vector3D::operator *=(const float& s)
{
    this->x *= s;
    this->y *= s;
    this->z *= s;

    return (*this);
}

Vector3D& Vector3D::operator /=(const float& s)
{
    this->x /= s;
    this->y /= s;
    this->z /= s;

    return (*this);
}
