#pragma once

struct EventGrantDefinition_Effect_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strEffectName; // offset 0x8, size 0x8, align 8
    CUtlString m_strImage; // offset 0x10, size 0x8, align 8
    CUtlString m_strScene; // offset 0x18, size 0x8, align 8
    CUtlString m_strVideo; // offset 0x20, size 0x8, align 8
    uint32 m_unEffectIndex; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
