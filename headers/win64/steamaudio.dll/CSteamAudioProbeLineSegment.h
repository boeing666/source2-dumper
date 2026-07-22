#pragma once

class CSteamAudioProbeLineSegment  // sizeof 0x48, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    Vector m_vStart; // offset 0x0, size 0xC, align 4
    Vector m_vEnd; // offset 0xC, size 0xC, align 4
    CUtlVector< float32 > m_vecIntervals; // offset 0x18, size 0x18, align 8
    CUtlVector< int32 > m_vecProbeIndices; // offset 0x30, size 0x18, align 8
};
