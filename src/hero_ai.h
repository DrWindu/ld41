/*
 *  Copyright (C) 2018 the authors (see AUTHORS)
 *
 *  This file is part of Draklia's ld41.
 *
 *  lair is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  lair is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with lair.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#ifndef LD41_HERO_AI_H_
#define LD41_HERO_AI_H_


#include <lair/core/lair.h>

#include "map_node.h"

#include "ai.h"


class HeroAi : public Ai {
public:
	enum Status {
		PUSH_LANE,
		FOLLOW_PLAYER,
		BACK_TO_BASE,
	};

	enum Dir {
		FORWARD,
		BACKWARD,
	};

public:
	HeroAi(CharacterSP character, Lane lane);

	virtual void play() override;

	void attackClosest();
	bool move(Dir direction);

public:
	Status      _status;
	Lane        _lane;
	CharacterWP _target;

	CharacterGroups _groups;
};


#endif
