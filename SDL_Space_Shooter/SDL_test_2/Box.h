#pragma once
#include <SDL.h>
#include <vector>
#include "Constants.h"
#include "Player.h"
#include "Box.h"
#include "Enemy.h"

bool CheckCollision(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2)
{
	/* Find edges of rect1
	int left1 = x1;
	int right1 = x1 + w1;
	int top1 = y1;
	int bottom1 = y1 + h1;

	// Find edges of rect2
	int left2 = x2;
	int right2 = x2 + w2;
	int top2 = y2;
	int bottom2 = y2 + h2;

	// Check edges
	if (left1 > right2)// Left 1 is right of right 2
		return false; // No collision

	if (right1 < left2) // Right 1 is left of left 2
		return false; // No collision

	if (top1 > bottom2) // Top 1 is below bottom 2
		return false; // No collision

	if (bottom1 < top2) // Bottom 1 is above top 2
		return false; // No collision

	return true;*/

	if (x1 < x2 + w2 && x1 + w1 > x1 && y1 < y2 + h2 && h1 + y1 > y2){
		return true;
	}
	return false;
}