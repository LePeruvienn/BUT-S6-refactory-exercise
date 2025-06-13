cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(MyExecutable
	main.cpp
	fonctions.cpp
	joueurs.cpp
	jeu.cpp
)

# Include directories
include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
)
