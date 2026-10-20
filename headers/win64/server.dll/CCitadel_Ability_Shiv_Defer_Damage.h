#pragma once

class CCitadel_Ability_Shiv_Defer_Damage : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x1790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1768]; // offset 0x0
    float32 m_flTotalPendingDamage; // offset 0x1768, size 0x4, align 4
    char _pad_176C[0x1C]; // offset 0x176C
    GameTime_t m_flLastDeferredDamageApplicationTime; // offset 0x1788, size 0x4, align 255
    char _pad_178C[0x4]; // offset 0x178C
};
