#pragma once

class CModifierPsychicLiftVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0xA60, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x830]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x830, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x840, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x850, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // offset 0x860, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x940, size 0xE0, align 8
    CSoundEventName m_strImpactSound; // offset 0xA20, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flOccilateMaxDistance; // offset 0xA30, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOccilateDegreesPerSecond; // offset 0xA34, size 0x4, align 4
    float32 m_flRiseTime; // offset 0xA38, size 0x4, align 4
    float32 m_flSlamTime; // offset 0xA3C, size 0x4, align 4 | MPropertyDescription
    float32 m_flRiseAcc; // offset 0xA40, size 0x4, align 4
    float32 m_flRiseMaxSpeed; // offset 0xA44, size 0x4, align 4
    float32 m_flRiseDecayFracStart; // offset 0xA48, size 0x4, align 4
    float32 m_flRiseDecayFracEnd; // offset 0xA4C, size 0x4, align 4
    float32 m_flSlamAcc; // offset 0xA50, size 0x4, align 4
    float32 m_flSlamMaxSpeed; // offset 0xA54, size 0x4, align 4
    float32 m_flSlamImpactRadius; // offset 0xA58, size 0x4, align 4
    char _pad_0A5C[0x4]; // offset 0xA5C
};
