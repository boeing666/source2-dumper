#pragma once

class CEnvDeferredLight : public CModelPointEntity /*0x0*/  // sizeof 0xC80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0xA54, size 0x4, align 4
    Color m_LightColor; // offset 0xA58, size 0x4, align 1
    float32 m_flIntensity; // offset 0xA5C, size 0x4, align 4
    float32 m_flLightSize; // offset 0xA60, size 0x4, align 4
    float32 m_flSpotFoV; // offset 0xA64, size 0x4, align 4
    QAngle m_vLightDirection; // offset 0xA68, size 0xC, align 4
    float32 m_flStartFalloff; // offset 0xA74, size 0x4, align 4
    float32 m_flDistanceFalloff; // offset 0xA78, size 0x4, align 4
    uint32 m_nFlags; // offset 0xA7C, size 0x4, align 4
    char[512] m_ProjectedTextureName; // offset 0xA80, size 0x200, align 1
};
