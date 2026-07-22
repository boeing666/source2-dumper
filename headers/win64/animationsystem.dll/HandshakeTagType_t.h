#pragma once

enum HandshakeTagType_t : uint32_t  // sizeof 0x4
{
    eInvalid = -1,
    eTask = 0,
    eMovement = 1,
    eCount = 2,
};
