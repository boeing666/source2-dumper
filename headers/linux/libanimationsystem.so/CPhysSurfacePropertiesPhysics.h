#pragma once

class CPhysSurfacePropertiesPhysics  // sizeof 0x18, align 0x4 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
public:
    float32 m_friction; // offset 0x0, size 0x4, align 4 | MKV3TransferName
    float32 m_elasticity; // offset 0x4, size 0x4, align 4 | MKV3TransferName
    float32 m_density; // offset 0x8, size 0x4, align 4 | MKV3TransferName
    float32 m_thickness; // offset 0xC, size 0x4, align 4 | MKV3TransferName
    float32 m_softContactFrequency; // offset 0x10, size 0x4, align 4 | MKV3TransferName
    float32 m_softContactDampingRatio; // offset 0x14, size 0x4, align 4 | MKV3TransferName
};
