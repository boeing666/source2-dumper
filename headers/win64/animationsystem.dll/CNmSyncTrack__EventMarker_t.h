#pragma once

struct CNmSyncTrack::EventMarker_t  // sizeof 0x10, align 0x8 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    NmPercent_t m_startTime; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CGlobalSymbol m_ID; // offset 0x8, size 0x8, align 8
};
