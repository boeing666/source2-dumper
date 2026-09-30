#pragma once

class CCitadel_Modifier_Unicorn_PrismaticGuardVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x9F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CSoundEventName m_strExplodeSound; // offset 0x760, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDestroyedSound; // offset 0x770, size 0x10, align 8
    CSoundEventName m_strCrackingSound; // offset 0x780, size 0x10, align 8
    CITADEL_UNIT_TARGET_TYPE m_eExplosionTargetingType; // offset 0x790, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0794[0x4]; // offset 0x794
    CCitadelProjectileTrackingParams m_TrackingParams; // offset 0x798, size 0x90, align 8
    float32 m_flVerticalBoost; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x4]; // offset 0x82C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x830, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // offset 0x910, size 0xE0, align 8
};
