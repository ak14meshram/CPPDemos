#include "Defines.h"
#include "Snake.h"
#include "Grid.h"
using namespace snakegame;
using namespace math;

Snake::Snake(int size)
{
	cellSize_ = size;
}

const math::INTPoint2D& Snake::head() const
{
	
}
const math::INTPoint2D& Snake :: tail() const
{

}
bool Snake::eat(const math::INTPoint2D& food)
{

}
void Snake::move(Direction dir)
{

}
bool Snake::isSelfCollision()
{

}
const std::deque<math::INTPoint2D>& Snake::getBody() const
{

}

