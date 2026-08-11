#pragma once

class CPointTemplate : public CLogicalEntity /*0x0*/  // sizeof 0x820, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_iszWorldName; // offset 0x788, size 0x8, align 8
    CUtlSymbolLarge m_iszSource2EntityLumpName; // offset 0x790, size 0x8, align 8
    CUtlSymbolLarge m_iszEntityFilterName; // offset 0x798, size 0x8, align 8
    float32 m_flTimeoutInterval; // offset 0x7A0, size 0x4, align 4
    bool m_bAsynchronouslySpawnEntities; // offset 0x7A4, size 0x1, align 1
    char _pad_07A5[0x3]; // offset 0x7A5
    PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // offset 0x7A8, size 0x4, align 4 | MNotSaved
    PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // offset 0x7AC, size 0x4, align 4 | MNotSaved
    CUtlVector< uint32 > m_createdSpawnGroupHandles; // offset 0x7B0, size 0x18, align 8
    CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // offset 0x7C8, size 0x18, align 8
    HSCRIPT m_ScriptSpawnCallback; // offset 0x7E0, size 0x8, align 8 | MNotSaved
    HSCRIPT m_ScriptCallbackScope; // offset 0x7E8, size 0x8, align 8 | MNotSaved
    CEntityOutputTemplate< CUtlVector< CEntityHandle > > m_OnEntitySpawned; // offset 0x7F0, size 0x30, align 8
};
