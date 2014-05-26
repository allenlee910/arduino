#include "game.h"
#include <Arduino.h>

Game::Game(LedControl * lc) : lc(lc), playing(false) {
}

void Game::start() {
	this->playing = true;
	this->newPiece();
}

void Game::step() {
	if (!this->playing) { return; }

	byte action = ai.act(&this->piece, &this->pit);	

	Piece old = this->piece;
	this->piece.action(action);

	if (this->piece.fits(&this->pit)) { /* normal movement */
		old.clear(this->lc);
		this->piece.draw(this->lc);
	} else { /* cannot move, finish pit and get new piece */
		old.addTo(&this->pit);
		this->pit.cleanup(this->lc); /* FIXME score */

		this->newPiece();
		if (!this->piece.fits(&this->pit)) { this->gameOver(); }
	}
}

void Game::newPiece() {
	this->piece.pick();
	this->piece.draw(lc);
}

void Game::gameOver() {
	this->playing = false;
}