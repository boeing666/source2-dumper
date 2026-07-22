#pragma once

struct CitadelArpeggiator_t  // sizeof 0x150, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CSoundEventName m_strSamplerEvent; // offset 0x0, size 0x10, align 8
    CitadelMidiNotePitch_t m_nLowestNote; // offset 0x10, size 0x4, align 4
    CitadelMidiNotePitch_t m_nHighestNote; // offset 0x14, size 0x4, align 4
    CitadelArpeggiatorMode_t m_nDefaultArpMode; // offset 0x18, size 0x4, align 4
    int32 m_nTransposeSteps; // offset 0x1C, size 0x4, align 4
    char _pad_0020[0x130]; // offset 0x20
};
