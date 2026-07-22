#pragma once

class CAbility_Fathom_ReefdwellerHarpoon : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1488, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    bool m_bHitTarget; // offset 0x11D8, size 0x1, align 1
    char _pad_11D9[0x3]; // offset 0x11D9
    Vector m_vPrevPos; // offset 0x11DC, size 0xC, align 4
    bool m_bBulletFlying; // offset 0x11E8, size 0x1, align 1 | MNetworkEnable
    bool m_bHasLatchedOnce; // offset 0x11E9, size 0x1, align 1 | MNetworkEnable
    bool m_bLatched; // offset 0x11EA, size 0x1, align 1 | MNetworkEnable
    char _pad_11EB[0x1]; // offset 0x11EB
    Vector m_vHarpoonTarget; // offset 0x11EC, size 0xC, align 4 | MNetworkEnable
    float32 m_flLatchedYaw; // offset 0x11F8, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flCloseEnoughStartTime; // offset 0x11FC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flStuckStartTime; // offset 0x1200, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flReelStartTime; // offset 0x1204, size 0x4, align 255 | MNetworkEnable
    char _pad_1208[0x280]; // offset 0x1208
};
