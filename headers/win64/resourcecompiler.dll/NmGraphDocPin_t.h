#pragma once

struct NmGraphDocPin_t  // sizeof 0x20, align 0x8 (animdoclib) {MGetKV3ClassDefaults}
{
    V_uuid_t m_ID; // offset 0x0, size 0x10, align 4
    CUtlString m_name; // offset 0x10, size 0x8, align 8
    NmGraphValueType_t m_type; // offset 0x18, size 0x1, align 1
    bool m_bIsDynamicPin; // offset 0x19, size 0x1, align 1
    bool m_bAllowMultipleOutConnections; // offset 0x1A, size 0x1, align 1
    char _pad_001B[0x5]; // offset 0x1B
};
