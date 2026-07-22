#pragma once

enum EDestructibleParts_DestroyParameterFlags : uint32_t  // sizeof 0x4
{
    None = 0,
    GenerateBreakpieces = 1,
    SetBodyGroupAndCollisionState = 2,
    EnableFlinches = 4,
    ForceDamageApply = 8,
    IgnoreKillEntityFlag = 16,
    IgnoreHealthCheck = 32,
    ApplyPhysicsForce = 64,
    Default = 7,
};
