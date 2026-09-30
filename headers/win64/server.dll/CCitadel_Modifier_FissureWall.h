#pragma once

class CCitadel_Modifier_FissureWall : public CCitadelModifier /*0x0*/  // sizeof 0xA10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x980]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecFissureWallEntities; // offset 0x980, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecFisureEntitiesHit; // offset 0x998, size 0x18, align 8
    int32 m_nSegment; // offset 0x9B0, size 0x4, align 4
    VectorWS m_vPosition; // offset 0x9B4, size 0xC, align 4
    Vector m_vDirection; // offset 0x9C0, size 0xC, align 4
    Vector m_vLeft; // offset 0x9CC, size 0xC, align 4
    float32 m_Length; // offset 0x9D8, size 0x4, align 4
    Vector m_vBiasDirLeft; // offset 0x9DC, size 0xC, align 4
    VectorWS m_vBiasPosLeft; // offset 0x9E8, size 0xC, align 4
    Vector m_vBiasDirRight; // offset 0x9F4, size 0xC, align 4
    VectorWS m_vBiasPosRight; // offset 0xA00, size 0xC, align 4
    char _pad_0A0C[0x4]; // offset 0xA0C
};
