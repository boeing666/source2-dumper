#pragma once

class CNmClipDocEvent_Sound : public CNmClipDocEvent_SoundBase /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CUtlString m_name; // offset 0x30, size 0x8, align 8 | MPropertyStartGroup MPropertyAttributeEditor
    CUtlString m_tags; // offset 0x38, size 0x8, align 8 | MPropertyStartGroup
};
