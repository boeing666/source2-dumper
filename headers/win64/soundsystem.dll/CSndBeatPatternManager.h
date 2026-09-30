#pragma once

class CSndBeatPatternManager  // sizeof 0x90, align 0x8 [vtable] (soundsystem) {MVDataRoot MVDataSingleton MPropertyFriendlyName MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CUtlVector< CSndBeatPattern > m_vecPatterns; // offset 0x38, size 0x18, align 8 | MPropertyFriendlyName MVDataPromoteField
    char _pad_0050[0x20]; // offset 0x50
    CUtlVector< CSndBeatTrack > m_vecActiveTracks; // offset 0x70, size 0x18, align 8 | MPropertyFriendlyName MVDataPromoteField
    char _pad_0088[0x8]; // offset 0x88
};
