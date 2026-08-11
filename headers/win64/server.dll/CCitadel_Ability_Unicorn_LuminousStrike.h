#pragma once

class CCitadel_Ability_Unicorn_LuminousStrike : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1348, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    GameTime_t m_flLastStackChangeTime; // offset 0xF70, size 0x4, align 255
    int32 m_nLastStackCount; // offset 0xF74, size 0x4, align 4
    char _pad_0F78[0x18]; // offset 0xF78
    CNetworkUtlVectorBase< GameTime_t > m_vecNextExplosionTime; // offset 0xF90, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup
    CNetworkUtlVectorBase< Vector > m_vecNextExplosionLocation; // offset 0xFA8, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup
    int32 m_nStackCount; // offset 0xFC0, size 0x4, align 4
    bool m_bPendingStackUpdate; // offset 0xFC4, size 0x1, align 1
    char _pad_0FC5[0x383]; // offset 0xFC5
};
