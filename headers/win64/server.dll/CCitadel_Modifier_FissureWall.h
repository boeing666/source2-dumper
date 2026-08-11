#pragma once

class CCitadel_Modifier_FissureWall : public CCitadelModifier /*0x0*/  // sizeof 0x760, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x6D0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecFissureWallEntities; // offset 0x6D0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecFisureEntitiesHit; // offset 0x6E8, size 0x18, align 8
    int32 m_nSegment; // offset 0x700, size 0x4, align 4
    Vector m_vPosition; // offset 0x704, size 0xC, align 4
    Vector m_vDirection; // offset 0x710, size 0xC, align 4
    Vector m_vLeft; // offset 0x71C, size 0xC, align 4
    float32 m_Length; // offset 0x728, size 0x4, align 4
    Vector m_vBiasDirLeft; // offset 0x72C, size 0xC, align 4
    Vector m_vBiasPosLeft; // offset 0x738, size 0xC, align 4
    Vector m_vBiasDirRight; // offset 0x744, size 0xC, align 4
    Vector m_vBiasPosRight; // offset 0x750, size 0xC, align 4
    char _pad_075C[0x4]; // offset 0x75C
};
