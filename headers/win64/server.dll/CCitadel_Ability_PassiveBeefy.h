#pragma once

class CCitadel_Ability_PassiveBeefy : public CCitadelBaseAbility /*0x0*/  // sizeof 0x18E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B8]; // offset 0x0
    GameTime_t m_flLastHealTime; // offset 0x14B8, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0x14BC, size 0x4, align 4
    char _pad_14C0[0x420]; // offset 0x14C0
};
