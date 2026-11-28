#pragma once

class CPhysSurfacePropertiesAudio  // sizeof 0x20, align 0x4 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
public:
    float32 m_reflectivity; // offset 0x0, size 0x4, align 4 | MKV3TransferName
    float32 m_hardnessFactor; // offset 0x4, size 0x4, align 4 | MKV3TransferName
    float32 m_roughnessFactor; // offset 0x8, size 0x4, align 4 | MKV3TransferName
    float32 m_roughThreshold; // offset 0xC, size 0x4, align 4 | MKV3TransferName
    float32 m_hardThreshold; // offset 0x10, size 0x4, align 4 | MKV3TransferName
    float32 m_hardVelocityThreshold; // offset 0x14, size 0x4, align 4 | MKV3TransferName
    float32 m_flStaticImpactVolume; // offset 0x18, size 0x4, align 4 | MKV3TransferName
    float32 m_flOcclusionFactor; // offset 0x1C, size 0x4, align 4 | MKV3TransferName
};
