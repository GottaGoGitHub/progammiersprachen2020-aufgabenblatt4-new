#include"mat2.hpp"

Mat2& Mat2::operator*=(Mat2 const& m){
    float e_00_temp = e_00;
    float e_01_temp = e_01;
    float e_10_temp = e_10;
    float e_11_temp = e_11;

    e_00_temp = e_00_temp * m.e_00 + e_10_temp * m.e_01;
    e_01_temp = e_01_temp * m.e_00 + e_11_temp * m.e_01;
    e_10_temp = e_00_temp * m.e_10 + e_10_temp * m.e_11;
    e_11_temp = e_01_temp * m.e_10 + e_11_temp * m.e_11;

    e_00 = e_00_temp;
    e_01 = e_01_temp;
    e_10 = e_10_temp;
    e_11 = e_11_temp;

    return *this;
}

Mat2 operator*(Mat2 const& m1, Mat2 const& m2){
    Mat2 temp{m1};
    temp *= m2;
    return temp;
}

float Mat2::det() const{
    return e_00 * e_11 - e_10 * e_01;
}

Mat2 inverse(Mat2 const& m){
    float f = 1/(m.e_00 * m.e_11 - m.e_10 * m.e_01);
    Mat2 result{f * m.e_11, f * -m.e_10, f * -m.e_01, f * m.e_00};
    return result;
}

Mat2 transpose(Mat2 const& m){
    Mat2 result{m.e_00, m.e_01, m.e_10, m.e_11};
    return result;
}

Mat2 make_rotation_mat2(float phi){
    Mat2 result{std::cos(phi), -std::sin(phi), std::sin(phi), -std::cos(phi)};
    return result;
}

Vec2 operator*(Mat2 const& m, Vec2 const& v){
    Vec2 result;
    result.x = m.e_00 * v.x + m.e_10 * v.y;
    result.y = m.e_01 * v.x + m.e_11 * v.y;
    return result;
}