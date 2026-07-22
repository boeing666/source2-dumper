#pragma once

class CCitadel_Ability_Unicorn_LuminousStrike : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x15B0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    GameTime_t m_flLastStackChangeTime; // offset 0x11D8, size 0x4, align 255
    int32 m_nLastStackCount; // offset 0x11DC, size 0x4, align 4
    char _pad_11E0[0x18]; // offset 0x11E0
    C_NetworkUtlVectorBase< GameTime_t > m_vecNextExplosionTime; // offset 0x11F8, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup
    C_NetworkUtlVectorBase< Vector > m_vecNextExplosionLocation; // offset 0x1210, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup
    int32 m_nStackCount; // offset 0x1228, size 0x4, align 4
    bool m_bPendingStackUpdate; // offset 0x122C, size 0x1, align 1
    char _pad_122D[0x383]; // offset 0x122D
};
