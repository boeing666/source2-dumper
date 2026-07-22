#pragma once

class CCitadel_Modifier_ItemPunchable_RejuvVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    int32 m_iRejuvBossKill01; // offset 0x750, size 0x4, align 4
    int32 m_iRejuvBossKill02; // offset 0x754, size 0x4, align 4
    float32 m_flPhysicsRadius; // offset 0x758, size 0x4, align 4
    float32 m_flMaxDistForHeal; // offset 0x75C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsDroppingParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsPunchableParticle; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsFrozenParticle; // offset 0x920, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamagedParticle; // offset 0xA00, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEHealParticle; // offset 0xAE0, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NearRejuvAuraModifier; // offset 0xBC0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ParryCheckModifier; // offset 0xBD0, size 0x10, align 8
    CSoundEventName m_sHitSound; // offset 0xBE0, size 0x10, align 8 | MPropertyGroupName
};
