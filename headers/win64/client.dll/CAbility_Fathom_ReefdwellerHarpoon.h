#pragma once

class CAbility_Fathom_ReefdwellerHarpoon : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1A78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bHitTarget; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x3]; // offset 0x16D9
    VectorWS m_vPrevPos; // offset 0x16DC, size 0xC, align 4
    bool m_bBulletFlying; // offset 0x16E8, size 0x1, align 1
    bool m_bHasLatchedOnce; // offset 0x16E9, size 0x1, align 1
    bool m_bLatched; // offset 0x16EA, size 0x1, align 1
    char _pad_16EB[0x1]; // offset 0x16EB
    VectorWS m_vHarpoonTarget; // offset 0x16EC, size 0xC, align 4
    float32 m_flLatchedYaw; // offset 0x16F8, size 0x4, align 4
    GameTime_t m_flCloseEnoughStartTime; // offset 0x16FC, size 0x4, align 255
    GameTime_t m_flStuckStartTime; // offset 0x1700, size 0x4, align 255
    GameTime_t m_flReelStartTime; // offset 0x1704, size 0x4, align 255
    char _pad_1708[0x370]; // offset 0x1708
};
