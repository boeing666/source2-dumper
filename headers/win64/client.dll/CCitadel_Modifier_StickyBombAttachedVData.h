#pragma once

class CCitadel_Modifier_StickyBombAttachedVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB60, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunAttachedParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x958, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedVictimTeamParticle; // offset 0xA38, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0xB18, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTickTockSound; // offset 0xB28, size 0x10, align 8
    CSoundEventName m_strTickTockFastSound; // offset 0xB38, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_OnGroundModifier; // offset 0xB48, size 0x10, align 8 | MPropertyGroupName
    float32 m_DetonateWarningTime; // offset 0xB58, size 0x4, align 4
    char _pad_0B5C[0x4]; // offset 0xB5C
};
