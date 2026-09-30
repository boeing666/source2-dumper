#pragma once

class CCitadel_Ability_MeleeParry : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x18F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    ParticleIndex_t m_nActiveFX; // offset 0x16D8, size 0x4, align 255
    GameTime_t m_flParryStartTime; // offset 0x16DC, size 0x4, align 255
    bool m_bAttackParried; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x3]; // offset 0x16E1
    GameTime_t m_flParrySuccessEndTime; // offset 0x16E4, size 0x4, align 255
    char _pad_16E8[0x210]; // offset 0x16E8
};
