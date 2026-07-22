#pragma once

class CDeferredLightBase  // sizeof 0x290, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    Color m_LightColor; // offset 0x8, size 0x4, align 1
    float32 m_flIntensity; // offset 0xC, size 0x4, align 4
    float32 m_flLightSize; // offset 0x10, size 0x4, align 4
    float32 m_flSpotFoV; // offset 0x14, size 0x4, align 4
    QAngle m_vLightDirection; // offset 0x18, size 0xC, align 4
    float32 m_flStartFalloff; // offset 0x24, size 0x4, align 4
    float32 m_flDistanceFalloff; // offset 0x28, size 0x4, align 4
    uint32 m_nFlags; // offset 0x2C, size 0x4, align 4
    char[512] m_ProjectedTextureName; // offset 0x30, size 0x200, align 1
    char _pad_0230[0x60]; // offset 0x230
};
