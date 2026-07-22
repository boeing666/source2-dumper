#pragma once

class CCollisionProperty  // sizeof 0xB8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    VPhysicsCollisionAttribute_t m_collisionAttribute; // offset 0x10, size 0x30, align 8
    Vector m_vecMins; // offset 0x40, size 0xC, align 4 | MSaveBehavior
    Vector m_vecMaxs; // offset 0x4C, size 0xC, align 4 | MSaveBehavior
    char _pad_0058[0x2]; // offset 0x58
    uint8 m_usSolidFlags; // offset 0x5A, size 0x1, align 1
    SolidType_t m_nSolidType; // offset 0x5B, size 0x1, align 1
    uint8 m_triggerBloat; // offset 0x5C, size 0x1, align 1
    SurroundingBoundsType_t m_nSurroundType; // offset 0x5D, size 0x1, align 1
    uint8 m_CollisionGroup; // offset 0x5E, size 0x1, align 1
    uint8 m_nEnablePhysics; // offset 0x5F, size 0x1, align 1
    float32 m_flBoundingRadius; // offset 0x60, size 0x4, align 4
    Vector m_vecSpecifiedSurroundingMins; // offset 0x64, size 0xC, align 4
    Vector m_vecSpecifiedSurroundingMaxs; // offset 0x70, size 0xC, align 4
    Vector m_vecSurroundingMaxs; // offset 0x7C, size 0xC, align 4
    Vector m_vecSurroundingMins; // offset 0x88, size 0xC, align 4
    Vector m_vCapsuleCenter1; // offset 0x94, size 0xC, align 4
    Vector m_vCapsuleCenter2; // offset 0xA0, size 0xC, align 4
    float32 m_flCapsuleRadius; // offset 0xAC, size 0x4, align 4
    char _pad_00B0[0x8]; // offset 0xB0
};
