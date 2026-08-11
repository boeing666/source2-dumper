#pragma once

class CCitadel_Ability_PunkGoat_Blasted : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1600, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    GameTime_t m_tTimeOfLastBulletHit; // offset 0xF70, size 0x4, align 255
    float32 m_flPendingBlastedTimeToAdd; // offset 0xF74, size 0x4, align 4
    float32 m_flDeferredHealingFromBlasted; // offset 0xF78, size 0x4, align 4
    float32 m_flBlastedCurrentDuration; // offset 0xF7C, size 0x4, align 4 | MNetworkEnable
    char _pad_0F80[0x680]; // offset 0xF80
};
