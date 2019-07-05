/*
 * CardDB.hpp
 *
 *  Created on: Jul 5, 2019
 *      Author: chorm
 */

#ifndef CARDDB_HPP__2019_07_05_04_09_41
#define CARDDB_HPP__2019_07_05_04_09_41

#include <string>

namespace lightningcreations::yddd{
	enum class cardid_t:unsigned long long;
	enum class refid_t:unsigned short;

	class GameState;

	class Card;

	cardid_t deref(refid_t,const GameState&);
	refid_t ref(cardid_t,const GameState&);
	Card& getCard(cardid_t);

}
#endif /* CARDDB_HPP__2019_07_05_04_09_41 */
