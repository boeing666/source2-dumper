#pragma once

enum BlendKeyType : uint32_t  // sizeof 0x4
{
    BlendKey_UserValue = 0,
    BlendKey_Velocity = 1,
    BlendKey_Distance = 2,
    BlendKey_RemainingDistance = 3,
};
