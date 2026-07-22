#pragma once

struct SamplerVoice_t  // sizeof 0x8, align 0xFF [trivial_dtor] (soundsystem)
{
    uint8 nNoteNum; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x7]; // offset 0x1
};
