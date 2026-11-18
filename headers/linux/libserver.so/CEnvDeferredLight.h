#pragma once

class CEnvDeferredLight : public CModelPointEntity /*0x0*/  // sizeof 0xDC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0xB9C, size 0x4, align 4
    Color m_LightColor; // offset 0xBA0, size 0x4, align 4
    float32 m_flIntensity; // offset 0xBA4, size 0x4, align 4
    float32 m_flLightSize; // offset 0xBA8, size 0x4, align 4
    float32 m_flSpotFoV; // offset 0xBAC, size 0x4, align 4
    QAngle m_vLightDirection; // offset 0xBB0, size 0xC, align 4
    float32 m_flStartFalloff; // offset 0xBBC, size 0x4, align 4
    float32 m_flDistanceFalloff; // offset 0xBC0, size 0x4, align 4
    uint32 m_nFlags; // offset 0xBC4, size 0x4, align 4
    char[512] m_ProjectedTextureName; // offset 0xBC8, size 0x200, align 1
};
