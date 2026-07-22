#pragma once

enum EClientUIEvent : uint32_t  // sizeof 0x4
{
    EClientUIEvent_Invalid = 0,
    EClientUIEvent_DialogFinished = 1,
    EClientUIEvent_FireOutput = 2,
};
