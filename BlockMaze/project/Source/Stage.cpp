#include "Stage.h"

const int WINDH = 12;
const int HEIGHT = 8;
const int CHIP_SIZE = 40;

int map[HEIGHT][WINDH] = {
{ 1,1,1,1,1,1,1,1,1,1,1,1},
{ 1,2,2,2,2,2,2,2,2,2,2,1},
{ 1,2,2,2,2,2,2,2,2,2,2,0},
{ 1,2,2,2,2,2,2,2,2,2,2,0},
{ 1,2,2,2,2,2,2,2,2,2,2,1},
{ 1,2,2,2,2,2,2,2,2,2,2,1},
{ 1,2,2,2,2,2,2,2,2,2,2,1},
{ 1,1,1,1,1,1,1,1,1,1,1,1},
};

Stage::Stage()
{
	hImage = LoadGraph("data/image/parts.png");
}

Stage::~Stage()
{
}

void Stage::Draw()
{
	for(int j = 0; j < HEIGHT;j++) {
		int y = j * 40 + 100;
		for (int i = 0; i < WINDH; i++) {
			int x = i * 40 + 100;
			if (map[HEIGHT][WINDH] == 1) {
				DrawRectGraph(x, y, 0, 40, 40, 40, hImage, TRUE);
			}
			if (map[HEIGHT][WINDH] == 2) {
				DrawRectGraph(x, y, 120, 0, 40, 40, hImage, TRUE);
			}
		}
	}
	
}
