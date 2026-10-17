#pragma once

struct EventGrantDefinition_NewsFeedEvent_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    ESocialFeedEventType m_eEventType; // offset 0x8, size 0x4, align 4
    uint16 m_unEventSubType; // offset 0xC, size 0x2, align 2
    char _pad_000E[0x2]; // offset 0xE
    uint64 m_ulParamBigInt1; // offset 0x10, size 0x8, align 8
    uint32 m_unParamInt1; // offset 0x18, size 0x4, align 4
    uint32 m_unParamInt2; // offset 0x1C, size 0x4, align 4
    uint32 m_unParamInt3; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlString m_strParamString; // offset 0x28, size 0x8, align 8
};
