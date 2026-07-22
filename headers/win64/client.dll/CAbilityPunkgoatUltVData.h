#pragma once

class CAbilityPunkgoatUltVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AD0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DiminishingSlowModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_VulnerableModifier; // offset 0x1838, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1848, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PullToGroundModifier; // offset 0x1858, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatChargingEffect; // offset 0x1868, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x1948, size 0xE0, align 8
    CSoundEventName m_strHangSound; // offset 0x1A28, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDiveSound; // offset 0x1A38, size 0x10, align 8
    CPiecewiseCurve m_TimeToReachGroundByHeight; // offset 0x1A48, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_GoUpSpeedCurve; // offset 0x1A88, size 0x40, align 8
    float32 m_flGoUpDuration; // offset 0x1AC8, size 0x4, align 4
    float32 m_flGoDownVelocityDampRate; // offset 0x1ACC, size 0x4, align 4
};
