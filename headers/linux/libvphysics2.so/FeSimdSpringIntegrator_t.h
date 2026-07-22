#pragma once

struct FeSimdSpringIntegrator_t  // sizeof 0x50, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[4][2] nNode; // offset 0x0, size 0x10, align 2
    fltx4 flSpringRestLength; // offset 0x10, size 0x10, align 16
    fltx4 flSpringConstant; // offset 0x20, size 0x10, align 16
    fltx4 flSpringDamping; // offset 0x30, size 0x10, align 16
    fltx4 flNodeWeight0; // offset 0x40, size 0x10, align 16
};
