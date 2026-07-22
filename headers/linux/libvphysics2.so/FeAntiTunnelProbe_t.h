#pragma once

struct FeAntiTunnelProbe_t  // sizeof 0x1C, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    float32 flWeight; // offset 0x0, size 0x4, align 4
    uint32 nFlags; // offset 0x4, size 0x4, align 4
    uint16 nProbeNode; // offset 0x8, size 0x2, align 2
    uint16 nCount; // offset 0xA, size 0x2, align 2
    uint32 nBegin; // offset 0xC, size 0x4, align 4
    float32 flActivationDistance; // offset 0x10, size 0x4, align 4
    float32 flCurvatureRadius; // offset 0x14, size 0x4, align 4
    float32 flBias; // offset 0x18, size 0x4, align 4
};
