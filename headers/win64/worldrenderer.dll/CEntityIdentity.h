#pragma once

class CEntityIdentity  // sizeof 0x70, align 0xFF (entity2) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14]; // offset 0x0
    int32 m_nameStringTableIndex; // offset 0x14, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_name; // offset 0x18, size 0x8, align 8
    CUtlSymbolLarge m_designerName; // offset 0x20, size 0x8, align 8 | MNotSaved
    char _pad_0028[0x8]; // offset 0x28
    uint32 m_flags; // offset 0x30, size 0x4, align 4 | MNotSaved
    char _pad_0034[0x4]; // offset 0x34
    WorldGroupId_t m_worldGroupId; // offset 0x38, size 0x4, align 4 | MNotSaved
    uint32 m_fDataObjectTypes; // offset 0x3C, size 0x4, align 4 | MNotSaved
    ChangeAccessorFieldPathIndex_t m_PathIndex; // offset 0x40, size 0x4, align 255 | MNotSaved
    char _pad_0044[0x4]; // offset 0x44
    CEntityAttributeTable* m_pAttributes; // offset 0x48, size 0x8, align 8
    CEntityIdentity* m_pPrev; // offset 0x50, size 0x8, align 8 | MNotSaved
    CEntityIdentity* m_pNext; // offset 0x58, size 0x8, align 8 | MNotSaved
    CEntityIdentity* m_pPrevByClass; // offset 0x60, size 0x8, align 8 | MNotSaved
    CEntityIdentity* m_pNextByClass; // offset 0x68, size 0x8, align 8 | MNotSaved
};
