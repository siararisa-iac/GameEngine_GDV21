#include "engine.h"
#include "iostream";

using namespace std;

Vector3 enemyFormation;
float speed = 0;
float spacing = 1.5f;
float scaleFactor = 0.25f;
float colorFactor = 0.1f;
vector<GameObject> enemies;
int enemyCount = 10;

void Initialize() 
{
	enemyFormation.SetValue(-7.5f, 5, 0);
	for (int i = 0; i < enemyCount; i++) {
		GameObject enemy;
		// set the position to have interval for each based on index
		enemy.SetPosition(enemyFormation.x + (spacing * i), enemyFormation.y, 0);
		enemy.SetScale(1, enemy.GetScale().y - (scaleFactor * i), 1);
		enemy.SetColor(1 - (colorFactor * i), 1, 0);
		// Add the enemy instance to the vector collection
		enemies.push_back(enemy);
	}
}

void Update() 
{
	// Iterate through each enemy
	for (int i = 0; i < enemies.size(); i++) 
	{
		// Make sure to render them ever frame
		enemies[i].Draw();
	}
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
}