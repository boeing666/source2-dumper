#pragma once

struct PingTargetMatch_t  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< Class_T > m_vecEntityClasses; // offset 0x0, size 0x18, align 8 | MPropertyDescription
    EPingSubjectSelf_t m_eSubjectIsSelf; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    char _pad_001C[0x4]; // offset 0x1C
    CUtlVector< CUtlString > m_vecEntityClassnames; // offset 0x20, size 0x18, align 8 | MPropertyDescription
    EPingTargetAllegiance_t m_eAllegiance; // offset 0x38, size 0x4, align 4 | MPropertyDescription
    EPingTristate_t m_eSubjectHoldingUrn; // offset 0x3C, size 0x4, align 4 | MPropertyDescription
};
