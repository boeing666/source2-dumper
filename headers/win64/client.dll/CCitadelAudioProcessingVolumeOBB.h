#pragma once

class CCitadelAudioProcessingVolumeOBB : public CCitadelAudioProcessingVolumeBase /*0x0*/  // sizeof 0x6B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    Vector m_vMins; // offset 0x600, size 0xC, align 4
    Vector m_vMaxs; // offset 0x60C, size 0xC, align 4
    char _pad_0618[0x98]; // offset 0x618
};
