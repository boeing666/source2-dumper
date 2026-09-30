#pragma once

class ConstraintSoundInfo  // sizeof 0x98, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    VelocitySampler m_vSampler; // offset 0x8, size 0x14, align 255 | MNotSaved
    char _pad_001C[0x4]; // offset 0x1C
    SimpleConstraintSoundProfile m_soundProfile; // offset 0x20, size 0x20, align 8
    Vector m_forwardAxis; // offset 0x40, size 0xC, align 4 | MNotSaved
    char _pad_004C[0x4]; // offset 0x4C
    CUtlSymbolLarge m_iszTravelSoundFwd; // offset 0x50, size 0x8, align 8
    CUtlSymbolLarge m_iszTravelSoundBack; // offset 0x58, size 0x8, align 8
    char _pad_0060[0x18]; // offset 0x60
    CUtlSymbolLarge m_iszReversalSoundSmall; // offset 0x78, size 0x8, align 8
    CUtlSymbolLarge m_iszReversalSoundMedium; // offset 0x80, size 0x8, align 8
    CUtlSymbolLarge m_iszReversalSoundLarge; // offset 0x88, size 0x8, align 8
    bool m_bPlayTravelSound; // offset 0x90, size 0x1, align 1 | MNotSaved
    bool m_bPlayReversalSound; // offset 0x91, size 0x1, align 1 | MNotSaved
    char _pad_0092[0x6]; // offset 0x92
};
