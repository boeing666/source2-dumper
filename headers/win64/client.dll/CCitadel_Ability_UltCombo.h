#pragma once

class CCitadel_Ability_UltCombo : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1368, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    GameTime_t m_flLastAttackTime; // offset 0x11D8, size 0x4, align 255
    int32 m_nAttackNum; // offset 0x11DC, size 0x4, align 4
    char _pad_11E0[0x180]; // offset 0x11E0
    int32 m_iBonusHealth; // offset 0x1360, size 0x4, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1364, size 0x4, align 4 | MNetworkEnable
};
