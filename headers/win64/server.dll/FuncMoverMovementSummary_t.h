#pragma once

struct FuncMoverMovementSummary_t  // sizeof 0x20, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    float32 flStartT; // offset 0x0, size 0x4, align 4
    float32 flEndT; // offset 0x4, size 0x4, align 4
    int32 nStartNodeIndex; // offset 0x8, size 0x4, align 4
    int32 nStopNodeIndex; // offset 0xC, size 0x4, align 4
    int32 nMovementMode; // offset 0x10, size 0x4, align 4
    FuncMoverMovementSummaryFlags_t nFlags; // offset 0x14, size 0x4, align 4
    GameTick_t nTick; // offset 0x18, size 0x4, align 255
    CHandle< CPathMover > hPathMover; // offset 0x1C, size 0x4, align 4
};
