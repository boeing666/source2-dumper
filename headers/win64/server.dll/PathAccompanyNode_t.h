#pragma once

struct PathAccompanyNode_t  // sizeof 0x48, align 0x8 (server) {MGetKV3ClassDefaults}
{
    CUtlString m_sName; // offset 0x0, size 0x8, align 8
    Vector m_vInitialPosition; // offset 0x8, size 0xC, align 4
    float32 m_flRadius; // offset 0x14, size 0x4, align 4
    float32 m_flRoll; // offset 0x18, size 0x4, align 4
    bool m_bOverrideGaitInCombat; // offset 0x1C, size 0x1, align 1
    SharedMovementGait_t m_eMinMovementGait; // offset 0x1D, size 0x1, align 1
    SharedMovementGait_t m_eMaxMovementGait; // offset 0x1E, size 0x1, align 1
    char _pad_001F[0x1]; // offset 0x1F
    VectorWS m_vWorldPosition; // offset 0x20, size 0xC, align 4
    Vector m_vForward; // offset 0x2C, size 0xC, align 4
    Vector m_vLeft; // offset 0x38, size 0xC, align 4
    float32 m_flDistToNext; // offset 0x44, size 0x4, align 4
};
