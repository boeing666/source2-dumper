#pragma once

class CCitadel_Modifier_HeroUpgradeBonuses : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    C_CitadelPlayerPawn* m_pOwningPlayer; // offset 0xC0, size 0x8, align 8
    float32 m_flWeaponPower; // offset 0xC8, size 0x4, align 4
    float32 m_flArmorPower; // offset 0xCC, size 0x4, align 4
    float32 m_flTechPower; // offset 0xD0, size 0x4, align 4
    char _pad_00D4[0x4]; // offset 0xD4
};
