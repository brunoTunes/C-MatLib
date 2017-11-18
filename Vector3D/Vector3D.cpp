//
// Created by Tunes on 10/11/2017.
//

#include <algorithm>
#include "Vector3D.h"

Vector3D::Vector3D(const float & x, const float & y, const float & z): x(std::move(x)), y(std::move(y)), z(std::move(z)) { }

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
