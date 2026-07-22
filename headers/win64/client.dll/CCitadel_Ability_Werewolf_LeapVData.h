#pragma once

class CCitadel_Ability_Werewolf_LeapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1988, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CSoundEventName m_strCrashSound; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LeapingModifier; // offset 0x1828, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // offset 0x1838, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1848, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrashParticle; // offset 0x1858, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flBufferTimeBeforeLanding; // offset 0x1938, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxPitch; // offset 0x193C, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x1940, size 0x4, align 4
    char _pad_1944[0x4]; // offset 0x1944
    CPiecewiseCurve m_LeapSpeedCurve; // offset 0x1948, size 0x40, align 8
};
