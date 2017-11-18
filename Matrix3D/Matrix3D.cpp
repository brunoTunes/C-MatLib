//
// Created by Tunes on 18/11/2017.
//

#include "Matrix3D.h"
#include <algorithm>

Matrix3D::Matrix3D(float& a, float& b, float& c, float& d, float& e, float& f, float& g, float& h, float& i){
    m[0][0] = std::move(a); m[0][1] = std::move(d); m[0][2] = std::move(g);
    m[1][0] = std::move(b); m[1][1] = std::move(e); m[1][2] = std::move(h);
    m[2][0] = std::move(c); m[2][1] = std::move(f); m[2][2] = std::move(i);
};

Matrix3D::Matrix3D(Vector3D& a, Vector3D& b, Vector3D& c){
    std::copy((float*)&a, (float*)&a+2, m[0]);
    std::copy((float*)&b, (float*)&b+2, m[1]);
    std::copy((float*)&c, (float*)&c+2, m[2]);
};

float& Matrix3D::operator ()(int i, int j){
    return m[i][j];
};

const float& Matrix3D::operator ()(int i, int j) const{
    return this->(i,j);
};

Vector3D& Matrix3D::operator [](int j){
    return (*reinterpret_cast<Vector3D*>(m[j]));
};

const Vector3D& Matrix3D::operator [](int j) const{
    return this->[j];
};
