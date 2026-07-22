#pragma once

struct VPhysXCollisionAttributes_t  // sizeof 0xD0, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    int32 m_nIncludeDetailLayerCount; // offset 0x0, size 0x4, align 4
    uint32 m_CollisionGroup; // offset 0x4, size 0x4, align 4
    CUtlVector< uint32 > m_InteractAs; // offset 0x8, size 0x18, align 8
    CUtlVector< uint32 > m_InteractWith; // offset 0x20, size 0x18, align 8
    CUtlVector< uint32 > m_InteractExclude; // offset 0x38, size 0x18, align 8
    CUtlVector< uint32 > m_DetailLayers; // offset 0x50, size 0x18, align 8
    CUtlString m_CollisionGroupString; // offset 0x68, size 0x8, align 8
    CUtlVector< CUtlString > m_InteractAsStrings; // offset 0x70, size 0x18, align 8
    CUtlVector< CUtlString > m_InteractWithStrings; // offset 0x88, size 0x18, align 8
    CUtlVector< CUtlString > m_InteractExcludeStrings; // offset 0xA0, size 0x18, align 8
    CUtlVector< CUtlString > m_DetailLayerStrings; // offset 0xB8, size 0x18, align 8
};
