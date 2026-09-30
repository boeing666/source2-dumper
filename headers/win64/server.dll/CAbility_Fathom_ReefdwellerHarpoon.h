#pragma once

class CAbility_Fathom_ReefdwellerHarpoon : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1840, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    bool m_bHitTarget; // offset 0x14A0, size 0x1, align 1
    char _pad_14A1[0x3]; // offset 0x14A1
    VectorWS m_vPrevPos; // offset 0x14A4, size 0xC, align 4
    bool m_bBulletFlying; // offset 0x14B0, size 0x1, align 1
    bool m_bHasLatchedOnce; // offset 0x14B1, size 0x1, align 1
    bool m_bLatched; // offset 0x14B2, size 0x1, align 1
    char _pad_14B3[0x1]; // offset 0x14B3
    VectorWS m_vHarpoonTarget; // offset 0x14B4, size 0xC, align 4
    float32 m_flLatchedYaw; // offset 0x14C0, size 0x4, align 4
    GameTime_t m_flCloseEnoughStartTime; // offset 0x14C4, size 0x4, align 255
    GameTime_t m_flStuckStartTime; // offset 0x14C8, size 0x4, align 255
    GameTime_t m_flReelStartTime; // offset 0x14CC, size 0x4, align 255
    char _pad_14D0[0x370]; // offset 0x14D0
};
