#pragma once

struct AI_NavigatorConfig_t  // sizeof 0x5, align 0x1 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    bool m_bUsePathSmoothing; // offset 0x0, size 0x1, align 1
    bool m_bShouldSnapToGroundGoal; // offset 0x1, size 0x1, align 1
    bool m_bPushThroughLightPropsOnNavFailure; // offset 0x2, size 0x1, align 1
    bool m_bNavWantsMoveSolve; // offset 0x3, size 0x1, align 1
    bool m_bCanPathThroughNonLockedDoors; // offset 0x4, size 0x1, align 1
};
