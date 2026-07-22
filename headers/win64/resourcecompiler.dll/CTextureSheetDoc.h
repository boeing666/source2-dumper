#pragma once

class CTextureSheetDoc  // sizeof 0x90, align 0x8 (texturelib) {MGetKV3ClassDefaults MVDataRoot MVDataSingleton MVDataPreviewWidget MVDataFileExtension}
{
public:
    PackingMode_t m_ePackingMode; // offset 0x0, size 0x4, align 4
    int32 m_NumMips; // offset 0x4, size 0x4, align 4
    bool m_bHasDecalParams; // offset 0x8, size 0x1, align 1 | MPropertySuppressExpr
    char _pad_0009[0x7]; // offset 0x9
    CUtlString m_sLayoutOwnerSheet; // offset 0x10, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlStringMap< CTextureSheetDoc_Sequence* > m_Sequences; // offset 0x18, size 0x78, align 8 | MVDataPromoteField
};
