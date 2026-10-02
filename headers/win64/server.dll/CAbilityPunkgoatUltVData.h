#pragma once

class CAbilityPunkgoatUltVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DiminishingSlowModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_VulnerableModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1418, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PullToGroundModifier; // offset 0x1428, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatChargingEffect; // offset 0x1438, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x1518, size 0xE0, align 8
    CSoundEventName m_strHangSound; // offset 0x15F8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDiveSound; // offset 0x1608, size 0x10, align 8
    CPiecewiseCurve m_TimeToReachGroundByHeight; // offset 0x1618, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_GoUpSpeedCurve; // offset 0x1658, size 0x40, align 8
    float32 m_flGoUpDuration; // offset 0x1698, size 0x4, align 4
    float32 m_flGoDownVelocityDampRate; // offset 0x169C, size 0x4, align 4
};
