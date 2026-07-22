#pragma once

class CResourceAssetTypeInfo : public CSimpleAssetTypeInfo /*0x0*/  // sizeof 0x148, align 0x8 [vtable] (toolutils2) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    CUtlString m_CompilerIdentifier; // offset 0x100, size 0x8, align 8
    CUtlVector< CUtlString > m_CompileDependsOnResourceTypes; // offset 0x108, size 0x18, align 8
    CUtlVector< ResourceBlockTypeInfo_t > m_Blocks; // offset 0x120, size 0x18, align 8
    CUtlString m_RequiredSpecialDependency; // offset 0x138, size 0x8, align 8
    bool m_bPreventDirectCompile; // offset 0x140, size 0x1, align 1
    bool m_bCannotBeAMultiParentChildCompile; // offset 0x141, size 0x1, align 1
    bool m_bPrefersIconForThumbnail; // offset 0x142, size 0x1, align 1
    bool m_bAllowedToCompileInTestMode; // offset 0x143, size 0x1, align 1
    char _pad_0144[0x4]; // offset 0x144
};
