#pragma once

class CModifierApplyModifierOnDamageTakenVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CUtlVector< ECitadelDamageType > m_vecDamageTypes; // offset 0x790, size 0x18, align 8 | MPropertyGroupName MPropertyDescription
    CEmbeddedSubclass< CBaseModifier > m_TargetModifier; // offset 0x7A8, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_TargetModifierDurationAbilityProp; // offset 0x7B8, size 0x8, align 8 | MPropertyDescription
    CEmbeddedSubclass< CBaseModifier > m_SelfModifier; // offset 0x7C0, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_SelfModifierDurationAbilityProp; // offset 0x7D0, size 0x8, align 8 | MPropertyDescription
};
