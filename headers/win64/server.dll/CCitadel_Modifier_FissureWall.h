#pragma once

class CCitadel_Modifier_FissureWall : public CCitadelModifier /*0x0*/  // sizeof 0xA18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x988]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecFissureWallEntities; // offset 0x988, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecFisureEntitiesHit; // offset 0x9A0, size 0x18, align 8
    int32 m_nSegment; // offset 0x9B8, size 0x4, align 4
    VectorWS m_vPosition; // offset 0x9BC, size 0xC, align 4
    Vector m_vDirection; // offset 0x9C8, size 0xC, align 4
    Vector m_vLeft; // offset 0x9D4, size 0xC, align 4
    float32 m_Length; // offset 0x9E0, size 0x4, align 4
    Vector m_vBiasDirLeft; // offset 0x9E4, size 0xC, align 4
    VectorWS m_vBiasPosLeft; // offset 0x9F0, size 0xC, align 4
    Vector m_vBiasDirRight; // offset 0x9FC, size 0xC, align 4
    VectorWS m_vBiasPosRight; // offset 0xA08, size 0xC, align 4
    char _pad_0A14[0x4]; // offset 0xA14
};
