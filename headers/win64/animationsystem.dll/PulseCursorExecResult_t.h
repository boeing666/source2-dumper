#pragma once

enum PulseCursorExecResult_t : uint32_t  // sizeof 0x4
{
    Succeeded = 0,
    Canceled = 1,
    Failed = 2,
    OngoingNotify = 3,
};
