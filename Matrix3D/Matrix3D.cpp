//
// Created by Tunes on 18/11/2017.
//

#include "Matrix3D.h"

Matrix3D::Matrix3D(float& a, float& b, float& c, float& d, float& e, float& f, float& g, float& h, float& i){

};

Matrix3D::Matrix3D(Vector3D& a, Vector3D& b, Vector3D& c);

float& Matrix3D::operator ()(int i, int j);

const float& Matrix3D::operator ()(int i, int j) const;

Vector3D& Matrix3D::operator [](int j);

const Vector3D& Matrix3D::operator [](int j) const;
