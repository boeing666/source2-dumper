#pragma once

class CNmClipDocEvent_BodyGroup : public CNmClipDocEvent /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CNmEventTargetEntity_t m_target; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlString m_bodygroup; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_choice; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName
};
