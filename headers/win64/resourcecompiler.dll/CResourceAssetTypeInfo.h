#pragma once

class CResourceAssetTypeInfo : public CSimpleAssetTypeInfo /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (toolutils2) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xE0]; // offset 0x0
    CUtlString m_CompilerIdentifier; // offset 0xE0, size 0x8, align 8
    CUtlVector< CUtlString > m_CompileDependsOnResourceTypes; // offset 0xE8, size 0x18, align 8
    CUtlVector< ResourceBlockTypeInfo_t > m_Blocks; // offset 0x100, size 0x18, align 8
    CUtlString m_RequiredSpecialDependency; // offset 0x118, size 0x8, align 8
    bool m_bPreventDirectCompile; // offset 0x120, size 0x1, align 1
    bool m_bCannotBeAMultiParentChildCompile; // offset 0x121, size 0x1, align 1
    bool m_bPrefersIconForThumbnail; // offset 0x122, size 0x1, align 1
    bool m_bAllowedToCompileInTestMode; // offset 0x123, size 0x1, align 1
    char _pad_0124[0x4]; // offset 0x124
};
