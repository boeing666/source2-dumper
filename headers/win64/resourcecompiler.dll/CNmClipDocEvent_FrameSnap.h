#pragma once

class CNmClipDocEvent_FrameSnap : public CNmClipDocEvent /*0x0*/  // sizeof 0x18, align 0x8 [vtable trivial_dtor] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    NmFrameSnapEventMode_t m_frameSnapMode; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
