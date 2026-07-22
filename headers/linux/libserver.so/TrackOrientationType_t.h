#pragma once

enum TrackOrientationType_t : uint32_t  // sizeof 0x4
{
    TrackOrientation_Fixed = 0,
    TrackOrientation_FacePath = 1,
    TrackOrientation_FacePathAngles = 2,
};
