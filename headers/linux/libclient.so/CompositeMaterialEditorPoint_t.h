#pragma once

struct CompositeMaterialEditorPoint_t  // sizeof 0x218, align 0x8 (compositematerialslib) {MGetKV3ClassDefaults}
{
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ModelName; // offset 0x0, size 0xE0, align 8 | MPropertyGroupName MPropertyFriendlyName
    int32 m_nSequenceIndex; // offset 0xE0, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName
    float32 m_flCycle; // offset 0xE4, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName MPropertyAttributeRange
    KeyValues3 m_KVModelStateChoices; // offset 0xE8, size 0x10, align 8 | MPropertyGroupName MPropertyFriendlyName MPropertyAttributeEditor
    bool m_bEnableChildModel; // offset 0xF8, size 0x1, align 1 | MPropertyAutoRebuildOnChange MPropertyGroupName MPropertyFriendlyName
    char _pad_00F9[0x7]; // offset 0xF9
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ChildModelName; // offset 0x100, size 0xE0, align 8 | MPropertyGroupName MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlVector< CompositeMaterialAssemblyProcedure_t > m_vecCompositeMaterialAssemblyProcedures; // offset 0x1E0, size 0x18, align 8 | MPropertyGroupName MPropertyFriendlyName
    CUtlVector< CompositeMaterial_t > m_vecCompositeMaterials; // offset 0x1F8, size 0x18, align 8 | MPropertyFriendlyName
    char _pad_0210[0x8]; // offset 0x210
};
