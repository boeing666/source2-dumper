#pragma once

struct CitadelMusicChord_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults}
{
    float32 m_flStartTime; // offset 0x0, size 0x4, align 4
    CitadelArpeggiatorMode_t m_ArpeggiatorMode; // offset 0x4, size 0x4, align 4
    uint8 m_nNumOctaves; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x7]; // offset 0x9
    CUtlVector< CitadelMidiNotePitch_t > m_ChordVoicing; // offset 0x10, size 0x18, align 8
};
