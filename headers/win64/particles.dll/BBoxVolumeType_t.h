#pragma once

enum BBoxVolumeType_t : uint32_t  // sizeof 0x4
{
    BBOX_VOLUME = 0,
    BBOX_DIMENSIONS = 1,
    BBOX_MINS_MAXS = 2,
    BBOX_RADIUS = 3,
};
