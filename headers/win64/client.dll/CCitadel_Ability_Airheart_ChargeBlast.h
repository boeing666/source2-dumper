#pragma once

class CCitadel_Ability_Airheart_ChargeBlast : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x13C8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11DC]; // offset 0x0
    uint8 m_nState; // offset 0x11DC, size 0x1, align 1 | MNetworkEnable
    char _pad_11DD[0x3]; // offset 0x11DD
    C_UtlVectorEmbeddedNetworkVar< AirheartLockOnTarget_t > m_vecMarks; // offset 0x11E0, size 0x68, align 8 | MNetworkEnable
    char _pad_1248[0x180]; // offset 0x1248
};
