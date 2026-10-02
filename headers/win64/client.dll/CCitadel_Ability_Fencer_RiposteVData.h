#pragma once

class CCitadel_Ability_Fencer_RiposteVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1720, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RiposteDashParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RiposteParriedParticle; // offset 0x15A8, size 0xE0, align 8
    CSoundEventName m_strDashStart; // offset 0x1688, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStunImpactSound; // offset 0x1698, size 0x10, align 8
    CSoundEventName m_strAvoidDamage; // offset 0x16A8, size 0x10, align 8
    CSoundEventName m_strStartParry; // offset 0x16B8, size 0x10, align 8
    CSoundEventName m_strTargetingLoopSound; // offset 0x16C8, size 0x10, align 8
    CSoundEventName m_strTargetingExpireSound; // offset 0x16D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x16E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TargetLifestealModifier; // offset 0x16F8, size 0x10, align 8
    float32 m_flAirSpeedMax; // offset 0x1708, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x170C, size 0x4, align 4
    float32 m_flFallSpeedMax; // offset 0x1710, size 0x4, align 4
    float32 m_flParryMoveSpeed; // offset 0x1714, size 0x4, align 4
    float32 m_flDashAnimDelay; // offset 0x1718, size 0x4, align 4
    char _pad_171C[0x4]; // offset 0x171C
};
