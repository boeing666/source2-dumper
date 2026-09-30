#pragma once

class CCitadel_Modifier_Basic_DOTVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strDamageParticle; // offset 0x760, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strDamageSound; // offset 0x840, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flTickInterval; // offset 0x850, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0854[0x4]; // offset 0x854
    TakeDamageFlags_t m_damageFlags; // offset 0x858, size 0x8, align 8
    DamageTypes_t m_damagetype; // offset 0x860, size 0x4, align 4
    bool m_bSnapshotDPS; // offset 0x864, size 0x1, align 1
    char _pad_0865[0x3]; // offset 0x865
    CUtlString m_strDPSAbilityPropertyName; // offset 0x868, size 0x8, align 8
};
