#pragma once

class CCitadel_Modifier_HeroUpgradeBonuses : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CCitadelPlayerPawn* m_pOwningPlayer; // offset 0x150, size 0x8, align 8
    float32 m_flWeaponPower; // offset 0x158, size 0x4, align 4
    float32 m_flArmorPower; // offset 0x15C, size 0x4, align 4
    float32 m_flTechPower; // offset 0x160, size 0x4, align 4
    char _pad_0164[0x4]; // offset 0x164
};
