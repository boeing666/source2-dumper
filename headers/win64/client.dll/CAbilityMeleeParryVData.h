#pragma once

class CAbilityMeleeParryVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1728, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flWhiffDuration; // offset 0x13E8, size 0x4, align 4
    float32 m_flMovementRestrictionTime; // offset 0x13EC, size 0x4, align 4
    float32 m_flActiveTime; // offset 0x13F0, size 0x4, align 4
    float32 m_flParryEndVisualTime; // offset 0x13F4, size 0x4, align 4
    float32 m_flSuccessActiveTime; // offset 0x13F8, size 0x4, align 4
    float32 m_flMashProtectTime; // offset 0x13FC, size 0x4, align 4
    float32 m_flBossVictimNoMeleeTime; // offset 0x1400, size 0x4, align 4
    float32 m_flBossVictimCalmTime; // offset 0x1404, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // offset 0x1408, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulAbilityParryParticle; // offset 0x14E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveParryParticle; // offset 0x15C8, size 0xE0, align 8
    CSoundEventName m_strSuccessfulParrySound; // offset 0x16A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSuccessfulParryTrooperSound; // offset 0x16B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryActiveModifier; // offset 0x16C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // offset 0x16D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryCooldownModifier; // offset 0x16E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryEndVisualModifier; // offset 0x16F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimNoMeleeModifier; // offset 0x1708, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimCalmModifier; // offset 0x1718, size 0x10, align 8
};
