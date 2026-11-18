#pragma once

class CEnvDeferredLight : public CModelPointEntity /*0x0*/  // sizeof 0xAE8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x8B8, size 0x4, align 4
    Color m_LightColor; // offset 0x8BC, size 0x4, align 4
    float32 m_flIntensity; // offset 0x8C0, size 0x4, align 4
    float32 m_flLightSize; // offset 0x8C4, size 0x4, align 4
    float32 m_flSpotFoV; // offset 0x8C8, size 0x4, align 4
    QAngle m_vLightDirection; // offset 0x8CC, size 0xC, align 4
    float32 m_flStartFalloff; // offset 0x8D8, size 0x4, align 4
    float32 m_flDistanceFalloff; // offset 0x8DC, size 0x4, align 4
    uint32 m_nFlags; // offset 0x8E0, size 0x4, align 4
    char[512] m_ProjectedTextureName; // offset 0x8E4, size 0x200, align 1
    char _pad_0AE4[0x4]; // offset 0xAE4
};
