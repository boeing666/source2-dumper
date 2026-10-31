#pragma once

class CCitadel_Ability_Tier2Boss_LaserBeamVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LaserLeft; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LaserMid; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaserRight; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaserCharge; // offset 0x10B0, size 0x10, align 8
};
