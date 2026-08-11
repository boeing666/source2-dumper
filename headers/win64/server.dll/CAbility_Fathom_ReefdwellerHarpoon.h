#pragma once

class CAbility_Fathom_ReefdwellerHarpoon : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1220, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bHitTarget; // offset 0xF70, size 0x1, align 1
    char _pad_0F71[0x3]; // offset 0xF71
    Vector m_vPrevPos; // offset 0xF74, size 0xC, align 4
    bool m_bBulletFlying; // offset 0xF80, size 0x1, align 1 | MNetworkEnable
    bool m_bHasLatchedOnce; // offset 0xF81, size 0x1, align 1 | MNetworkEnable
    bool m_bLatched; // offset 0xF82, size 0x1, align 1 | MNetworkEnable
    char _pad_0F83[0x1]; // offset 0xF83
    Vector m_vHarpoonTarget; // offset 0xF84, size 0xC, align 4 | MNetworkEnable
    float32 m_flLatchedYaw; // offset 0xF90, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flCloseEnoughStartTime; // offset 0xF94, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flStuckStartTime; // offset 0xF98, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flReelStartTime; // offset 0xF9C, size 0x4, align 255 | MNetworkEnable
    char _pad_0FA0[0x280]; // offset 0xFA0
};
