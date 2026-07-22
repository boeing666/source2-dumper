#pragma once

class CPointTemplate : public CLogicalEntity /*0x0*/  // sizeof 0x688, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CUtlSymbolLarge m_iszWorldName; // offset 0x5F0, size 0x8, align 8
    CUtlSymbolLarge m_iszSource2EntityLumpName; // offset 0x5F8, size 0x8, align 8
    CUtlSymbolLarge m_iszEntityFilterName; // offset 0x600, size 0x8, align 8
    float32 m_flTimeoutInterval; // offset 0x608, size 0x4, align 4
    bool m_bAsynchronouslySpawnEntities; // offset 0x60C, size 0x1, align 1
    char _pad_060D[0x3]; // offset 0x60D
    PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // offset 0x610, size 0x4, align 4 | MNotSaved
    PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // offset 0x614, size 0x4, align 4 | MNotSaved
    CUtlVector< uint32 > m_createdSpawnGroupHandles; // offset 0x618, size 0x18, align 8
    CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // offset 0x630, size 0x18, align 8
    HSCRIPT m_ScriptSpawnCallback; // offset 0x648, size 0x8, align 8 | MNotSaved
    HSCRIPT m_ScriptCallbackScope; // offset 0x650, size 0x8, align 8 | MNotSaved
    CEntityOutputTemplate< CUtlVector< CEntityHandle > > m_OnEntitySpawned; // offset 0x658, size 0x30, align 8
};
