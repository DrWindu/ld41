##
##  Copyright (C) 2016-2018 the authors (see AUTHORS)
##
##  This file is part of Draklia's ld41.
##
##  lair is free software: you can redistribute it and/or modify it
##  under the terms of the GNU General Public License as published by
##  the Free Software Foundation, either version 3 of the License, or
##  (at your option) any later version.
##
##  lair is distributed in the hope that it will be useful, but
##  WITHOUT ANY WARRANTY; without even the implied warranty of
##  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
##  General Public License for more details.
##
##  You should have received a copy of the GNU General Public License
##  along with lair.  If not, see <http://www.gnu.org/licenses/>.
##

#find_package(Eigen3 REQUIRED)
#find_package(SDL2 REQUIRED)

if(MSVC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /SUBSYSTEM:WINDOWS")
endif()

include_directories(
	"${EIGEN3_INCLUDE_DIR}"
	"${SDL2_INCLUDE_DIR}"
)

add_executable(${CMAKE_PROJECT_NAME}
	main.cpp
	game.cpp
	console.cpp
	map_node.cpp
	character_class.cpp
	character.cpp
	skill.cpp
	ai.cpp
	redshirt_ai.cpp
	tower_ai.cpp
	hero_ai.cpp
	tm_command.cpp
	text_moba.cpp
	commands.cpp
	main_state.cpp
	splash_state.cpp
)

target_compile_definitions(${CMAKE_PROJECT_NAME}
	PRIVATE "-DPROJECT_NAME=\"${CMAKE_PROJECT_NAME}\""
)

target_link_libraries(${CMAKE_PROJECT_NAME}
	lair
)
