#pragma once

enum EAltCastMode : uint32_t  // sizeof 0x4
{
    EAltCast_PressAndHold = 0,
    EAltCast_DoubleTap = 1,
    EAltCast_ModifierKey = 2,
    EAltCastMaxValue = 2,
};
