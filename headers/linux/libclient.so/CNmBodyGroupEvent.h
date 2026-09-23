#pragma once

class CNmBodyGroupEvent : public CNmEvent /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CNmEventTargetEntity_t m_target; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CUtlString m_groupName; // offset 0x20, size 0x8, align 8
    CUtlString m_choiceName; // offset 0x28, size 0x8, align 8
};
