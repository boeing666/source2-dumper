#pragma once

class CCitadel_Ability_MeleeParry : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1100, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ParticleIndex_t m_nActiveFX; // offset 0xF70, size 0x4, align 255
    GameTime_t m_flParryStartTime; // offset 0xF74, size 0x4, align 255 | MNetworkEnable
    bool m_bAttackParried; // offset 0xF78, size 0x1, align 1 | MNetworkEnable
    char _pad_0F79[0x3]; // offset 0xF79
    GameTime_t m_flParrySuccessEndTime; // offset 0xF7C, size 0x4, align 255 | MNetworkEnable
    char _pad_0F80[0x180]; // offset 0xF80
};
