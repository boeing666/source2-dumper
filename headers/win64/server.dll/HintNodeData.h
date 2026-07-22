#pragma once

class HintNodeData  // sizeof 0x40, align 0xFF [trivial_dtor] (server)
{
public:
    CUtlSymbolLarge strEntityName; // offset 0x0, size 0x8, align 8
    int16 nHintType; // offset 0x8, size 0x2, align 2
    char _pad_000A[0x6]; // offset 0xA
    CUtlSymbolLarge strGroup; // offset 0x10, size 0x8, align 8
    int32 iDisabled; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CUtlSymbolLarge iszGenericType; // offset 0x20, size 0x8, align 8
    HintIgnoreFacing_t fIgnoreFacing; // offset 0x28, size 0x4, align 4
    NPC_STATE minState; // offset 0x2C, size 0x4, align 4
    NPC_STATE maxState; // offset 0x30, size 0x4, align 4
    int32 nRadius; // offset 0x34, size 0x4, align 4
    HintPriority_t ePriority; // offset 0x38, size 0x4, align 4
    bool bReturnHintPositionAsOnGroundPerHull; // offset 0x3C, size 0x1, align 1
    char _pad_003D[0x3]; // offset 0x3D
};
