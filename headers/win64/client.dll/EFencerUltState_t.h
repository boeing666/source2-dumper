#pragma once

enum EFencerUltState_t : uint8_t  // sizeof 0x1
{
    EFencerUlt_None = 0,
    EFencerUlt_Windup = 1,
    EFencerUlt_Dashing = 2,
    EFencerUlt_Holding = 3,
    EFencerUlt_Sweeping = 4,
    EFencerUlt_Finishing = 5,
};
