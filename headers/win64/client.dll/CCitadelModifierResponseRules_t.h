#pragma once

struct CCitadelModifierResponseRules_t  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CitadelConcept_t m_nConcept; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlOrderedMap< CUtlString, CUtlString > m_Criteria; // offset 0x8, size 0x28, align 8
    CCitadelModifierResponseRulesFilterType_t m_nFilterType; // offset 0x30, size 0x4, align 4
    CCitadelModifierSpeaker_t m_nSpeakerType; // offset 0x34, size 0x4, align 4
};
