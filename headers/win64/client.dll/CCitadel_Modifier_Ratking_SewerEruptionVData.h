#pragma once

class CCitadel_Modifier_Ratking_SewerEruptionVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA78, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyAuraModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AnticipationSound; // offset 0x7A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0x7B8, size 0x10, align 8
    float32 m_flExplosionHalfHeightMeters; // offset 0x7C8, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flTossSpeed; // offset 0x7CC, size 0x4, align 4 | MPropertyDescription
    float32 m_flTossGravityScale; // offset 0x7D0, size 0x4, align 4 | MPropertyDescription
    char _pad_07D4[0x4]; // offset 0x7D4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnticipationParticle; // offset 0x7D8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x8B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_SewerModel; // offset 0x998, size 0xE0, align 8
};
