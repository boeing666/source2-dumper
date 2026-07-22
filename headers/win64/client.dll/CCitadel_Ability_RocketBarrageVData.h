#pragma once

class CCitadel_Ability_RocketBarrageVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x19D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BarrageModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_MoveSlowModifier; // offset 0x1828, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1838, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1918, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBarrageSound; // offset 0x1928, size 0x10, align 8
    CSoundEventName m_strBarrageLoop; // offset 0x1938, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceSelected; // offset 0x1948, size 0x88, align 8 | MPropertyStartGroup
    float32 m_flMoveSpeedReductionPct; // offset 0x19D0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHeightTestDistance; // offset 0x19D4, size 0x4, align 4
};
