#pragma once

class CCitadel_Ability_InfinitySlashVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1630, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A8]; // offset 0x0
    float32 m_flRiseSpeed; // offset 0x13A8, size 0x4, align 4
    float32 m_flRiseDuration; // offset 0x13AC, size 0x4, align 4
    float32 m_flSpeedDecayScale; // offset 0x13B0, size 0x4, align 4
    float32 m_flExplodeHoldTime; // offset 0x13B4, size 0x4, align 4
    float32 m_flExplosionShakeAmplitude; // offset 0x13B8, size 0x4, align 4
    float32 m_flExplosionShakeFrequency; // offset 0x13BC, size 0x4, align 4
    float32 m_flExplosionShakeDuration; // offset 0x13C0, size 0x4, align 4
    char _pad_13C4[0x4]; // offset 0x13C4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOERangeEffect; // offset 0x13C8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnimCastEffect; // offset 0x14A8, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // offset 0x1588, size 0x88, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1610, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffTimerModifier; // offset 0x1620, size 0x10, align 8
};
