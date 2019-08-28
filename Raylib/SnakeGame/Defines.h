#pragma once


namespace math{

	template <typename T>
	struct Point2D
	{
		Point2D() = default;

		Point2D(T x, T y): x_(x), y_(y){}

		friend Point2D operator+(const Point2D& lhs, const Point2D& rhs)
		{
			return Point2D(lhs.x_ + rhs.x_, lhs.y_ + rhs.y_);
		}

		friend Point2D operator-(const Point2D& lhs, const Point2D& rhs)
		{
			return Point2D(lhs.x_ - rhs.x_, lhs.y_ - rhs.y_);
		}

		T x_;
		T y_;
	};

	using INTPoint2D = Point2D<int>;
	using RealPoint2D = Point2D<double>;

}

namespace snakegame
{
	enum Direction
	{
		eStop,
		eLeft,
		eRight,
		eUp,
		eDown
	};
}