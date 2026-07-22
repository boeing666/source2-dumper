#pragma once

enum StepPhase : uint32_t  // sizeof 0x4
{
    StepPhase_OnGround = 0,
    StepPhase_InAir = 1,
};
