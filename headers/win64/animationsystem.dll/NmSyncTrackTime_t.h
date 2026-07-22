#pragma once

struct NmSyncTrackTime_t  // sizeof 0x8, align 0x4 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    int32 m_nEventIdx; // offset 0x0, size 0x4, align 4
    NmPercent_t m_percentageThrough; // offset 0x4, size 0x4, align 4
};
