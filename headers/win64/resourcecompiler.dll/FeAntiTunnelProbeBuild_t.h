#pragma once

struct FeAntiTunnelProbeBuild_t  // sizeof 0x30, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    float32 flWeight; // offset 0x0, size 0x4, align 4
    float32 flActivationDistance; // offset 0x4, size 0x4, align 4
    float32 flBias; // offset 0x8, size 0x4, align 4
    float32 flCurvature; // offset 0xC, size 0x4, align 4
    uint32 nFlags; // offset 0x10, size 0x4, align 4
    uint16 nProbeNode; // offset 0x14, size 0x2, align 2
    char _pad_0016[0x2]; // offset 0x16
    CUtlVector< uint16 > targetNodes; // offset 0x18, size 0x18, align 8
};
