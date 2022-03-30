#pragma once


namespace bep
{
	class Vector3n
	{
	public:
		// dimensions
		float x;
		float y;
		float z;

		// constructors

		// default constructor sets all positions to 0
		Vector3n() : x(0.0), y(0.0), z(0.0)
		{

		}
		// constructor with x, y, and z values
		Vector3n(float pX, float pY, float pZ) : x(pX), y(pY), z(pZ)
		{

		}
		// copy constructor
		Vector3n(const Vector3n& v2) : x(v2.x), y(v2.y), z(v2.z)
		{

		}
		// copy operator overload
		Vector3n& operator=(const Vector3n& v2)
		{
			x = v2.x;
			y = v2.y;
			z = v2.z;
			// for chaining
			return *this;
		}
		// destructor 
		~Vector3n()
		{

		}

		// operators
		void operator+=(const Vector3n& v)
		{
			this->x += v.x;
			this->y += v.y;
			this->z += v.z;
		}
		Vector3n operator+(const Vector3n& v)
		{
			return Vector3n((this->x + v.x), (this->y + v.y), (this->z + v.z));
		}
		void operator-=(const Vector3n& v)
		{
			this->x -= v.x;
			this->y -= v.y;
			this->z -= v.z;
		}
		Vector3n operator-(const Vector3n& v)
		{
			return Vector3n((this->x - v.x), (this->y - v.y), (this->z - v.z));
		}
		// scalar multiplication
		Vector3n operator*(float scalar)
		{
			return Vector3n((this->x * scalar), (this->y * scalar), (this->z * scalar));
		}
		// scalar mult
		void operator*=(float scalar)
		{
			x *= scalar;
			y *= scalar;
			z *= scalar;
		}
		// scalar divison
		Vector3n operator/(float scalar)
		{
			return Vector3n((this->x / scalar), (this->y / scalar), (this->z / scalar));
		}
		// scalar div
		void operator/=(float scalar)
		{
			x /= scalar;
			y /= scalar;
			z /= scalar;
		}
		// dot product (Function)
		float dot(const Vector3n& v)
		{
			return ((x * v.x) + (y * v.y) + (z * v.z));
		}
		// cross multiply
		Vector3n cross(const Vector3n& v) 
		{
			return Vector3n((y * v.z - z * v.y), (z * v.x - x * v.z), (x * v.y - y * v.x));
		}
		// magnitude
		float mag()
		{
			return std::sqrt((x * x) + (y * y) + (z * z));
		}
		// vector normalization
		void normalize()
		{
			if (this->mag() > 0.0f)
			{
				// one over magnitude
				float oomag = 1.0f/this->mag();
				x *= oomag;
				y *= oomag;
				z *= oomag;
			}
		}
	};
}