#pragma once

enum EOverrideBlockLOS_t : uint32_t  // sizeof 0x4
{
    BLOCK_LOS_DEFAULT = 0,
    BLOCK_LOS_FORCE_FALSE = 1,
    BLOCK_LOS_FORCE_TRUE = 2,
};
