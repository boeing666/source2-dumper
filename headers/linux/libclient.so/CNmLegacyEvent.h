#pragma once

class CNmLegacyEvent : public CNmEvent /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CUtlString m_animEventClassName; // offset 0x18, size 0x8, align 8
    KeyValues3 m_KV; // offset 0x20, size 0x10, align 8
    char _pad_0030[0x20]; // offset 0x30
};
