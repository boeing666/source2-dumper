#pragma once

class CAbilityPunkgoatUltVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1328, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DiminishingSlowModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_VulnerableModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PullToGroundModifier; // offset 0x10B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatChargingEffect; // offset 0x10C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x11A0, size 0xE0, align 8
    CSoundEventName m_strHangSound; // offset 0x1280, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDiveSound; // offset 0x1290, size 0x10, align 8
    CPiecewiseCurve m_TimeToReachGroundByHeight; // offset 0x12A0, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_GoUpSpeedCurve; // offset 0x12E0, size 0x40, align 8
    float32 m_flGoUpDuration; // offset 0x1320, size 0x4, align 4
    float32 m_flGoDownVelocityDampRate; // offset 0x1324, size 0x4, align 4
};
