#pragma once

class CCitadel_Ability_Airheart_ChargeBlast : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1160, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF74]; // offset 0x0
    uint8 m_nState; // offset 0xF74, size 0x1, align 1 | MNetworkEnable
    char _pad_0F75[0x3]; // offset 0xF75
    CUtlVectorEmbeddedNetworkVar< AirheartLockOnTarget_t > m_vecMarks; // offset 0xF78, size 0x68, align 8 | MNetworkEnable
    char _pad_0FE0[0x180]; // offset 0xFE0
};
