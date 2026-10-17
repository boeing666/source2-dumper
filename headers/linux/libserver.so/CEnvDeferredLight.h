#pragma once

class CEnvDeferredLight : public CModelPointEntity /*0x0*/  // sizeof 0xD60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0xB34, size 0x4, align 4
    Color m_LightColor; // offset 0xB38, size 0x4, align 4
    float32 m_flIntensity; // offset 0xB3C, size 0x4, align 4
    float32 m_flLightSize; // offset 0xB40, size 0x4, align 4
    float32 m_flSpotFoV; // offset 0xB44, size 0x4, align 4
    QAngle m_vLightDirection; // offset 0xB48, size 0xC, align 4
    float32 m_flStartFalloff; // offset 0xB54, size 0x4, align 4
    float32 m_flDistanceFalloff; // offset 0xB58, size 0x4, align 4
    uint32 m_nFlags; // offset 0xB5C, size 0x4, align 4
    char[512] m_ProjectedTextureName; // offset 0xB60, size 0x200, align 1
};
