/*
 * rightClick.h
 *
 *  Created on: Aug 2, 2019
 *      Author: matweaver7
 */

#ifndef GAMES_GALAGA_COMMUNICATION_ACTIONS_RIGHTCLICK_H_
#define GAMES_GALAGA_COMMUNICATION_ACTIONS_RIGHTCLICK_H_
#include <games/galaga/Communication/IAction.h>

class Pause : public IAction {
	void doAction();
	void undo();
	void Pause();
};

#endif /* GAMES_GALAGA_COMMUNICATION_ACTIONS_RIGHTCLICK_H_ */
