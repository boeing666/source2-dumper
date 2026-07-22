#pragma once

class CSteamAudioProbeGrid  // sizeof 0x58, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    AABB_t m_aabb; // offset 0x0, size 0x18, align 255
    float32 m_flSpacing; // offset 0x18, size 0x4, align 4
    int32 m_nx; // offset 0x1C, size 0x4, align 4
    int32 m_ny; // offset 0x20, size 0x4, align 4
    int32 m_nz; // offset 0x24, size 0x4, align 4
    CUtlVector< CSteamAudioProbeLineSegment > m_vecLineSegments; // offset 0x28, size 0x18, align 8
    CUtlVector< Vector > m_vecProbes; // offset 0x40, size 0x18, align 8
};
