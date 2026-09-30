#pragma once

class CCitadel_Ability_MeleeParry : public CCitadelBaseAbility /*0x0*/  // sizeof 0x16C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    ParticleIndex_t m_nActiveFX; // offset 0x14A0, size 0x4, align 255
    GameTime_t m_flParryStartTime; // offset 0x14A4, size 0x4, align 255
    bool m_bAttackParried; // offset 0x14A8, size 0x1, align 1
    char _pad_14A9[0x3]; // offset 0x14A9
    GameTime_t m_flParrySuccessEndTime; // offset 0x14AC, size 0x4, align 255
    char _pad_14B0[0x210]; // offset 0x14B0
};
