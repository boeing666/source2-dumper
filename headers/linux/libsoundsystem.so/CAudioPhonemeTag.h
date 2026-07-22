#pragma once

class CAudioPhonemeTag  // sizeof 0xC, align 0x4 [trivial_dtor] (soundsystem_voicecontainers) {MGetKV3ClassDefaults}
{
public:
    float32 m_flStartTime; // offset 0x0, size 0x4, align 4
    float32 m_flEndTime; // offset 0x4, size 0x4, align 4
    int32 m_nPhonemeCode; // offset 0x8, size 0x4, align 4
};
