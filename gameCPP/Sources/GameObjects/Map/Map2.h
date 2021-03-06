#include"Map.h"

class Map2 : public Map {
private:
	const int map2[12][20] = {
		// 0   1   2   3   4   5   6   7   8   9   0   1   2   3   4   5   6   7   8   9
		{  0 , 0 , 0 , -4, -9, 4 , 2 , -9, -2, 0 , 0 , 0 , 0 , 0 , 0 , -4, -9, -9, -9, -2}, // 0
		{  0 , 0 , 0 , -5, -3, 4 , 2 , -3, -8, 0 , 0 , 0 , 0 , 0 , 0 , -4, -9, -9, -9, -2}, // 1
		{  0 , 0 , 0 , 0 , 0 , 5 , 8 , 0 , 0 , 6 , 1 , 18, 7 , 0 , 0 , 14, 18, 18, 15, -2}, // 2
		{  -1, -7, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 4 , 16, 0 , 0 , 0 , 0 , 0 , -5, -3, -3, -8}, // 3
		{  -9, -2, 0 , 11, 0 , 0 , 0 , 0 , 0 , 12, 0 , 0 , 0 , 6 , 7 , 0 , 0 , 0 , 0 , 0 }, // 4
		{  15, -2, 0 , 12, 0 , 0 , 0 , 0 , 0 , 12, 0 , 0 , 6 , 9 , 9 , 1 , 1 , 1 , 7 , 0 }, // 5
		{  -9, -2, 0 , 12, 0 , 0 , 0 , 0 , 0 , 12, 0 , 17, 3 , 3 , 3 , 3 , 9 , 9 , 9 , 1 }, // 6
		{  -9, -2, 0 , 12, 0 , 0 , 0 , 0 , 0 , 12, 0 , 0 , 0 , 0 , 0 , 0 , 5 , 3 , 9 , 9 }, // 7 
		{  -9, -2, 0 , 12, 0 , 0 , 11, 0 , 0 , 12, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 5 , 9 }, // 8 
		{  -9, -2, 0 , 12, 0 , 0 , 0 , 0 , 0 , 4 , 7 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 4 }, // 9 
		{  1 , 1 , 1 , 2 , 0 , 0 , 0 , 0 , 0 , 4 , 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 9 }, // 10
		{  9 , 9 , 9 , 2 , 0 , 0 , 0 , 0 , 0 , 4 , 9 , 9 , 9 , 9 , 9 , 9 , 9 , 9 , 9 , 9 }, // 11
	};
public:
	Map2();
	~Map2();
	void Render(sf::RenderWindow* window);
	void Update(const float& deltaTime);
private:
	void setBackGround();
	void setButtom();
	void setCoins();
	void setDoor();
	void setExitdoor();
	void setGround();
	void setMushroom();
	void setStone();
	void setAnimation();
	void setPlayer();
};