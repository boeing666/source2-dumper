#pragma once

struct VPhysXBodyPart_t  // sizeof 0xA8, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    uint32 m_nFlags; // offset 0x0, size 0x4, align 4
    float32 m_flMass; // offset 0x4, size 0x4, align 4
    VPhysics2ShapeDef_t m_rnShape; // offset 0x8, size 0x78, align 8
    uint16 m_nCollisionAttributeIndex; // offset 0x80, size 0x2, align 2
    uint16 m_nReserved; // offset 0x82, size 0x2, align 2
    float32 m_flInertiaScale; // offset 0x84, size 0x4, align 4
    float32 m_flLinearDamping; // offset 0x88, size 0x4, align 4
    float32 m_flAngularDamping; // offset 0x8C, size 0x4, align 4
    float32 m_flLinearDrag; // offset 0x90, size 0x4, align 4
    float32 m_flAngularDrag; // offset 0x94, size 0x4, align 4
    bool m_bOverrideMassCenter; // offset 0x98, size 0x1, align 1
    char _pad_0099[0x3]; // offset 0x99
    Vector m_vMassCenterOverride; // offset 0x9C, size 0xC, align 4
};
