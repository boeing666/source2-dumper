#pragma once

class CEnvDeferredLight : public CModelPointEntity /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x858, size 0x4, align 4
    Color m_LightColor; // offset 0x85C, size 0x4, align 4
    float32 m_flIntensity; // offset 0x860, size 0x4, align 4
    float32 m_flLightSize; // offset 0x864, size 0x4, align 4
    float32 m_flSpotFoV; // offset 0x868, size 0x4, align 4
    QAngle m_vLightDirection; // offset 0x86C, size 0xC, align 4
    float32 m_flStartFalloff; // offset 0x878, size 0x4, align 4
    float32 m_flDistanceFalloff; // offset 0x87C, size 0x4, align 4
    uint32 m_nFlags; // offset 0x880, size 0x4, align 4
    char[512] m_ProjectedTextureName; // offset 0x884, size 0x200, align 1
    char _pad_0A84[0x4]; // offset 0xA84
};
