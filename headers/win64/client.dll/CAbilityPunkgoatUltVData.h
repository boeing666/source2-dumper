#pragma once

class CAbilityPunkgoatUltVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1658, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DiminishingSlowModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_VulnerableModifier; // offset 0x13C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x13D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PullToGroundModifier; // offset 0x13E0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatChargingEffect; // offset 0x13F0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x14D0, size 0xE0, align 8
    CSoundEventName m_strHangSound; // offset 0x15B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDiveSound; // offset 0x15C0, size 0x10, align 8
    CPiecewiseCurve m_TimeToReachGroundByHeight; // offset 0x15D0, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_GoUpSpeedCurve; // offset 0x1610, size 0x40, align 8
    float32 m_flGoUpDuration; // offset 0x1650, size 0x4, align 4
    float32 m_flGoDownVelocityDampRate; // offset 0x1654, size 0x4, align 4
};
