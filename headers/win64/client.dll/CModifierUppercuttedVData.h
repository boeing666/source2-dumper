#pragma once

class CModifierUppercuttedVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunParticle; // offset 0x798, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strStunSound; // offset 0x878, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strExplodeHitSound; // offset 0x888, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NoExplodeModifier; // offset 0x898, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ExplodeDebuffModifier; // offset 0x8A8, size 0x10, align 8
    float32 m_flEnemyNoAirDashDuration; // offset 0x8B8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_08BC[0x4]; // offset 0x8BC
};
