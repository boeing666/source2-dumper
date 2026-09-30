#pragma once

class CCitadel_Ability_Shiv_Defer_Damage : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x1788, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1760]; // offset 0x0
    float32 m_flTotalPendingDamage; // offset 0x1760, size 0x4, align 4
    char _pad_1764[0x1C]; // offset 0x1764
    GameTime_t m_flLastDeferredDamageApplicationTime; // offset 0x1780, size 0x4, align 255
    char _pad_1784[0x4]; // offset 0x1784
};
