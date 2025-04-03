#pragma once

namespace Player
{
	class PlayerController;

	class PlayerService
	{
	private:
		PlayerController* player_controller;

	public:asdfasdfasdf
		PlayerService();
		virtual ~PlayerService();

		void initialize();asdfasdf
		void update();
		void render();

		void increaseScore(int val);
		void decreaseScore(int valasdfasdfasdf
		void increaseEnemiesKilled(int val);
		
		void enableShield();
		void enableRapidFire();
		void enableTrippleLaser();

		void reset();
	};
}
