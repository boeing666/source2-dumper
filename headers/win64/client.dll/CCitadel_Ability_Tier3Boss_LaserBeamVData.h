#pragma once

class CCitadel_Ability_Tier3Boss_LaserBeamVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1090, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BeamModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
};
