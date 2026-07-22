#pragma once

class CComicBook  // sizeof 0xA8, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    int32 m_nId; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_Name; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strNameToken; // offset 0x10, size 0x8, align 8 | MPropertyDescription
    CPanoramaImageName m_CoverImage; // offset 0x18, size 0x10, align 8 | MPropertyDescription
    int32 m_nNumberOfImages; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    char _pad_002C[0x4]; // offset 0x2C
    CUtlString m_URLForImages; // offset 0x30, size 0x8, align 8 | MPropertyDescription
    int32 m_nNumDigitsInFilename; // offset 0x38, size 0x4, align 4 | MPropertyDescription
    char _pad_003C[0x4]; // offset 0x3C
    CUtlString m_ImageFileExtension; // offset 0x40, size 0x8, align 8 | MPropertyDescription
    CUtlVector< ELanguage > m_AllowedLanguages; // offset 0x48, size 0x18, align 8 | MPropertyDescription
    CUtlOrderedMap< ELanguage, ELanguage > m_LanguageOverrideMap; // offset 0x60, size 0x28, align 8 | MPropertyDescription
    CUtlVector< int32 > m_StartPages; // offset 0x88, size 0x18, align 8 | MPropertyDescription
    int32 m_nCacheBustingVersion; // offset 0xA0, size 0x4, align 4 | MPropertyDescription
    char _pad_00A4[0x4]; // offset 0xA4
};
