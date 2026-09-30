#pragma once

class CCitadel_Ability_Fencer_RiposteVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RiposteDashParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RiposteParriedParticle; // offset 0x1560, size 0xE0, align 8
    CSoundEventName m_strDashStart; // offset 0x1640, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStunImpactSound; // offset 0x1650, size 0x10, align 8
    CSoundEventName m_strAvoidDamage; // offset 0x1660, size 0x10, align 8
    CSoundEventName m_strStartParry; // offset 0x1670, size 0x10, align 8
    CSoundEventName m_strTargetingLoopSound; // offset 0x1680, size 0x10, align 8
    CSoundEventName m_strTargetingExpireSound; // offset 0x1690, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x16A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TargetLifestealModifier; // offset 0x16B0, size 0x10, align 8
    float32 m_flAirSpeedMax; // offset 0x16C0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x16C4, size 0x4, align 4
    float32 m_flFallSpeedMax; // offset 0x16C8, size 0x4, align 4
    float32 m_flParryMoveSpeed; // offset 0x16CC, size 0x4, align 4
    float32 m_flDashAnimDelay; // offset 0x16D0, size 0x4, align 4
    char _pad_16D4[0x4]; // offset 0x16D4
};
