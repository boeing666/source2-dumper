#pragma once

class CEffectData  // sizeof 0x78, align 0xFF [vtable trivial_dtor] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    VectorWS m_vOrigin; // offset 0x8, size 0xC, align 4
    VectorWS m_vStart; // offset 0x14, size 0xC, align 4
    Vector m_vNormal; // offset 0x20, size 0xC, align 4
    QAngle m_vAngles; // offset 0x2C, size 0xC, align 4
    CEntityHandle m_hEntity; // offset 0x38, size 0x4, align 4
    CEntityHandle m_hOtherEntity; // offset 0x3C, size 0x4, align 4
    float32 m_flScale; // offset 0x40, size 0x4, align 4
    float32 m_flMagnitude; // offset 0x44, size 0x4, align 4
    float32 m_flRadius; // offset 0x48, size 0x4, align 4
    CUtlStringToken m_nSurfaceProp; // offset 0x4C, size 0x4, align 4
    CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex; // offset 0x50, size 0x8, align 8
    uint32 m_nDamageType; // offset 0x58, size 0x4, align 4
    uint8 m_nPenetrate; // offset 0x5C, size 0x1, align 1
    char _pad_005D[0x1]; // offset 0x5D
    uint16 m_nMaterial; // offset 0x5E, size 0x2, align 2
    int16 m_nHitBox; // offset 0x60, size 0x2, align 2
    uint8 m_nColor; // offset 0x62, size 0x1, align 1
    uint8 m_fFlags; // offset 0x63, size 0x1, align 1
    AttachmentHandle_t m_nAttachmentIndex; // offset 0x64, size 0x1, align 255
    char _pad_0065[0x3]; // offset 0x65
    CUtlStringToken m_nAttachmentName; // offset 0x68, size 0x4, align 4
    uint16 m_iEffectName; // offset 0x6C, size 0x2, align 2
    char _pad_006E[0xA]; // offset 0x6E
};
