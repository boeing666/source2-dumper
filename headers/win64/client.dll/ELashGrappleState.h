#pragma once

enum ELashGrappleState : uint8_t  // sizeof 0x1
{
    ELashGrappleState_None = 0,
    ELashGrappleState_LiftingUp = 1,
    ELashGrappleState_HangingInAir = 2,
};
