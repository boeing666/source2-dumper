#pragma once

class CCitadel_Modifier_Backdoor_ProtectionVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x980, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_flActivationTime; // offset 0x790, size 0x4, align 4 | MPropertyDescription
    float32 m_flBackdoorProtectionDamageMitigationFromPlayers; // offset 0x794, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flBackdoorProtectionDamageMitigationFromPlayers_Streetbrawl; // offset 0x798, size 0x4, align 4
    float32 m_flHealthPerSecondRegen; // offset 0x79C, size 0x4, align 4 | MPropertyDescription
    float32 m_flOutOfCombatHealthRegen; // offset 0x7A0, size 0x4, align 4 | MPropertyDescription
    float32 m_flOutOfCombatRegenDelay; // offset 0x7A4, size 0x4, align 4 | MPropertyDescription
    float32 m_flEffectsLingerTime; // offset 0x7A8, size 0x4, align 4 | MPropertyDescription
    char _pad_07AC[0x4]; // offset 0x7AC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldImpactParticle; // offset 0x7B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldActiveParticle; // offset 0x890, size 0xE0, align 8
    CUtlString m_strActiveEffectConfigName; // offset 0x970, size 0x8, align 8
    float32 flShieldImpactDirectionOffset; // offset 0x978, size 0x4, align 4
    char _pad_097C[0x4]; // offset 0x97C
};
