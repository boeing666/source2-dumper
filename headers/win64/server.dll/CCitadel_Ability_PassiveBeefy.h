#pragma once

class CCitadel_Ability_PassiveBeefy : public CCitadelBaseAbility /*0x0*/  // sizeof 0x18E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14C0]; // offset 0x0
    GameTime_t m_flLastHealTime; // offset 0x14C0, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0x14C4, size 0x4, align 4
    char _pad_14C8[0x420]; // offset 0x14C8
};
