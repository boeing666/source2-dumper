#pragma once

enum NavLinkMovementFlags_t : uint32_t  // sizeof 0x4
{
    eSupportsExit = 0,
    eForceExitToMovement = 1,
    eCount = 2,
};
