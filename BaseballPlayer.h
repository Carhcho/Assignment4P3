#pragma once
class BaseballPlayer
{
public:
	int hits;
	int homeruns;
	int walks;
	int strikeouts;
	BaseballPlayer(int hits, int homeruns, int walks, int strikeouts);
	void setHits(int h);
	void setHomeruns(int r);
	void setWalks(int w);
	void setStrikeouts(int s);
	int getHits();
	int getHomeruns();
	int getWalks();
	int getStrikeouts();
};

