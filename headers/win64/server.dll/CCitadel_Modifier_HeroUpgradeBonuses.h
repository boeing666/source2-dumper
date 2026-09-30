#pragma once

class CCitadel_Modifier_HeroUpgradeBonuses : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CCitadelPlayerPawn* m_pOwningPlayer; // offset 0x140, size 0x8, align 8
    float32 m_flWeaponPower; // offset 0x148, size 0x4, align 4
    float32 m_flArmorPower; // offset 0x14C, size 0x4, align 4
    float32 m_flTechPower; // offset 0x150, size 0x4, align 4
    char _pad_0154[0x4]; // offset 0x154
};
