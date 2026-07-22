#pragma once

struct NmSyncTrackTimeRange_t  // sizeof 0x10, align 0x4 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    NmSyncTrackTime_t m_startTime; // offset 0x0, size 0x8, align 4
    NmSyncTrackTime_t m_endTime; // offset 0x8, size 0x8, align 4
};
