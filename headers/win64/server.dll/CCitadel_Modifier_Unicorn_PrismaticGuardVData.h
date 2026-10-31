#pragma once

class CCitadel_Modifier_Unicorn_PrismaticGuardVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA28, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CSoundEventName m_strExplodeSound; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDestroyedSound; // offset 0x7A8, size 0x10, align 8
    CSoundEventName m_strCrackingSound; // offset 0x7B8, size 0x10, align 8
    CITADEL_UNIT_TARGET_TYPE m_eExplosionTargetingType; // offset 0x7C8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_07CC[0x4]; // offset 0x7CC
    CCitadelProjectileTrackingParams m_TrackingParams; // offset 0x7D0, size 0x90, align 8
    float32 m_flVerticalBoost; // offset 0x860, size 0x4, align 4
    char _pad_0864[0x4]; // offset 0x864
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x868, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // offset 0x948, size 0xE0, align 8
};
