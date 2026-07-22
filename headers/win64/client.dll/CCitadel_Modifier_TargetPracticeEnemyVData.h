#pragma once

class CCitadel_Modifier_TargetPracticeEnemyVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuildupCompleteModifier; // offset 0x760, size 0x10, align 8
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // offset 0x770, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x780, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x860, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeadParticle; // offset 0x940, size 0xE0, align 8
    CSoundEventName m_strTargetHitSound; // offset 0xA20, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTargetHeadShotHitSound; // offset 0xA30, size 0x10, align 8
    CSoundEventName m_strTargetCompleteSound; // offset 0xA40, size 0x10, align 8
};
