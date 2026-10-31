#pragma once

class CCitadel_Modifier_Basic_DOTVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strDamageParticle; // offset 0x798, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strDamageSound; // offset 0x878, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flTickInterval; // offset 0x888, size 0x4, align 4 | MPropertyStartGroup
    char _pad_088C[0x4]; // offset 0x88C
    TakeDamageFlags_t m_damageFlags; // offset 0x890, size 0x8, align 8
    DamageTypes_t m_damagetype; // offset 0x898, size 0x4, align 4
    bool m_bSnapshotDPS; // offset 0x89C, size 0x1, align 1
    char _pad_089D[0x3]; // offset 0x89D
    CUtlString m_strDPSAbilityPropertyName; // offset 0x8A0, size 0x8, align 8
};
