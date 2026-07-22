#pragma once

enum ESceneRequestState_t : uint32_t  // sizeof 0x4
{
    INACTIVE = 0,
    ACTIVE = 1,
    FINISHED = 2,
    FAILED = 3,
};
