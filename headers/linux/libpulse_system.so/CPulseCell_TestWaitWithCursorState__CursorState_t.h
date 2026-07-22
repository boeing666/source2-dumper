#pragma once

struct CPulseCell_TestWaitWithCursorState::CursorState_t  // sizeof 0x24, align 0x4 [trivial_dtor] (pulse_system) {MGetKV3ClassDefaults}
{
    float32 flWaitValue; // offset 0x0, size 0x4, align 4
    bool bFail; // offset 0x4, size 0x1, align 1
    char _pad_0005[0x3]; // offset 0x5
    HYieldedCursor m_hSelfCursor; // offset 0x8, size 0xC, align 4
    HPulseCellBase m_hSelfCellInstanceUntyped; // offset 0x14, size 0x8, align 4
    HPulseCell< CPulseCell_TestWaitWithCursorState > m_hSelfCellInstance; // offset 0x1C, size 0x8, align 4
};
