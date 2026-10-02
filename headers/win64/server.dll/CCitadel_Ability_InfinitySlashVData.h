#pragma once

class CCitadel_Ability_InfinitySlashVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1690, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13F0]; // offset 0x0
    float32 m_flRiseSpeed; // offset 0x13F0, size 0x4, align 4
    float32 m_flRiseDuration; // offset 0x13F4, size 0x4, align 4
    float32 m_flSpeedDecayScale; // offset 0x13F8, size 0x4, align 4
    float32 m_flExplodeHoldTime; // offset 0x13FC, size 0x4, align 4
    float32 m_flExplosionShakeAmplitude; // offset 0x1400, size 0x4, align 4
    float32 m_flExplosionShakeFrequency; // offset 0x1404, size 0x4, align 4
    float32 m_flExplosionShakeDuration; // offset 0x1408, size 0x4, align 4
    char _pad_140C[0x4]; // offset 0x140C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOERangeEffect; // offset 0x1410, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnimCastEffect; // offset 0x14F0, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // offset 0x15D0, size 0xA0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1670, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffTimerModifier; // offset 0x1680, size 0x10, align 8
};
