#pragma once

class CCitadel_Ability_InfinitySlashVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1AA8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1820]; // offset 0x0
    float32 m_flRiseSpeed; // offset 0x1820, size 0x4, align 4
    float32 m_flRiseDuration; // offset 0x1824, size 0x4, align 4
    float32 m_flSpeedDecayScale; // offset 0x1828, size 0x4, align 4
    float32 m_flExplodeHoldTime; // offset 0x182C, size 0x4, align 4
    float32 m_flExplosionShakeAmplitude; // offset 0x1830, size 0x4, align 4
    float32 m_flExplosionShakeFrequency; // offset 0x1834, size 0x4, align 4
    float32 m_flExplosionShakeDuration; // offset 0x1838, size 0x4, align 4
    char _pad_183C[0x4]; // offset 0x183C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOERangeEffect; // offset 0x1840, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnimCastEffect; // offset 0x1920, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // offset 0x1A00, size 0x88, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1A88, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffTimerModifier; // offset 0x1A98, size 0x10, align 8
};
