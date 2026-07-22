#pragma once

enum TRAIN_CODE : uint32_t  // sizeof 0x4
{
    TRAIN_SAFE = 0,
    TRAIN_BLOCKING = 1,
    TRAIN_FOLLOWING = 2,
};
