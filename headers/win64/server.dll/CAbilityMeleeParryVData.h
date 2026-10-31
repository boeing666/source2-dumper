#pragma once

class CAbilityMeleeParryVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_flWhiffDuration; // offset 0x1080, size 0x4, align 4
    float32 m_flMovementRestrictionTime; // offset 0x1084, size 0x4, align 4
    float32 m_flActiveTime; // offset 0x1088, size 0x4, align 4
    float32 m_flParryEndVisualTime; // offset 0x108C, size 0x4, align 4
    float32 m_flSuccessActiveTime; // offset 0x1090, size 0x4, align 4
    float32 m_flMashProtectTime; // offset 0x1094, size 0x4, align 4
    float32 m_flBossVictimNoMeleeTime; // offset 0x1098, size 0x4, align 4
    float32 m_flBossVictimCalmTime; // offset 0x109C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulAbilityParryParticle; // offset 0x1180, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveParryParticle; // offset 0x1260, size 0xE0, align 8
    CSoundEventName m_strSuccessfulParrySound; // offset 0x1340, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSuccessfulParryTrooperSound; // offset 0x1350, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryActiveModifier; // offset 0x1360, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // offset 0x1370, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryCooldownModifier; // offset 0x1380, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryEndVisualModifier; // offset 0x1390, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimNoMeleeModifier; // offset 0x13A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimCalmModifier; // offset 0x13B0, size 0x10, align 8
};
