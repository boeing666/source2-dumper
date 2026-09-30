#pragma once

class CCitadel_Ability_PunkGoat_Blasted : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1DA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    GameTime_t m_tTimeOfLastBulletHit; // offset 0x14A0, size 0x4, align 255
    float32 m_flPendingBlastedTimeToAdd; // offset 0x14A4, size 0x4, align 4
    float32 m_flDeferredHealingFromBlasted; // offset 0x14A8, size 0x4, align 4
    float32 m_flBlastedCurrentDuration; // offset 0x14AC, size 0x4, align 4
    char _pad_14B0[0x8F0]; // offset 0x14B0
};
