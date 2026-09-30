#pragma once

enum HandshakeRestartType_t : uint8_t  // sizeof 0x1
{
    eNone = 0,
    eWaitForPrevious = 1,
    eImmediate = 2,
};
