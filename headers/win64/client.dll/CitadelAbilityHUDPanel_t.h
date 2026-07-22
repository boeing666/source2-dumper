#pragma once

struct CitadelAbilityHUDPanel_t  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< CitadelAbilityHUDElement_t > m_vecHUDElements; // offset 0x0, size 0x18, align 8
    CUtlVector< CitadelAbilityHUDElementButtonHint_t > m_vecButtonHints; // offset 0x18, size 0x18, align 8
    bool m_bForceDrawDefaultCastBars; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x7]; // offset 0x31
};
