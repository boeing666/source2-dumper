#pragma once

struct AI_CommonMovementSettings_t  // sizeof 0x1C, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flSharpStartAngle; // offset 0x0, size 0x4, align 4
    float32 m_flMinIdleTurnAngle; // offset 0x4, size 0x4, align 4
    bool m_bUseSmoothPaths; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
    float32 m_flMovementMaxPathEndDirectionAngleDifferenceForStop; // offset 0xC, size 0x4, align 4
    float32 m_flMaxHopFacingDelta; // offset 0x10, size 0x4, align 4
    float32 m_flNavLinkSmoothMaxEntryAngle; // offset 0x14, size 0x4, align 4
    float32 m_flNavLinkSmoothMinSegmentLength; // offset 0x18, size 0x4, align 4
};
