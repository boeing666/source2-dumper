#pragma once

struct PlayerInputMotorInstanceData_t  // sizeof 0x28, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    Vector m_vInputVectorWS; // offset 0x0, size 0xC, align 4
    Vector m_vVelocityWS; // offset 0xC, size 0xC, align 4
    Vector m_vAccelerationWS; // offset 0x18, size 0xC, align 4
    char _pad_0024[0x4]; // offset 0x24
};
