#pragma once

struct PingConditions_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< Class_T > m_vecEntityClasses; // offset 0x0, size 0x18, align 8 | MPropertyDescription
    EPingTargetAllegiance_t m_eAllegiance; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    EPingSubjectSourceContext_t m_eSourceContext; // offset 0x1C, size 0x4, align 4 | MPropertyDescription
    EPingTristate_t m_eUltimateReady; // offset 0x20, size 0x4, align 4 | MPropertyDescription
    EPingTristate_t m_eUltimateTrained; // offset 0x24, size 0x4, align 4 | MPropertyDescription
    EPingTristate_t m_eSubjectAlive; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    EPingTristate_t m_eSubjectVisible; // offset 0x2C, size 0x4, align 4 | MPropertyDescription
};
