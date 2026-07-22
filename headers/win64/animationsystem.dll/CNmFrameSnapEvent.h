#pragma once

class CNmFrameSnapEvent : public CNmEvent /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    NmFrameSnapEventMode_t m_frameSnapMode; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
};
