#pragma once

enum PulseCursorCancelPriority_t : uint32_t  // sizeof 0x4
{
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};
