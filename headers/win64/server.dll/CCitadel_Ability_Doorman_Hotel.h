#pragma once

class CCitadel_Ability_Doorman_Hotel : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1430, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF98]; // offset 0x0
    CHandle< CBaseEntity > m_hHotelStart; // offset 0xF98, size 0x4, align 4
    CHandle< CBaseEntity > m_hStartRelay; // offset 0xF9C, size 0x4, align 4
    bool m_bSpendCooldown; // offset 0xFA0, size 0x1, align 1
    char _pad_0FA1[0x3]; // offset 0xFA1
    Vector m_vLookTarget; // offset 0xFA4, size 0xC, align 4 | MNetworkEnable
    char _pad_0FB0[0x480]; // offset 0xFB0
};
