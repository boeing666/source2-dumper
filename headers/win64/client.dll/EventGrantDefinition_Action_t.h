#pragma once

struct EventGrantDefinition_Action_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    EEvent m_eEvent; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    uint32 m_unGrantCount; // offset 0x10, size 0x4, align 4
    bool m_bShouldSkipAudit; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
};
