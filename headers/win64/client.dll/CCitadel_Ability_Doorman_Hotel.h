#pragma once

class CCitadel_Ability_Doorman_Hotel : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1668, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    bool m_bSpendCooldown; // offset 0x11D8, size 0x1, align 1
    char _pad_11D9[0x3]; // offset 0x11D9
    Vector m_vLookTarget; // offset 0x11DC, size 0xC, align 4 | MNetworkEnable
    char _pad_11E8[0x480]; // offset 0x11E8
};
