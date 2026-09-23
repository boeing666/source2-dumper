#pragma once

struct VMixEQFilterDesc_t : public VMixFilterDesc_t /*0x0*/  // sizeof 0x10, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    char _pad_0000[0xF]; // offset 0x0
    VMixFilterChannelSet_t m_nChannelSet; // offset 0xF, size 0x1, align 1
};
