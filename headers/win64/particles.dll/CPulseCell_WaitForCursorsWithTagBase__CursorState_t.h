#pragma once

struct CPulseCell_WaitForCursorsWithTagBase::CursorState_t  // sizeof 0x30, align 0xFF (pulse_runtime_lib)
{
    PulseSymbol_t m_TagName; // offset 0x0, size 0x10, align 8
    char _pad_0010[0x20]; // offset 0x10
};
