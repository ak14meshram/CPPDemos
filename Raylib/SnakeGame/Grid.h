#pragma once
#include "Defines.h"

namespace snakegame
{
	class Grid
	{
	public:
		Grid(int cellSize, int rows, int col);

		bool isInside(const math::INTPoint2D& point) const;

		void generateFood();
		
		void getMinMax() const;
		//added
		void setMinMax(math::INTPoint2D& min, math::INTPoint2D& max) const;

		math::INTPoint2D& getFood() const;

	private:
		math::INTPoint2D food_;
		math::INTPoint2D min_;
		math::INTPoint2D max_;

	};
}