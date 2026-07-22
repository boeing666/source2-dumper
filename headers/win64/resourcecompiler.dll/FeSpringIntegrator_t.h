#pragma once

struct FeSpringIntegrator_t  // sizeof 0x14, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[2] nNode; // offset 0x0, size 0x4, align 2
    float32 flSpringRestLength; // offset 0x4, size 0x4, align 4
    float32 flSpringConstant; // offset 0x8, size 0x4, align 4
    float32 flSpringDamping; // offset 0xC, size 0x4, align 4
    float32 flNodeWeight0; // offset 0x10, size 0x4, align 4
};
