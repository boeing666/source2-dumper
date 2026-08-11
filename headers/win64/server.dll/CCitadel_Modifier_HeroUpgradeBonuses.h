#pragma once

class CCitadel_Modifier_HeroUpgradeBonuses : public CCitadelModifier /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CCitadelPlayerPawn* m_pOwningPlayer; // offset 0xD0, size 0x8, align 8
    float32 m_flWeaponPower; // offset 0xD8, size 0x4, align 4
    float32 m_flArmorPower; // offset 0xDC, size 0x4, align 4
    float32 m_flTechPower; // offset 0xE0, size 0x4, align 4
    char _pad_00E4[0x4]; // offset 0xE4
};
