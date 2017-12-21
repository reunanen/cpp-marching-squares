/**
 * A direction in the plane. As a convenience, directions provide unit vector
 * components (manhattan metric) for both the conventional plane and screen
 * coordinates (y axis reversed).
 * 
 * @author Tom Gibara
 * Ported to C++ by Juha Reunanen
 *
 */

#pragma once

#include <utility>

namespace MarchingSquares {
    typedef std::pair<int, int> Direction;

    Direction MakeDirection(int x, int y) { return std::make_pair(x, y); }

    Direction East()      { return MakeDirection( 1,  0); }
    Direction Northeast() { return MakeDirection( 1,  1); }
    Direction North()     { return MakeDirection( 0,  1); }
    Direction Northwest() { return MakeDirection(-1,  1); }
    Direction West()      { return MakeDirection(-1,  0); }
    Direction Southwest() { return MakeDirection(-1, -1); }
    Direction South()     { return MakeDirection( 0, -1); }
    Direction Southeast() { return MakeDirection( 1, -1); }
}
