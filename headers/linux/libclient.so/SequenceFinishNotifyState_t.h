#pragma once

enum SequenceFinishNotifyState_t : uint8_t  // sizeof 0x1
{
    eDoNotNotify = 0,
    eNotifyWhenFinished = 1,
    eNotifyTriggered = 2,
};
