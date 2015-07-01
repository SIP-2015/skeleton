/*
 * rooms.h
 *
 *  Created on: June 28, 2015
 *      Author: Matthew Mussomele
 */

#include <cstdint>
#include <queue>
#include "Robot.h"

////////////////////////////////////////////////////////////////////
// This task has four parts, and will allow you to practice       //
// using objects once they have been defined.                     //
// You should complete the four functions below so that they      //
// behave like their comments describe. They will have to use the //
// Robot class to complete their objective. You should have       //
// received a copy of the source code with this assignment. Use   //
// that and the comments on the public methods to help you figure //
// out what tools you have at your disposal to solve the problems //
// at hand.                                                       //
//                                                                //
// Prompt: Your robot has been placed inside of a large room of   //
//         of unknown size. The room is split into many square    //
//         sections separated by walls. Your goal is to figure    //
//         out the size of the room by simply moving from room to //
//         room. The robot will automatically keep track of how   //
//         many steps it has taken, and you can reset it's step   //
//         counter at any time.                                   //
//         An example of a simple room with 9 squares is below:   //
//         	            ___________                               //
//                     |   |   |   |                              //
//                     |___|___|___|                              //
//                     |   |   |   |                              //
//                     |___|___|___|                              //
//                     |   |   |   |                              //
//                     |___|___|___|                              //
//                                                                //
//         If there is a part of the room that is disconnected    //
//         from the part you have been placed in, ignore it.      //
//         An example of another room that should be considered   //
//         to have 9 rooms is below (given that you start at the  //
//         x):                                                    //
//                      ___________                               //
//                     | x |   |   |                              //
//                     |___|___|___|     ___                      //
//                     |   |   |   |    |   |                     //
//                     |___|___|___|    |___|                     //
//                     |   |   |   |                              //
//                     |___|___|___|                              //
//                                                                //
////////////////////////////////////////////////////////////////////

/**
 * Question 1: Your robot has been placed in the top left corner of a room you know
 *             is square. Use the robot's built in functions to figure out how large 
 *             the room is.
 * 
 * @brief finds the size of a square room, with the knowledge that the Robot
 *        starts at the top left corner of the room
 * 
 * @param robot a robot that has been placed in a square room
 * @return the area of the room
 */
int32_t square_room_top_left_corner(Robot& robot) {
	/* YOUR CODE HERE */
    return 0;
}

/**
 * Question 2: Your robot has been placed in the top left corner of a room you know
 *             is rectangular. Use the robot's built in functions to figure out how large 
 *             the room is.
 * 
 * @brief finds the size of a rectangular room, with the knowledge that the Robot
 *        starts at the top left corner of the room
 * 
 * @param robot a robot that has been placed in a rectangular room
 * @return the area of the room
 */
int32_t rectangle_room_top_left_corner(Robot& robot) {
	/* YOUR CODE HERE */
    return 0;
}

/**
 * Question 3: Your robot has been placed in a room you know is rectangular. However, you
 *             have no knowledge of the robot's relative location in the room. Use the robot's 
 *             built in functions to figure out how large the room is.
 * 
 * @brief finds the size of a rectangular room, without any knowledge of the Robot's
 *        relative location in the room
 * 
 * @param robot a robot that has been placed in a rectangular room
 * @return the area of the room
 */
int32_t rectangle_room_random_location(Robot& robot) {
	/* YOUR CODE HERE */
    return 0;
}

// returns the unordered_set key corresponding to the coordinates
int32_t get_key(int16_t x, int16_t y) {
    int32_t key = x;
    return (key << 16) + y;
}

// returns the x coordinate of a key
int16_t get_x(int32_t key) {
    return key >> 16;
}

// returns the y coordinate of a key
int16_t get_y(int32_t key) {
    return key % 65536;
}

/**
 * Question 4: Your robot has been placed in a room of unknown shape. You also do not know where
 *             it has been placed in the room. Use the robot's built in functions to figure out
 *             how large the room is.
 *             
 * WARNING: THIS QUESTION IS VERY, VERY DIFFICULT TO SOLVE COMPLETELY. JUST MAKE IT AS GENERAL AS YOU CAN
 *          AND DON'T WORRY ABOUT EVERY POSSIBLE EDGE CASE. YOU ARE NOT EXPECTED TO PASS EVERY TEST FOR IT.
 *          
 * NOTE: THE FUNCTIONS get_key, get_x and get_y WILL LIKELY COME IN HANDY.
 * 
 * @brief finds the size of a room, without any knowledge of the room's shape or the Robot's
 *        relative location in the room
 * 
 * @param robot a robot that has been placed in a room
 * @return the area of the room
 */
int32_t irregular_room_random_location(Robot& robot) {
    /* YOUR CODE HERE */
    return 0;
}
