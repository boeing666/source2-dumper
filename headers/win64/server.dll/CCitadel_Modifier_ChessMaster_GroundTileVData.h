#pragma once

class CCitadel_Modifier_ChessMaster_GroundTileVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB50, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundWarningParticle; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundExplosionParticle; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0xA30, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0xB10, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strActivationSound; // offset 0xB20, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAuraHitNPCSound; // offset 0xB30, size 0x10, align 8
    bool m_bDestroyOnParentMove; // offset 0xB40, size 0x1, align 1 | MPropertyStartGroup
    bool m_bDestroyOnParentLost; // offset 0xB41, size 0x1, align 1
    bool m_bShouldApplySlow; // offset 0xB42, size 0x1, align 1
    bool m_bDoDPS; // offset 0xB43, size 0x1, align 1
    bool m_bDetonate; // offset 0xB44, size 0x1, align 1
    bool m_bDetonateOnActivate; // offset 0xB45, size 0x1, align 1
    bool m_bWaitUntilParentOffCooldown; // offset 0xB46, size 0x1, align 1
    char _pad_0B47[0x1]; // offset 0xB47
    float32 m_flActivationDelay; // offset 0xB48, size 0x4, align 4
    char _pad_0B4C[0x4]; // offset 0xB4C
};
