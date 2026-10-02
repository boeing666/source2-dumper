#pragma once

class CCitadel_Modifier_NeutralSelfCastBombVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x14B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10E8]; // offset 0x0
    float32 m_flRadius; // offset 0x10E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flExplodeTime; // offset 0x10EC, size 0x4, align 4
    float32 m_flDamage; // offset 0x10F0, size 0x4, align 4
    char _pad_10F4[0x4]; // offset 0x10F4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedParticle; // offset 0x10F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedStatusEffectParticle; // offset 0x11D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x12B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1398, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1478, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTickTockSound; // offset 0x1488, size 0x10, align 8
    CSoundEventName m_strTickTockFastSound; // offset 0x1498, size 0x10, align 8
    float32 m_DetonateWarningTime; // offset 0x14A8, size 0x4, align 4
    char _pad_14AC[0x4]; // offset 0x14AC
};
