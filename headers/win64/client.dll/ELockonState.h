#pragma once

enum ELockonState : uint32_t  // sizeof 0x4
{
    ELockingOn = 0,
    ELosingLock = 1,
    ELockPaused = 2,
    ELockNone = 3,
};
