#pragma once

class CCitadel_Modifier_NeutralSelfCastBombVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x1508, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1140]; // offset 0x0
    float32 m_flRadius; // offset 0x1140, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flExplodeTime; // offset 0x1144, size 0x4, align 4
    float32 m_flDamage; // offset 0x1148, size 0x4, align 4
    char _pad_114C[0x4]; // offset 0x114C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedParticle; // offset 0x1150, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedStatusEffectParticle; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x1310, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13F0, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x14D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTickTockSound; // offset 0x14E0, size 0x10, align 8
    CSoundEventName m_strTickTockFastSound; // offset 0x14F0, size 0x10, align 8
    float32 m_DetonateWarningTime; // offset 0x1500, size 0x4, align 4
    char _pad_1504[0x4]; // offset 0x1504
};
