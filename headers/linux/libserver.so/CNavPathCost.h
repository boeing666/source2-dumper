#pragma once

class CNavPathCost : public INavPathCost /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (navlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    bool m_bAllowLadders; // offset 0xC, size 0x1, align 1
    bool m_bCanFly; // offset 0xD, size 0x1, align 1
    bool m_bCanSwim; // offset 0xE, size 0x1, align 1
    char _pad_000F[0x1]; // offset 0xF
    float32 m_flWaterToGroundMaxHeight; // offset 0x10, size 0x4, align 4
    float32 m_flGroundToWaterMaxHeight; // offset 0x14, size 0x4, align 4
    float32 m_flGroundToWaterTransitionDistance; // offset 0x18, size 0x4, align 4
    float32 m_flWaterToGroundTransitionDistance; // offset 0x1C, size 0x4, align 4
    float32 m_flFlyingTransitionTolerance; // offset 0x20, size 0x4, align 4
    bool m_bOptimizeFlySpacePathfinds; // offset 0x24, size 0x1, align 1
    bool m_bStringPullFlySpacePathfinds; // offset 0x25, size 0x1, align 1
    bool m_bSupportsTransitions; // offset 0x26, size 0x1, align 1
    char _pad_0027[0x1]; // offset 0x27
    float32 m_flTransitionPenalty; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
