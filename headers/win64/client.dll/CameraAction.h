#pragma once

enum CameraAction : uint32_t  // sizeof 0x4
{
    k_EAction_AddOp = 0,
    k_EAction_ClearAllOps = 1,
    k_EAction_ClearOpsForContext = 2,
};
