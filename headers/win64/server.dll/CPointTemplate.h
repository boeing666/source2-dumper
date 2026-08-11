#pragma once

class CPointTemplate : public CLogicalEntity /*0x0*/  // sizeof 0x540, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CUtlSymbolLarge m_iszWorldName; // offset 0x4A8, size 0x8, align 8
    CUtlSymbolLarge m_iszSource2EntityLumpName; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_iszEntityFilterName; // offset 0x4B8, size 0x8, align 8
    float32 m_flTimeoutInterval; // offset 0x4C0, size 0x4, align 4
    bool m_bAsynchronouslySpawnEntities; // offset 0x4C4, size 0x1, align 1
    char _pad_04C5[0x3]; // offset 0x4C5
    PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // offset 0x4C8, size 0x4, align 4 | MNotSaved
    PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // offset 0x4CC, size 0x4, align 4 | MNotSaved
    CUtlVector< uint32 > m_createdSpawnGroupHandles; // offset 0x4D0, size 0x18, align 8
    CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // offset 0x4E8, size 0x18, align 8
    HSCRIPT m_ScriptSpawnCallback; // offset 0x500, size 0x8, align 8 | MNotSaved
    HSCRIPT m_ScriptCallbackScope; // offset 0x508, size 0x8, align 8 | MNotSaved
    CEntityOutputTemplate< CUtlVector< CEntityHandle > > m_OnEntitySpawned; // offset 0x510, size 0x30, align 8
};
