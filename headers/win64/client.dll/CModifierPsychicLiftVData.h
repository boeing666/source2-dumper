#pragma once

class CModifierPsychicLiftVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0xB80, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x870]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x870, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x880, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x890, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // offset 0x8A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x980, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0xA60, size 0xE0, align 8
    CSoundEventName m_strImpactSound; // offset 0xB40, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flOccilateMaxDistance; // offset 0xB50, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOccilateDegreesPerSecond; // offset 0xB54, size 0x4, align 4
    float32 m_flRiseTime; // offset 0xB58, size 0x4, align 4
    float32 m_flSlamTime; // offset 0xB5C, size 0x4, align 4 | MPropertyDescription
    float32 m_flRiseAcc; // offset 0xB60, size 0x4, align 4
    float32 m_flRiseMaxSpeed; // offset 0xB64, size 0x4, align 4
    float32 m_flRiseDecayFracStart; // offset 0xB68, size 0x4, align 4
    float32 m_flRiseDecayFracEnd; // offset 0xB6C, size 0x4, align 4
    float32 m_flSlamAcc; // offset 0xB70, size 0x4, align 4
    float32 m_flSlamMaxSpeed; // offset 0xB74, size 0x4, align 4
    float32 m_flSlamImpactRadius; // offset 0xB78, size 0x4, align 4
    char _pad_0B7C[0x4]; // offset 0xB7C
};
