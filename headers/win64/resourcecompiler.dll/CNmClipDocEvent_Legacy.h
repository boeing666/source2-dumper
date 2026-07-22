#pragma once

class CNmClipDocEvent_Legacy : public CNmClipDocEvent /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_eventClass; // offset 0x10, size 0x8, align 8 | MPropertyAutoRebuildOnChange
    KeyValues3 m_KV; // offset 0x18, size 0x10, align 8 | MPropertySuppressField
};
