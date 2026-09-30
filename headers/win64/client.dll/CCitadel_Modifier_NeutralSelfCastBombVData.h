#pragma once

class CCitadel_Modifier_NeutralSelfCastBombVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x1480, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10B8]; // offset 0x0
    float32 m_flRadius; // offset 0x10B8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flExplodeTime; // offset 0x10BC, size 0x4, align 4
    float32 m_flDamage; // offset 0x10C0, size 0x4, align 4
    char _pad_10C4[0x4]; // offset 0x10C4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedParticle; // offset 0x10C8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedStatusEffectParticle; // offset 0x11A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x1288, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1368, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1448, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTickTockSound; // offset 0x1458, size 0x10, align 8
    CSoundEventName m_strTickTockFastSound; // offset 0x1468, size 0x10, align 8
    float32 m_DetonateWarningTime; // offset 0x1478, size 0x4, align 4
    char _pad_147C[0x4]; // offset 0x147C
};
