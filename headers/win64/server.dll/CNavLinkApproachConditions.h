#pragma once

class CNavLinkApproachConditions  // sizeof 0x10, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    MovementGaitId_t m_sMovementGait; // offset 0x0, size 0x8, align 8
    float32 m_flFacingAlignmentDegrees; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
