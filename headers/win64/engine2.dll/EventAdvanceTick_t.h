#pragma once

struct EventAdvanceTick_t : public EventSimulate_t /*0x0*/  // sizeof 0x40, align 0xFF [trivial_dtor] (engine2)
{
    char _pad_0000[0x30]; // offset 0x0
    int32 m_nCurrentTick; // offset 0x30, size 0x4, align 4
    int32 m_nCurrentTickThisFrame; // offset 0x34, size 0x4, align 4
    int32 m_nTotalTicksThisFrame; // offset 0x38, size 0x4, align 4
    int32 m_nTotalTicks; // offset 0x3C, size 0x4, align 4
};
