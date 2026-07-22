#pragma once

class CAI_Senses : public CAI_Component /*0x0*/  // sizeof 0x1B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x50]; // offset 0x0
    float32 m_flLookDist; // offset 0x50, size 0x4, align 4
    float32 m_flLookDistIdle; // offset 0x54, size 0x4, align 4
    float32 m_flLastLookDist; // offset 0x58, size 0x4, align 4
    GameTime_t m_TimeLastLook; // offset 0x5C, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_SeenHighPriority; // offset 0x60, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_SeenNPCs; // offset 0x78, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_SeenMisc; // offset 0x90, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_GatheredEntities; // offset 0xA8, size 0x18, align 8 | MNotSaved
    CUtlVector< CHandle< CBaseEntity > > m_GatheredProxyEntities; // offset 0xC0, size 0x18, align 8 | MNotSaved
    CUtlVector< CHandle< CBaseEntity > >*[3] m_SeenArrays; // offset 0xD8, size 0x18, align 8 | MNotSaved
    GameTime_t m_TimeLastLookHighPriority; // offset 0xF0, size 0x4, align 255
    GameTime_t m_TimeLastLookNPCs; // offset 0xF4, size 0x4, align 255
    GameTime_t m_TimeLastLookMisc; // offset 0xF8, size 0x4, align 255
    AI_SensingFlags_t m_iSensingFlags; // offset 0xFC, size 0x4, align 4
    AI_VolumetricEventFlags_t m_nExclusionFlags; // offset 0x100, size 0x2, align 2
    char _pad_0102[0x6]; // offset 0x102
    CAI_VolumetricEvent* m_pCachedTaskEvent; // offset 0x108, size 0x8, align 8
    float32 m_flSensingSensitivity; // offset 0x110, size 0x4, align 4
    char _pad_0114[0x4]; // offset 0x114
    AI_VolumetricEventTypeMask_t m_nSensingInterests; // offset 0x118, size 0x8, align 8
    CUtlVectorFixedGrowable< AI_VolumetricEventHandle_t, 16 > m_vecAudibleEvents; // offset 0x120, size 0x98, align 8 | MNotSaved
};
