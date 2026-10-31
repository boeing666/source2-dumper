#pragma once

class CCitadel_Ability_RocketBarrageVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1258, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BarrageModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_MoveSlowModifier; // offset 0x1090, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1180, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBarrageSound; // offset 0x1190, size 0x10, align 8
    CSoundEventName m_strBarrageLoop; // offset 0x11A0, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceSelected; // offset 0x11B0, size 0xA0, align 8 | MPropertyStartGroup
    float32 m_flMoveSpeedReductionPct; // offset 0x1250, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHeightTestDistance; // offset 0x1254, size 0x4, align 4
};
