#pragma once

struct RnCapsuleDesc_t : public RnShapeDesc_t /*0x0*/  // sizeof 0x38, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x18]; // offset 0x0
    RnCapsule_t m_Capsule; // offset 0x18, size 0x1C, align 4
    char _pad_0034[0x4]; // offset 0x34
};
