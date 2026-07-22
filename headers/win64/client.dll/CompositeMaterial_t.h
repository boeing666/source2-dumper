#pragma once

struct CompositeMaterial_t  // sizeof 0xA0, align 0xFF (compositematerialslib) {MPropertyElementNameFn}
{
    char _pad_0000[0x8]; // offset 0x0
    KeyValues3 m_TargetKVs; // offset 0x8, size 0x10, align 8 | MPropertyGroupName MPropertyAttributeEditor
    KeyValues3 m_PreGenerationKVs; // offset 0x18, size 0x10, align 8 | MPropertyGroupName MPropertyAttributeEditor
    char _pad_0028[0x30]; // offset 0x28
    KeyValues3 m_FinalKVs; // offset 0x58, size 0x10, align 8 | MPropertyGroupName MPropertyAttributeEditor
    char _pad_0068[0x18]; // offset 0x68
    CUtlVector< GeneratedTextureHandle_t > m_vecGeneratedTextures; // offset 0x80, size 0x18, align 8 | MPropertyFriendlyName
    char _pad_0098[0x8]; // offset 0x98
};
