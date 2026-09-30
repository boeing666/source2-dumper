#pragma once

enum INavLinkSubMotor::StartType_t : uint32_t  // sizeof 0x4
{
    eFromIdle = 0,
    eFromMovement = 1,
};
