#pragma once

enum JumpCorrectionMethod : uint32_t  // sizeof 0x4
{
    ScaleMotion = 0,
    AddCorrectionDelta = 1,
};
