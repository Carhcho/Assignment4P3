#include "BaseballPlayer.h"

void BaseballPlayer::setHits(int h)
{
	hits = h;
}

void BaseballPlayer::setHomeruns(int r)
{
	homeruns = r;
}

void BaseballPlayer::setWalks(int w)
{
	walks = w;
}

void BaseballPlayer::setStrikeouts(int s)
{
	strikeouts = s;
}

int BaseballPlayer::getHits()
{
	return hits;
}

int BaseballPlayer::getHomeruns()
{
	return homeruns;
}

int BaseballPlayer::getWalks()
{
	return walks;
}

int BaseballPlayer::getStrikeouts()
{
	return strikeouts;
}
