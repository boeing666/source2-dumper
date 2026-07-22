#pragma once

struct PathAccompanyProperties_t  // sizeof 0x1C, align 0xFF [trivial_dtor] (server)
{
    bool m_bInvertLeadDistance; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x3]; // offset 0x1
    float32 m_flBacktrackThreshold; // offset 0x4, size 0x4, align 4
    float32 m_flDesiredDistanceOverride; // offset 0x8, size 0x4, align 4
    bool m_bIsSticky; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    float32 m_flStickyRange; // offset 0x10, size 0x4, align 4
    float32 m_flStickyBreakRange; // offset 0x14, size 0x4, align 4
    bool m_bCanRepeatedlyStick; // offset 0x18, size 0x1, align 1
    bool m_bInvertIfStickToEnd; // offset 0x19, size 0x1, align 1
    char _pad_001A[0x2]; // offset 0x1A
};
