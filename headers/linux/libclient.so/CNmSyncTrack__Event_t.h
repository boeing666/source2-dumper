#pragma once

struct CNmSyncTrack::Event_t  // sizeof 0x10, align 0x8 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8
    NmPercent_t m_startTime; // offset 0x8, size 0x4, align 4
    NmPercent_t m_duration; // offset 0xC, size 0x4, align 4
};
