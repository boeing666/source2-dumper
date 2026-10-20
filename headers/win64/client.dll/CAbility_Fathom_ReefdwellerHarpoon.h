#pragma once

class CAbility_Fathom_ReefdwellerHarpoon : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1A80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bHitTarget; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x3]; // offset 0x16E1
    VectorWS m_vPrevPos; // offset 0x16E4, size 0xC, align 4
    bool m_bBulletFlying; // offset 0x16F0, size 0x1, align 1
    bool m_bHasLatchedOnce; // offset 0x16F1, size 0x1, align 1
    bool m_bLatched; // offset 0x16F2, size 0x1, align 1
    char _pad_16F3[0x1]; // offset 0x16F3
    VectorWS m_vHarpoonTarget; // offset 0x16F4, size 0xC, align 4
    float32 m_flLatchedYaw; // offset 0x1700, size 0x4, align 4
    GameTime_t m_flCloseEnoughStartTime; // offset 0x1704, size 0x4, align 255
    GameTime_t m_flStuckStartTime; // offset 0x1708, size 0x4, align 255
    GameTime_t m_flReelStartTime; // offset 0x170C, size 0x4, align 255
    char _pad_1710[0x370]; // offset 0x1710
};
