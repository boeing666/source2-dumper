#pragma once

class CCitadel_Ability_MeleeParry : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1368, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    ParticleIndex_t m_nActiveFX; // offset 0x11D8, size 0x4, align 255
    GameTime_t m_flParryStartTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable
    bool m_bAttackParried; // offset 0x11E0, size 0x1, align 1 | MNetworkEnable
    char _pad_11E1[0x3]; // offset 0x11E1
    GameTime_t m_flParrySuccessEndTime; // offset 0x11E4, size 0x4, align 255 | MNetworkEnable
    char _pad_11E8[0x180]; // offset 0x11E8
};
