#pragma once

enum EDragOffsetBasis : uint8_t  // sizeof 0x1
{
    EDragOffset_WorldFixed = 0,
    EDragOffset_SourceFacing = 1,
    EDragOffset_SourceVelocity = 2,
    EDragOffset_SourceView = 3,
};
