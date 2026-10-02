#pragma once

class CCitadel_Modifier_ItemPunchable_RejuvVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xC30, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    int32 m_iRejuvBossKill01; // offset 0x790, size 0x4, align 4
    int32 m_iRejuvBossKill02; // offset 0x794, size 0x4, align 4
    float32 m_flPhysicsRadius; // offset 0x798, size 0x4, align 4
    float32 m_flMaxDistForHeal; // offset 0x79C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsDroppingParticle; // offset 0x7A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsPunchableParticle; // offset 0x880, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsFrozenParticle; // offset 0x960, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamagedParticle; // offset 0xA40, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEHealParticle; // offset 0xB20, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NearRejuvAuraModifier; // offset 0xC00, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ParryCheckModifier; // offset 0xC10, size 0x10, align 8
    CSoundEventName m_sHitSound; // offset 0xC20, size 0x10, align 8 | MPropertyGroupName
};
