#pragma once

class CEnvDeferredLight : public CModelPointEntity /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x778, size 0x4, align 4
    Color m_LightColor; // offset 0x77C, size 0x4, align 1
    float32 m_flIntensity; // offset 0x780, size 0x4, align 4
    float32 m_flLightSize; // offset 0x784, size 0x4, align 4
    float32 m_flSpotFoV; // offset 0x788, size 0x4, align 4
    QAngle m_vLightDirection; // offset 0x78C, size 0xC, align 4
    float32 m_flStartFalloff; // offset 0x798, size 0x4, align 4
    float32 m_flDistanceFalloff; // offset 0x79C, size 0x4, align 4
    uint32 m_nFlags; // offset 0x7A0, size 0x4, align 4
    char[512] m_ProjectedTextureName; // offset 0x7A4, size 0x200, align 1
    char _pad_09A4[0x4]; // offset 0x9A4
};
