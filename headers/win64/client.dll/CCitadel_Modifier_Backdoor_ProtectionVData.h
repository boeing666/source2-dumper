#pragma once

class CCitadel_Modifier_Backdoor_ProtectionVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flActivationTime; // offset 0x760, size 0x4, align 4 | MPropertyDescription
    float32 m_flBackdoorProtectionDamageMitigationFromPlayers; // offset 0x764, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flBackdoorProtectionDamageMitigationFromPlayers_Streetbrawl; // offset 0x768, size 0x4, align 4
    float32 m_flHealthPerSecondRegen; // offset 0x76C, size 0x4, align 4 | MPropertyDescription
    float32 m_flOutOfCombatHealthRegen; // offset 0x770, size 0x4, align 4 | MPropertyDescription
    float32 m_flOutOfCombatRegenDelay; // offset 0x774, size 0x4, align 4 | MPropertyDescription
    float32 m_flEffectsLingerTime; // offset 0x778, size 0x4, align 4 | MPropertyDescription
    char _pad_077C[0x4]; // offset 0x77C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldImpactParticle; // offset 0x780, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldActiveParticle; // offset 0x860, size 0xE0, align 8
    CUtlString m_strActiveEffectConfigName; // offset 0x940, size 0x8, align 8
    float32 flShieldImpactDirectionOffset; // offset 0x948, size 0x4, align 4
    char _pad_094C[0x4]; // offset 0x94C
};
