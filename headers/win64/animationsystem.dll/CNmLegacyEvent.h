#pragma once

class CNmLegacyEvent : public CNmEvent /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString m_animEventClassName; // offset 0x20, size 0x8, align 8
    KeyValues3 m_KV; // offset 0x28, size 0x10, align 8
    char _pad_0038[0x20]; // offset 0x38
};
