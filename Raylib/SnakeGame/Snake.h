#pragma once
#include "Defines.h"
#include <deque>
namespace snakegame {

	class Snake
	{
		Snake(int size);

		const math::INTPoint2D& head() const;
		const math::INTPoint2D& tail() const;
		bool eat(const math::INTPoint2D& food);
		void move(Direction dir);
		bool isSelfCollision();
		const std::deque<math::INTPoint2D>& getBody() const;

	private:

		std::deque<math::INTPoint2D> body_;
		int cellSize_;

	};

}


