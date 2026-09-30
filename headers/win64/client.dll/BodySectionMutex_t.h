#pragma once

enum BodySectionMutex_t : uint32_t  // sizeof 0x4
{
    eNone = 0,
    eLowerBody = 1,
    eUpperBody = 2,
    eFullBody = 3,
};
