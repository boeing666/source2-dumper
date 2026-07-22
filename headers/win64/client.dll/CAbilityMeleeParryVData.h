#pragma once

class CAbilityMeleeParryVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1B58, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flWhiffDuration; // offset 0x1818, size 0x4, align 4
    float32 m_flMovementRestrictionTime; // offset 0x181C, size 0x4, align 4
    float32 m_flActiveTime; // offset 0x1820, size 0x4, align 4
    float32 m_flParryEndVisualTime; // offset 0x1824, size 0x4, align 4
    float32 m_flSuccessActiveTime; // offset 0x1828, size 0x4, align 4
    float32 m_flMashProtectTime; // offset 0x182C, size 0x4, align 4
    float32 m_flBossVictimNoMeleeTime; // offset 0x1830, size 0x4, align 4
    float32 m_flBossVictimCalmTime; // offset 0x1834, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // offset 0x1838, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulAbilityParryParticle; // offset 0x1918, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveParryParticle; // offset 0x19F8, size 0xE0, align 8
    CSoundEventName m_strSuccessfulParrySound; // offset 0x1AD8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSuccessfulParryTrooperSound; // offset 0x1AE8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryActiveModifier; // offset 0x1AF8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // offset 0x1B08, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryCooldownModifier; // offset 0x1B18, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryEndVisualModifier; // offset 0x1B28, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimNoMeleeModifier; // offset 0x1B38, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimCalmModifier; // offset 0x1B48, size 0x10, align 8
};
