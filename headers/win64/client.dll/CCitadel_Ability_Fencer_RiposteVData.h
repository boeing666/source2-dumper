#pragma once

class CCitadel_Ability_Fencer_RiposteVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1B20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RiposteDashParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RiposteParriedParticle; // offset 0x19D8, size 0xE0, align 8
    CSoundEventName m_strDashStart; // offset 0x1AB8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStunImpactSound; // offset 0x1AC8, size 0x10, align 8
    CSoundEventName m_strAvoidDamage; // offset 0x1AD8, size 0x10, align 8
    CSoundEventName m_strStartParry; // offset 0x1AE8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1AF8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flAirSpeedMax; // offset 0x1B08, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x1B0C, size 0x4, align 4
    float32 m_flFallSpeedMax; // offset 0x1B10, size 0x4, align 4
    float32 m_flParryMoveSpeed; // offset 0x1B14, size 0x4, align 4
    float32 m_flDashAnimDelay; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
