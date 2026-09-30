#pragma once

class CNavPathCost : public INavPathCost /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (navlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    bool m_bAllowBlockingViaFloorAreaCost; // offset 0x10, size 0x1, align 1
    bool m_bAllowLadders; // offset 0x11, size 0x1, align 1
    char _pad_0012[0x2]; // offset 0x12
    float32 m_flMaxDropDown; // offset 0x14, size 0x4, align 4
    float32 m_flMaxClimbUp; // offset 0x18, size 0x4, align 4
    float32 m_flDropDownPenaltyCostBase; // offset 0x1C, size 0x4, align 4
    float32 m_flDropDownPenaltyCostScalar; // offset 0x20, size 0x4, align 4
    float32 m_flClimbUpPenaltyCostBase; // offset 0x24, size 0x4, align 4
    float32 m_flClimbUpPenaltyCostScalar; // offset 0x28, size 0x4, align 4
    float32 m_flStepHeight; // offset 0x2C, size 0x4, align 4
    bool m_bCanFly; // offset 0x30, size 0x1, align 1
    bool m_bCanSwim; // offset 0x31, size 0x1, align 1
    char _pad_0032[0x2]; // offset 0x32
    float32 m_flWaterToGroundMaxHeight; // offset 0x34, size 0x4, align 4
    float32 m_flGroundToWaterMaxHeight; // offset 0x38, size 0x4, align 4
    float32 m_flGroundToWaterTransitionDistance; // offset 0x3C, size 0x4, align 4
    float32 m_flWaterToGroundTransitionDistance; // offset 0x40, size 0x4, align 4
    float32 m_flFlyingTransitionTolerance; // offset 0x44, size 0x4, align 4
    bool m_bOptimizeFlySpacePathfinds; // offset 0x48, size 0x1, align 1
    bool m_bStringPullFlySpacePathfinds; // offset 0x49, size 0x1, align 1
    bool m_bSupportsTransitions; // offset 0x4A, size 0x1, align 1
    char _pad_004B[0x1]; // offset 0x4B
    float32 m_flTransitionPenalty; // offset 0x4C, size 0x4, align 4
};
