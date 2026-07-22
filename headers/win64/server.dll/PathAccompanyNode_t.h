#pragma once

struct PathAccompanyNode_t  // sizeof 0x50, align 0xFF (server)
{
    CUtlString m_sName; // offset 0x0, size 0x8, align 8
    Vector m_vInitialPosition; // offset 0x8, size 0xC, align 4
    float32 m_flRadius; // offset 0x14, size 0x4, align 4
    float32 m_flRoll; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    MovementGaitId_t m_eMovementGaitOverride; // offset 0x20, size 0x8, align 8
    VectorWS m_vWorldPosition; // offset 0x28, size 0xC, align 4
    Vector m_vForward; // offset 0x34, size 0xC, align 4
    Vector m_vLeft; // offset 0x40, size 0xC, align 4
    float32 m_flDistToNext; // offset 0x4C, size 0x4, align 4
};
