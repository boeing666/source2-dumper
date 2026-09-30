#pragma once

struct VMixEQFilterDesc_t : public VMixFilterDesc_t /*0x0*/  // sizeof 0x14, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x10]; // offset 0x0
    VMixFilterChannelSet_t m_nChannelSet; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
};
