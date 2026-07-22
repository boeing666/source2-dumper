#pragma once

class CCitadel_Ability_Tier2Boss_LaserBeamVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1858, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LaserLeft; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LaserMid; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaserRight; // offset 0x1838, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaserCharge; // offset 0x1848, size 0x10, align 8
};
