#pragma once

class CModifierUppercuttedVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunParticle; // offset 0x760, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strStunSound; // offset 0x840, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strExplodeHitSound; // offset 0x850, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NoExplodeModifier; // offset 0x860, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ExplodeDebuffModifier; // offset 0x870, size 0x10, align 8
    float32 m_flEnemyNoAirDashDuration; // offset 0x880, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0884[0x4]; // offset 0x884
};
