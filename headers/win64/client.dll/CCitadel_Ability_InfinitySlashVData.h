#pragma once

class CCitadel_Ability_InfinitySlashVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1318, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1078]; // offset 0x0
    float32 m_flRiseSpeed; // offset 0x1078, size 0x4, align 4
    float32 m_flRiseDuration; // offset 0x107C, size 0x4, align 4
    float32 m_flSpeedDecayScale; // offset 0x1080, size 0x4, align 4
    float32 m_flExplodeHoldTime; // offset 0x1084, size 0x4, align 4
    float32 m_flExplosionShakeAmplitude; // offset 0x1088, size 0x4, align 4
    float32 m_flExplosionShakeFrequency; // offset 0x108C, size 0x4, align 4
    float32 m_flExplosionShakeDuration; // offset 0x1090, size 0x4, align 4
    char _pad_1094[0x4]; // offset 0x1094
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOERangeEffect; // offset 0x1098, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnimCastEffect; // offset 0x1178, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // offset 0x1258, size 0xA0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x12F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffTimerModifier; // offset 0x1308, size 0x10, align 8
};
