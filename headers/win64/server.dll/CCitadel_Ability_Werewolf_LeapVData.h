#pragma once

class CCitadel_Ability_Werewolf_LeapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1558, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CSoundEventName m_strCrashSound; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LeapingModifier; // offset 0x13F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1418, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrashParticle; // offset 0x1428, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flBufferTimeBeforeLanding; // offset 0x1508, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxPitch; // offset 0x150C, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x1510, size 0x4, align 4
    char _pad_1514[0x4]; // offset 0x1514
    CPiecewiseCurve m_LeapSpeedCurve; // offset 0x1518, size 0x40, align 8
};
