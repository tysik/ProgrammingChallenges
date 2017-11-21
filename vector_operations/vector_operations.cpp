#include <iostream>
#include <cmath>

class Vector
{
public:
   Vector(double x = 0.0, double y = 0.0, double z = 0.0) :
     x_(x),
     y_(y),
     z_(z)
   {}

   void x(double x)
   {
     x_ = x;
   }

   void y(double y)
   {
     y_ = y;
   }

   void z(double z)
   {
     z_ = z;
   }

   double x() const
   {
     return x_;
   }

   double y() const
   {
     return y_;
   }

   double z() const
   {
     return z_;
   }

   double length() const
   {
     return sqrt( x_ * x_ + y_ * y_ + z_ * z_);
   }

   Vector& cross(const Vector &v)
   {
     double temp_x = y_ * v.z() - z_ * v.y();
     double temp_y = z_ * v.x() - x_ * v.z();
     double temp_z = x_ * v.y() - y_ * v.z();

     x_ = temp_x;
     y_ = temp_y;
     z_ = temp_z;

     return *this;
   }

   double dot(const Vector &v) const
   {
     return x_ * v.x() + y_ * v.y() + z_ * v.z();
   }

   Vector operator-()
   {
     return Vector(-x_, -y_, -z_);
   }

   Vector operator+()
   {
     return Vector(x_, y_, z_);
   }

 private:
   double x_;
   double y_;
   double z_;
 };

// Friends?
Vector operator+(const Vector &u, const Vector &v)
{
  return Vector(u.x() + v.x(), u.y() + v.y(), u.z() + v.z());
}

Vector operator-(const Vector &u, const Vector &v)
{
  return Vector(u.x() - v.x(), u.y() - v.y(), u.z() - v.z());
}

Vector operator*(const Vector &u, const Vector &v)
{
  return Vector(u.x() * v.x(), u.y() * v.y(), u.z() * v.z());
}

Vector operator/(const Vector &u, const Vector &v)
{
  return Vector(u.x() / v.x(), u.y() / v.y(), u.z() / v.z());
}

Vector operator*(double d, const Vector &v)
{
  return Vector(d * v.x(), d * v.y(), d * v.z());
}

Vector operator*(const Vector &v, double d)
{
  return Vector(d * v.x(), d * v.y(), d * v.z());
}

Vector operator/(const Vector &v, double d)
{
  return Vector(v.x() / d, v.y() / d, v.z() / d);
}

Vector cross(const Vector &u, const Vector &v)
{
  return Vector(u.y() * v.z() - u.z() * v.y(),
                u.z() * v.x() - u.x() * v.z(),
                u.x() * v.y() - u.y() * v.z());
}

double dot(const Vector &u, const Vector &v)
{
  return u.x() * v.x() + u.y() * v.y() + u.z() * v.z();
}

std::ostream& operator<<(std::ostream &out, const Vector &v)
{
  out << "(" << v.x() << ", " << v.y() << ", " << v.z() << ")";
  return out;
}

using namespace std;


int main()
{
  Vector u(1.0, 0.0, 0.0);
  Vector v(0.0, 1.0, 0.0);
  Vector w(0.0, 0.0, 1.0);

  cout << "u: " << u << endl << "v: " << v << endl << "w: " << w << endl;

  cout << "u + v + w = " << u + v + w << endl;

  cout << "u / 2.0 = " << u / 2.0 << endl;

  cout << "dot(u, v + w) = " << dot(u, v + w) << endl;

  cout << "cross(u + v, w) = " << cross(u + v, w) << endl;

  return 0;
}

