#pragma once

enum HandshakeTagState_t : uint8_t  // sizeof 0x1
{
    eInactive = 0,
    eActive = 1,
    eMomentarilyInactive = 2,
};
