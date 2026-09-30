#pragma once

class CCitadel_Modifier_StickyBombAttachedVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunAttachedParticle; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x920, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedVictimTeamParticle; // offset 0xA00, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0xAE0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTickTockSound; // offset 0xAF0, size 0x10, align 8
    CSoundEventName m_strTickTockFastSound; // offset 0xB00, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_OnGroundModifier; // offset 0xB10, size 0x10, align 8 | MPropertyGroupName
    float32 m_DetonateWarningTime; // offset 0xB20, size 0x4, align 4
    char _pad_0B24[0x4]; // offset 0xB24
};
