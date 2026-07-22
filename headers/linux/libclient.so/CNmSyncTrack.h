#pragma once

class CNmSyncTrack  // sizeof 0xB0, align 0x8 (animlib) {MGetKV3ClassDefaults}
{
public:
    CUtlLeanVectorFixedGrowable< CNmSyncTrack::Event_t, 10 > m_syncEvents; // offset 0x0, size 0xA8, align 8
    int32 m_nStartEventOffset; // offset 0xA8, size 0x4, align 4
    char _pad_00AC[0x4]; // offset 0xAC
};
