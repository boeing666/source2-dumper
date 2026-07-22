#pragma once

enum ESwingState_t : uint8_t  // sizeof 0x1
{
    ESwingState_None = 0,
    ESwingState_StartupDelay = 1,
    ESwingState_Swinging = 2,
};
