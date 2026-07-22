#pragma once

class CCitadel_Ability_Unicorn_DazzlingOrbVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1950, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CPiecewiseCurve m_FallSpeedCurve; // offset 0x1818, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flAirSpeedMax; // offset 0x1858, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x185C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_OrbWatcherModifier; // offset 0x1860, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x1870, size 0xE0, align 8 | MPropertyStartGroup
};
