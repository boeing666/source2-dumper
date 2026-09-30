#pragma once

struct PerTickSettings_t  // sizeof 0x6C0, align 0x10 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    CTransform m_startingLocalToWorld; // offset 0x0, size 0x20, align 16
    CTransform m_prevLocalToWorld; // offset 0x20, size 0x20, align 16
    CTransform m_finalLocalToWorld; // offset 0x40, size 0x20, align 16
    CRootMotion m_rootMotion; // offset 0x60, size 0x28, align 4
    char _pad_0088[0x614]; // offset 0x88
    int32 m_updateID; // offset 0x69C, size 0x4, align 4
    char _pad_06A0[0x4]; // offset 0x6A0
    float32 m_flLastTimeStep; // offset 0x6A4, size 0x4, align 4
    float32 m_flPrevAnimTime; // offset 0x6A8, size 0x4, align 4
    float32 m_flNextAnimTime; // offset 0x6AC, size 0x4, align 4
    char _pad_06B0[0x4]; // offset 0x6B0
    bool m_bAwaken; // offset 0x6B4, size 0x1, align 1
    bool m_bTeleported; // offset 0x6B5, size 0x1, align 1
    bool m_bIsClient; // offset 0x6B6, size 0x1, align 1
    bool m_bIsPredicted; // offset 0x6B7, size 0x1, align 1
    char _pad_06B8[0x8]; // offset 0x6B8
};
