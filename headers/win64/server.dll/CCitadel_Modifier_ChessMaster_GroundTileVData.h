#pragma once

class CCitadel_Modifier_ChessMaster_GroundTileVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB58, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundWarningParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundExplosionParticle; // offset 0x958, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0xA38, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0xB18, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strActivationSound; // offset 0xB28, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAuraHitNPCSound; // offset 0xB38, size 0x10, align 8
    bool m_bDestroyOnParentMove; // offset 0xB48, size 0x1, align 1 | MPropertyStartGroup
    bool m_bDestroyOnParentLost; // offset 0xB49, size 0x1, align 1
    bool m_bShouldApplySlow; // offset 0xB4A, size 0x1, align 1
    bool m_bDoDPS; // offset 0xB4B, size 0x1, align 1
    bool m_bDetonate; // offset 0xB4C, size 0x1, align 1
    bool m_bDetonateOnActivate; // offset 0xB4D, size 0x1, align 1
    bool m_bWaitUntilParentOffCooldown; // offset 0xB4E, size 0x1, align 1
    char _pad_0B4F[0x1]; // offset 0xB4F
    float32 m_flActivationDelay; // offset 0xB50, size 0x4, align 4
    char _pad_0B54[0x4]; // offset 0xB54
};
